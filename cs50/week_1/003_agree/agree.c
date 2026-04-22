#include <stdio.h>
#include <cs50.h>

int main(void) {
    char option = get_char("Do you agree? ");

    if (option == 'y' || option == 'Y') {
        printf("Agreed");
    } else {
        printf("Not agreed");
    }
}