# Set up Visual Studio Code 
Follow the steps below to setup visual studio code for programming:
The script downloaded in step 1 includes instructions on:
 - downloading and installing visual studio code,
 - some necessary extensions e.g. cpptools, cmaketools, cpptools-extension-pack and code-runner.
 - installing Chocolatey which is a package manager for windows required to install mingw g++.
 - adds the path of the compilers binary to the environment variable.

1. Download [PowerShell Script File](../source/install-vscode.ps1) on your PC. 
2. Run PowerShell as administrator
3. Navigate to the download folder
4. Run the command `Set-ExecutionPolicy -Scope Process Unrestricted` in the PowerShell
5. Run this file by typing `.\install-vscode.ps1`