# Coding In C Using Ubuntu Linux OS

## Configuration
### Linux Configuration
Linux comes with its inbuilt C code compiler named `gcc`
- **Create a directory in [Ubuntu](https://ubuntu.com/download/desktop)**
```sh
mkdir directoryname
```
- **Move to the created directory**
```sh
cd directoryname
```
- **Create a file for C code**
```sh
gedit filename.c
```
- **For compilation of code**
```sh
gcc filename.c -o filename.o
```
- **If `math.h` is used then for compilation of code**
```sh
gcc filename.c -o filename.o -lm
```
- **For running the correctly compiled code**
```sh
./filename.o
```

### Windows Configuration
**Windows never comes with any inbuilt C code compiler**
- **Install an external ide. My suggestion is [Dev Cpp](https://sourceforge.net/projects/dev-cpp/files/Binaries/Dev-C%2B%2B%204.9.9.2/devcpp-4.9.9.2_setup.exe/download).**
- **In external ide you can automatically compile and run your code**

## Technicalities
### Topics you should learn before seeing this codes
- **Data types in C**
- **Basic operations in C**
- **Functions in C**
- **Recursion method**
- **Loops and conditions**
- **Arrays in C**
- **Pointers in C**
- **Strings and structures**
- **Files in C**
- **Other minor topics**
### Size of various data types in C
| Data Type| Indicator| Specifier| Size  |
| -------- | -------- | ---------|-------|
| Integer  | int      | %d       | 2 byte|
| Decimal  | float    | %f       | 4 byte|
| Character| char     | %c       | 1 byte|

### A basic hello world programme in C
```c
#include<stdio.h>
int main()
{
    printf("Hello World");
    return 0;
}
```
### Appendix
![C Badge](https://img.shields.io/badge/C-A8B9CC?logo=c&logoColor=fff&style=for-the-badge)
&nbsp;
![Linux Badge](https://img.shields.io/badge/Linux-FCC624?logo=linux&logoColor=000&style=for-the-badge)
 &nbsp;
![Ubuntu](https://img.shields.io/badge/Ubuntu-E95420?logo=ubuntu&logoColor=fff&style=for-the-badge)
