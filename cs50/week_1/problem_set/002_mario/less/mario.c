#include <cs50.h>
#include <stdio.h>

// prototypes
int ask_for_height(void);
void print_pyramid(int height);
void print_row(int spaces, int bricks);

int main(void)
{
    // Promt the user fot the pyramid’s height
    int n = ask_for_height();
    // Print a pyramid of that height
    print_pyramid(n);
}

// function implementations
int ask_for_height(void)
{
    int n;
    do
    {
        n = get_int("Height: ");
    }
    while (n <= 0);
    return n;
}

void print_pyramid(int height)
{
    for (int row = height; row > 0; row--)
    {
        // Print row of bricks
        print_row(row - 1, height);
    }
}

void print_row(int spaces, int bricks)
{
    for (int column = 0; column < bricks; column++)
    {
        if (column < spaces)
        {
            // Print spaces
            printf(" ");
        }
        else
        {
            // Print bricks
            printf("#");
        }
    }
    printf("\n");
}
