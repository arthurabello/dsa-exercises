# eda-exercicios

Repositório com as soluções dos exercícios propostos em aula, do curso de [Estruturas de Dados e Algoritmos](https://github.com/matwerner/fgv-ed) da FGV/EMAp.

## Requisitos

Para compilar e rodar os códigos deste repositório, você precisará do compilador `gcc` instalado em seu sistema. Caso não tenha, siga as instruções abaixo para instalá-lo:

### Linux (Ubuntu/Debian)
```sh
sudo apt update
sudo apt install gcc
```

### macOS (usando Homebrew)
```sh
brew install gcc
```

### Windows 
1. Desinstale seu sistema operacional (imediatamente)
2. Instale um com kernel Linux

## Como Compilar e Executar os Exercícios

Os arquivos de código-fonte estão organizados por aula dentro das respectivas pastas. Para compilar um arquivo `.cpp`, utilize o seguinte comando no terminal:

```sh
g++ -o nome_do_executavel caminho_para_o_arquivo.cpp
```

Por exemplo, para compilar o arquivo [`exercicio_1.cpp`](exercicio_1.cpp) dentro da pasta `aula_3`, execute:

```sh
g++ -o aula_3/exercicio_1 aula_3/exercicio_1.cpp
```

Para rodar o programa após a compilação:

```sh
./aula_3/exercicio1
```

## Licença

Este repositório está licenciado sob a **GPL-3.0**. Para mais detalhes, consulte o arquivo [`LICENSE`](LICENSE).

