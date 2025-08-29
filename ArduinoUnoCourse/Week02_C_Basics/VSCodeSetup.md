# VS Code Setup
The goal of this manual is to have an easy way to setup VSCode for students and instructors alike. It will teach you how to use C in VSCode.
## 1. Obtaining VSCode
 https://code.visualstudio.com/download
Using the link above download VSCode, depending on your computer hardware download the appropiate version. 

## 2. C/C++ Toolchain and Compiler
VSCode on its own is just a text editor with enhanced GUI features. To make it a C/C++ IDE we need to download additional plug-ins. Firt we need a compiler and a toolchain. 
**This is very different among OSes. Make sure you are in the correct section**
### Windows- MinGW(Minimalistic GNU compiler for windows)
1) download MinGW https://sourceforge.net/projects/mingw/ 
2) launch the installer, leave all the basic settings as default, **but make sure that the following four boxes are checked** mingw32-base, mingw32-gcc-g++, msys-base and mingw-developer-toolkit. Also make sure that the path is C:\MinGW
3) Close the manager window, if you had to make any changes just click apply
4) Finish the installation
5) Edit the enviroment variables press start and search for it:
![](/ArduinoUnoCourse/images/EV0.png)
6) In this tab press the enviroment variables button at the bottom right to bring out the setup. 
8) in the system variable panel double click on path to bring out the path variable details
![](/ArduinoUnoCourse//images/EV1.png)
9) Add the following two new paths “C:\MinGW\bin” and “C:\MinGW\msys\1.0\bin”, (do not include the “ ”),then OK

### MacOS - Homebrew + GNU
Homebrew is a lightweight command line app installer. 
1) launch terminal on mac
2) copy and paste the following
`/bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)`
3) press enter when prompted for confirmation. It might take time to install depending on internet speeds
5) Install GNU and compiler by using the following
`brew install gcc`
## 3. Configure VSCode to work with GNU
1) Open the extensions package in VSCode
2) Search for the following the following extensions and install them:
 a. C/C++
 b. C/C++ extension pack
3) Open settins by clicking *File -> Preferences -> Settings*
4) Serch for compiler file and open the json file. Find C_Cpp.default.compilerPath” property, and add “${default}” to i
5) Note if VSCode throws and error when trying to compile for the first time, come back here and update the path according to your OS
**Windows** replace default with C:\\MinGW\\bin
**MacOS** replace default with /usr/bin/clang
We are now ready to use VSCode, procedd to CM02

