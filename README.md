# Pushswap

{EPITECH.} first year project.

C program that sorts a list of integers passed as arguments.

## Requirements

 - [Make](https://www.gnu.org/software/make/)
 - [GCC](https://gcc.gnu.org/)

## Compilation

Navigate to the root of the repository from your Terminal and run `make` to build the `push_swap` executable file.

## How to use Pushswap?

Pass a list of integers as argument to `./push_swap`:
```
./push_swap 42 84 21 ...
```

Pushswap prints the series of operations necessary to sort the list given as argument.

The operations can be:
- **sa**: swap the first two elements of the list (nothing will happen if there aren't enough elements).
- **ra**: rotate the list toward the beginning, the first element will become the last.
- **rra**: rotate the list toward the end, the last element will become the first.

## Options

 - `-v`: verbose mode (prints of the list after each operation)

## Author

* **Ronan Boiteau** ([GitHub](https://github.com/ronanboiteau) / [LinkedIn](https://www.linkedin.com/in/ronanboiteau/))
