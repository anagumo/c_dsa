#include <stdio.h>
#include <cs50.h>

// prototypes
int ask(void);
void meow(int times);

// main
int main(void) {
    int n = ask();
    meow(n);
}

// function implementations
int ask(void) {
    int n;
    do {
        n = get_int("what's n? ");
    } while (n <= 0);

    return n;
}

void meow(int times) {
     for(int i = 0; i < times; i++) {
        printf("meow\n");
    }
}