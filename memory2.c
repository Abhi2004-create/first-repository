#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char *ptr;
    ptr = malloc(15 * sizeof(char));
    if (ptr == NULL)
    {
        printf("Could not able to find any memory location\n");
    }
    else
    {
        strcpy(ptr, "Abhishek Yadav");
    }
    printf("The allocated data is: %s\n", ptr);
    ptr = realloc(ptr, 50 * sizeof(char));
    if (ptr == NULL)
    {
        printf("Could not able to find any memory location\n");
    }
    else
    {
        strcpy(ptr, "My formal name is Mr. Abhishek Yadav\n");
    }
    printf("Stored data of Resized memory is: %s\n", ptr);
    free(ptr);
}