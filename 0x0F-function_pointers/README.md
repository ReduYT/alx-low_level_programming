# Task Descriptions

## Task 0: What's my name
- Write a function that prints a name.
- Prototype: `void print_name(char *name, void (*f)(char *))`

## Task 1: If you spend too much time thinking about a thing, you'll never get it done
- Write a function that executes a given function on each element of an array.
- Prototype: `void array_iterator(int *array, size_t size, void (*action)(int))`

## Task 2: To hell with circumstances; I create opportunities
- Write a function that searches for an integer in an array and returns its index.
- Prototype: `int int_index(int *array, int size, int (*cmp)(int))`

## Task 3: A goal is not always meant to be reached, it often serves simply as something to aim at
- Create a program that performs simple operations (addition, subtraction, multiplication, division, modulo) on two integers.
- Usage: `calc num1 operator num2`
- Handle various error conditions.
- Implement this program in multiple files: `3-calc.h`, `3-op_functions.c`, `3-get_op_func.c`, and `3-main.c`.

Author: Rediet Y.
