#include <cs50.h>
#include <stdio.h>

// prototypes
int ask_for_change_owed();
int calculate_coins(int cents);

int main(void)
{
    int cents = ask_for_change_owed();
    int coins = calculate_coins(cents);
    printf("%i\n", coins);
}

int ask_for_change_owed()
{
    int cash;

    // Prompt the user for change owed, in cents
    do
    {
        cash = get_int("Change owed: ");
    }
    while (cash <= 0);

    return cash;
}

int calculate_coins(int cents)
{
    int coins = 0;

    while (cents > 0)
    {
        // calculate how many quarters you should give to the customer
        while (cents >= 25)
        {
            cents = cents - 25;
            coins++;
        }

        // calculate how many dimes you should give to the customer
        while (cents >= 10)
        {
            cents = cents - 10;
            coins++;
        }

        // calculate how many dimes you shoul give to the customer
        while (cents >= 5)
        {
            cents = cents - 5;
            coins++;
        }

        // calculate how manny pennies you should give to the user
        while (cents >= 1)
        {
            cents = cents - 1;
            coins++;
        }
    }

    return coins;
}