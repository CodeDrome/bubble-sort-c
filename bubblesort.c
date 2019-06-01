
#include<stdio.h>

#include"bubblesort.h"

#define RED   "\x1B[31m"
#define GRN   "\x1B[32m"
#define RESET "\x1B[0m"

// --------------------------------------------------------
// FUNCTION bubblesort
// --------------------------------------------------------
void bubblesort(int* array, int size)
{
    puts("Unsorted...");
    printarray(array, size, size);

    puts("Bubble Sorting...");

    int lastindex = size - 2;
    int index;

    while(lastindex >= 0)
    {
        for(index = 0; index <= lastindex; index++)
        {
            if(array[index] > array[index+1])
            {
                array[index] = array[index] ^ array[index+1];
                array[index+1] = array[index] ^ array[index+1];
                array[index] = array[index] ^ array[index+1];
            }
        }

        printarray(array, size, lastindex);

        lastindex--;
    }

    puts("Sorted!");
}

//--------------------------------------------------------
// FUNCTION printarray
//--------------------------------------------------------
void printarray(int* array, int size, int sortedto)
{
    for(int i = 0; i < size; i++)
    {
        if(i > sortedto)
            printf(GRN "%3d " RESET, array[i]);
        else
            printf(RED "%3d " RESET, array[i]);
    }

    printf("\n");
}
