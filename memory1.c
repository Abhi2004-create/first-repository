#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char *ptr;
    ptr = calloc(15, sizeof(char));
    if (ptr == NULL)
    {
        printf("Could not able to find any memory location\n");
    }
    else
    {
        strcpy(ptr, "Abhishek Yadav");
    }
    printf("The data stored in that location is: %s\n", ptr);

    free(ptr);

    return 0;
}