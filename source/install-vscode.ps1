# 1. download this file on your PC. 
# 2. Run PowerShell as administrator
# 3. Navigate to the download folder
# 4. Run this file by `.\install-vscode.ps1`

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
        "ms-vscode.cpptools-extension-pack" # C++ Extension Pack
    )

    foreach ($extension in $extensions) {
        Write-Output "Installing extension: $extension..."
        code --install-extension $extension
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

# Install C++ extensions
Install-CppExtensions

Write-Output "Installation of Visual Studio Code and C++ extensions completed successfully!"
