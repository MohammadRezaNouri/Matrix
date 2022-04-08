# Matrix
A small calculator for working with matrices

In this program, addition, subtraction, power, transposition and several other operations have been implemented.
## Prerequisite
[CMake](https://cmake.org/) is used to control the software compilation process using simple platform and compiler independent configuration files, and generate native makefiles and workspaces that can be used in the compiler environment of your choice.

Of course, you can also compile without using cmake.
## Compatibility
You should be able to run this program anywhere. For the compiling process, both of [GCC](https://gcc.gnu.org/) and [Clang](https://clang.llvm.org/) should work.
### Tested Environments
- OS:  [Microsoft](https://www.microsoft.com/uk-ua/) Windows 10 Pro x64
- Compiler: [GCC](https://gcc.gnu.org/) C++ Compiler (8.1.0)
- Building: [CMake](https://cmake.org/) build system (3.19.0-rc1)
## Cloning
```
git clone https://github.com/MohammadRezaNouri/Matrix
```
## Installation
### Windows
open the cmd or PowerShell and go to files directory with cd command and execute the following commands :

- Compile

    With [CMake](https://cmake.org/)
    ```bash
    cd build
    cmake ..
    cmake --build .
    cd Debug
    ./app
    ```
    Without [CMake](https://cmake.org/)
    
    Put all .h and .cpp files in one folder.
    ```bash
    g++ *.cpp -o app -O2
    ./app
    ```

- Run

    ```\Tabular-data\build\Debug\app.exe```

### Linux
open the terminal and go to file directory with cd command and execute the following commands :
- Compile

    With [CMake](https://cmake.org/)
    ```bash
    rm -r build
    mkdir build
    cd build
    cmake ..
    make
    ./app
    ```
    Without [CMake](https://cmake.org/)
    
    Put all .h and .cpp files in one folder.
    ```bash
    g++ *.cpp -o app -O2
    ./app
    ```
## Usage
For math topics, matrix section

Practice programming
## In the future
Become a graphic application.

Complete main.cpp
## Contributing
Your contributions are always welcome.
## Thanks to
#### [Mr Amirabbas Asadi](https://github.com/amirabbasasadi)
#### [Mr Ahmad Jafari](https://github.com/jafari-dev)
## License
Licensed under GPLv3. See [LICENSE.md](https://github.com/MohammadRezaNouri/Matrix/blob/main/LICENSE.md).
