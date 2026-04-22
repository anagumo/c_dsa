#include <stdio.h>
#include <cs50.h>

int main(void) {
    int x;
    int y;

    x = get_int("What's the value of x? ");
    y = get_int("What's the value of y? ");

    if (x < y) {
        printf("x is lees than y\n");
    } else if (x > y) {
        printf("x is greater than y\n");
    } else {
        printf("x is equal to y\n");
    }
}