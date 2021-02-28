// Program to sort Elements in descending order using C
#include <stdio.h>

int main(void)
{
    // define array
    int array[6] = {4, 6, 3, 12, 1, 7};

    // loop through (array_length - 1)
    for (int i = 0; i < 5; i++)
    {
        // set index
        int index = i;

        // loop through 1st value of array to array_length
        for (int j = i + 1; j < 5; j++)
        {
            // check for greater values
            if (array[j] > array[index])
            index = j;
        }
        int temp = array[i];

        array[i] = array[index];

        array[index] = temp;

    }

    for (int i = 0; i < 5; i++)
    {
        printf("%i ", array[i]);
    }

    printf("\n");
}
