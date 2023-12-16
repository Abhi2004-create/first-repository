#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char *ptr;
    ptr = malloc(15 * sizeof(char));
    if (ptr == NULL)
    {
        printf("Could not able to allocate the memory space\n");
    }
    else
    {
        strcpy(ptr, "Abhishek Yadav");
    }
    printf("Data stored in allocated memory is: %s\n", ptr);
    ptr = realloc(ptr, 35 * sizeof(char));
    if (ptr == NULL)
    {
        printf("Could not able to allocate the memory space\n");
    }
    else
    {
        strcpy(ptr, "My formal name is Mr. Abhishek Yadav\n");
    }
    printf("Data stored in resized allocated memory is: %s\n", ptr);
    free(ptr);
}