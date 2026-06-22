# TicTacToe en C++

Proyecto académico de Tres en Raya (Tic-Tac-Toe) desarrollado en C++ para practicar programación modular y estructuras de datos básicas.

## Descripción

Este proyecto implementa un juego de TicTacToe en consola.
Incluye la lógica principal del juego, validación de jugadas y verificación de ganador o empate.

## Estructura general

- `main.cpp`: punto de entrada del programa.
- `logica.h` y `logica.cpp`: funciones principales del juego.
- `solucion.h` y `solucion.cpp`: implementación de la solución solicitada.
- `constantes.h`: constantes globales.
- `Makefile`: compilación del proyecto.

## Compilación

Si tienes `g++` instalado, puedes compilar con:

```bash
g++ *.cpp -o output/main.exe
```

## Ejecución

Luego de compilar, ejecuta el programa con:

```bash
output/main.exe
```

## Nota

En este proyecto también se usa un archivo `tasks.json` de VS Code para automatizar la compilación desde el editor.
