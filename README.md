# dsa-exercises

Repository with solutions to the exercises proposed in class for the course [Estruturas de Dados e Algoritmos](https://github.com/matwerner/fgv-ed) at FGV/EMAp during the semester 2025.1

## Requirements

To compile and run the code in this repository, you will need the `gcc` compiler installed on your system. If you don’t have it, follow the instructions below to install it:

### Linux (Ubuntu/Debian)
```sh
sudo apt update
sudo apt install gcc
```

### macOS (using Homebrew)
```sh
brew install gcc
```

### Windows  
1. Uninstall your operating system (immediately)  
2. Install one with a Linux kernel  

## How to Compile and Run the Exercises

The source code files are organized by class within their respective folders. To compile a `.cpp` file, use the following command in the terminal:

```sh
g++ -o executable_name path_to_file.cpp
```

For example, to compile the file [`exercise_1.cpp`](https://github.com/arthurabello/eda-exercicios/blob/main/Introduction%20to%20C%2B%2B/lecture%203/exercise_1.cpp) inside the `lecture 3` folder, run:

```sh
g++ -o lecture_3/exercise_1 Introduction\ to\ C++/lecture\ 3/exercise_1.cpp
```

To run the program after compilation:

```sh
./lecture_3/exercise_1
```

## License

This repository is licensed under **GPL-3.0**. For more details, see the [`LICENSE`](LICENSE) file.