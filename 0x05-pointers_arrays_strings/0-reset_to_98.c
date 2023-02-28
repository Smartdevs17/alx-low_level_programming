
#include "main.h"

void reset_to_98(int *n)
{
    // Update the value that the pointer points to
    *n = 98;
}

int main() 
{
    int number = 5;

    // Print the original value of the number
    printf("Original value of number: %d\n", number);

    // Call the reset_to_98() function
    reset_to_98(&number); 

    // Print the value of the number after calling reset_to_98
    printf("Value of number after reset_to_98(): %d\n", number); 

    return 0;
}
