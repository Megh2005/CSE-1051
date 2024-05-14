[![](https://github.com/jpoehnelt/in-solidarity-bot/raw/main/static//badge-for-the-badge.png)](https://github.com/apps/in-solidarity)
# Configuration
## Linux Configuration
**Linux comes with its inbuilt C code compiler named `gcc`**
- **To create a directory in [Ubuntu](https://ubuntu.com/download/desktop) you need to run**
```sh
mkdir directoryname
```
- **Move to the created directory**
```sh
cd directory name
```
- **To create a file for C code, run in the terminal**
```sh
gedit filename.c
```
- **For compilation of code run**
```sh
gcc filename.c -o filename.o
```
- **If you are using `math.h` then for compilation run**
```sh
gcc filename.c -o filename.o -lm
```
- **After successful compilation without errors, for running the code run**
```sh
./filename.o
```

## Windows Configuration
**Windows never comes with any inbuilt C code compiler**
- **Install an external ide. My suggestion is [this](https://sourceforge.net/projects/dev-cpp/files/Binaries/Dev-C%2B%2B%204.9.9.2/devcpp-4.9.9.2_setup.exe/download). Don't use Visual Studio Code**
- **In that external ide you can directly create folders and code files by clicking guided buttons**
- **In external ide you can directly and automatically compile and run your code**

# Technicalities
## Topics you should learn before seeing this codes
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
## Size of various data types in C
| Data Type| Indicator| Specifier| Size  |
| -------- | -------- | ---------|-------|
| Integer  | int      | %d       | 2 byte|
| Decimal  | float    | %f       | 4 byte|
| Character| char     | %c       | 1 byte|

## A basic hello world programme in C
```c
#include<stdio.h>
int main()
{
    printf("Hello World");
    return 0;
}
```