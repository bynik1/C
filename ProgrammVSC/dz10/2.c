#include <stdio.h>
#include <string.h>

char string_concat(char *array1, char *array2, char *destination)
{

    for(int i = 0; i < strlen(array1); i++)
    {
        destination[i] = array1[i];
    }

    for(int j = 0; j < strlen(array2) + 1; j++)
    {
        destination[strlen(array1) + j] = array2[j];
    }

    return *destination;
}


char string_copy(char *array, char *copy_array)
{

    for(int i = 0; i < strlen(array) + 1; i++)
    {
        copy_array[i] = array[i];
    }

    return *copy_array;
}


int main()
{
    char array1[]="ffVCVCdfdf";
    char array2[]="fdffd";

    char copy_array[strlen(array1)];
    string_copy(array1, copy_array);
    printf("%s\n", copy_array);

    char destination[strlen(array1) + 1 + strlen(array2)];
    string_concat(array1, array2, destination);
    printf("%s\n", destination);

    return 0;
}