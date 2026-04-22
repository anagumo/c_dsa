/**
 * Imagine we wanted to emulate the visual of the game Super Mario Bros
 * 1. Print a row of n bricks
 * -> input: 4
 * -> output: [][][]
 * 2. Print a column of n bricks
 * -> input: 3
 * -> output: []
 *            []
 *            []
 * 3. Print a n-by-n grid of bricks
 * -> input: 3
 * -> output: [][][]
 *            [][][]
 *            [][][]
 */
#include <stdio.h>
#include <cs50.h>

// prototypes
int ask(void);
void print_row(int times);
void print_column(int times);
void print_grid(int times);

// main function
int main(void) {
    int input = ask();

    printf("This is a row:\n");
    print_row(input);
    printf("This is a column:\n");
    print_column(input);
    printf("This is a grid:\n");
    print_grid(input);
}

// function implementations
int ask(void) {
    int number;
    do {
        number = get_int("what's n? ");
    } while (number <= 0);

    return number;
}

void print_row(int times) {
    for(int i = 0; i < times; i++) {
        printf("[%i]", i);
    }
    printf("\n");
}

void print_column(int times) {
    for(int i = 0; i < times; i++) {
        printf("[%i]\n", i);
    }
}

void print_grid(int times) {
    //const int times = 3;
    for(int i = 0; i < times; i++) {
        print_row(times);
    }
}