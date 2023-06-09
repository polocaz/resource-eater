#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define ONE_GB (1024 * 1024 * 1024)

int main()
{
    size_t numBytes = ONE_GB / sizeof(char);
    char* array = (char*)malloc(numBytes);

    if (array == NULL)
    {
      printf("Memory allocation failed.\n");
      return 1;
    }

    for (size_t i=0; i < numBytes; i++)
    {
      array[i] = 'A';
    }


    printf("1 gigabyte of memory allocated. Enter 'free' to deallocate memory:");

    // Hold until free command
    while(true)
    {
        char input[10];
        scanf_s("%s", input);

        if (strcmp(input, "free") == 0)
        {
            free(array);
            printf("Memory deallocated.\n");
            return 0;
        }
        else
        {
            printf("Wrong input, enter 'free'");
        }
    }
}
