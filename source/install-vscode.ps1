# Function to detect system architecture and return the appropriate download URL
function Get-VSCodeDownloadUrl {
    $architecture = (Get-WmiObject -Class Win32_OperatingSystem).OSArchitecture
    if ($architecture -eq "64-bit") {
        return "https://aka.ms/win32-x64-user-stable"
    } elseif ($architecture -eq "32-bit") {
        return "https://aka.ms/win32-user-stable"
    } else {
        throw "Unsupported architecture: $architecture"
    }
}

# Function to download and install Visual Studio Code
function Install-VSCode {
    $vscodeInstallerUrl = Get-VSCodeDownloadUrl
    $vscodeInstallerPath = "$env:TEMP\VSCodeSetup.exe"

    # Download Visual Studio Code installer
    Write-Output "Downloading Visual Studio Code..."
    Invoke-WebRequest -Uri $vscodeInstallerUrl -OutFile $vscodeInstallerPath

    # Install Visual Studio Code silently
    Write-Output "Installing Visual Studio Code..."
    Start-Process -FilePath $vscodeInstallerPath -ArgumentList "/verysilent /norestart" -Wait

    # Remove the installer file
    Remove-Item $vscodeInstallerPath
}

# Function to install necessary C++ extensions in Visual Studio Code
function Install-CppExtensions {
    $extensions = @(
        "ms-vscode.cpptools",          # C/C++ Extension
        "ms-vscode.cmake-tools",       # CMake Tools
        "ms-vscode.cpptools-extension-pack", # C++ Extension Pack
        "formulahendry.code-runner"    # Code Runner Extension 
    )

    foreach ($extension in $extensions) {
        Write-Output "Installing extension: $extension..."
        code --install-extension $extension
    }
}

# Function to install Chocolatey if not already installed
function Install-Chocolatey {
    if (-Not (Get-Command choco -ErrorAction SilentlyContinue)) {
        Write-Output "Chocolatey is not installed. Installing Chocolatey..."
        Set-ExecutionPolicy Bypass -Scope Process -Force
        [System.Net.ServicePointManager]::SecurityProtocol = [System.Net.SecurityProtocolType]::Tls12
        Invoke-Expression ((New-Object System.Net.WebClient).DownloadString('https://chocolatey.org/install.ps1'))
    }
}

# Function to install g++ using Chocolatey
function Install-Gpp {
    Write-Output "Installing g++ (mingw) compiler..."
    choco install mingw -y
}

# Function to add g++ to the PATH environment variable
function Add-GppToPath {
    $mingwPath = "C:\ProgramData\chocolatey\lib\mingw\tools\install\mingw64\bin"
    
    if (-Not ($env:Path -split ";" | ForEach-Object { $_.Trim() } | Contains $mingwPath)) {
        Write-Output "Adding g++ (MinGW) to the PATH environment variable..."
        [System.Environment]::SetEnvironmentVariable("Path", "$($env:Path);$mingwPath", [System.EnvironmentVariableTarget]::User)
    } else {
        Write-Output "g++ (MinGW) is already in the PATH environment variable."
    }
}

# Check if Visual Studio Code is already installed
$codePath = "C:\Users\$env:USERNAME\AppData\Local\Programs\Microsoft VS Code\Code.exe"
if (Test-Path $codePath) {
    Write-Output "Visual Studio Code is already installed."
} else {
    Install-VSCode
}

# Wait for a short time to ensure VS Code is fully installed
Start-Sleep -Seconds 10

# Install Chocolatey if needed and then install g++
Install-Chocolatey
Install-Gpp

# Add g++ to the PATH
Add-GppToPath

# Install C++ extensions
Install-CppExtensions

Write-Output "Installation of Visual Studio Code, g++ compiler, and C++ extensions completed successfully!"
