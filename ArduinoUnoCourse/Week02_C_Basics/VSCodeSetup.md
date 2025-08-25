# VS Code Setup
The goal of this manual is to have an easy way to setup VSCode for students and instructors alike. It will teach you how to use C in VSCode as well as a intro to using the terminal to compile and run your programs.
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
![](ArduinoUnoCourse/images/EV0.png)