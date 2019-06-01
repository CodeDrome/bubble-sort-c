
#include<stdio.h>
#include<time.h>
#include<stdlib.h>

#include"bubblesort.h"

//--------------------------------------------------------
// FUNCTION main
//--------------------------------------------------------
int main()
{
    puts("-----------------");
    puts("| codedrome.com |");
    puts("| Bubble Sort   |");
    puts("-----------------\n");

    int size = 16;

    int* data = malloc(size * sizeof(int));

    srand(time(NULL));

    for(int i = 0; i < size; i++)
    {
        data[i] = (rand() % 128);
    }

    bubblesort(data, size);

    free(data);

    return EXIT_SUCCESS;
}
