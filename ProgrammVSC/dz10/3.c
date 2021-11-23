#include <stdio.h>
#include <string.h>
#define buffer 50

char string_concat_safe(char *array1, char *array2, char *destination, int bufferr)
{   
    if(buffer > strlen(array1))
    {
        for(int i = 0; i < strlen(array1) + 1; i++)
        {
            destination[i] = array1[i];
        }

        if(buffer > strlen(array2) + 1)
        {
            for(int j = 0; j < strlen(array2) + 1; j++)
            {
                destination[strlen(array1) + j] = array2[j];
            }
        }
        else
        {
            for(int j = 0; j < buffer - strlen(array2) + 1 ; j++)
            {
                destination[strlen(array1) + j] = array2[j];
            }
        }
    }
    else
    {
        for(int i = 0; i < buffer; i++)
            {
                destination[i] = array2[i];
            }
    }

    return *destination;
}


char string_copy_safe(char *array, char *copy_array, int bufferr)
{
    if(buffer < strlen(array) + 1)
    {
        for(int i = 0; i < bufferr - 1; i++)
        {
            copy_array[i] = array[i];
        }
    }
    else
    {
        for(int i = 0; i < strlen(array) + 1; i++)
        {
            copy_array[i] = array[i];
        }
    }

    return *copy_array;
}


int main()
{
    char array1[]="ffVCVCdfdf";
    char array2[]="fdffd";

    char copy_array[strlen(array1)];
    string_copy_safe(array1, copy_array, buffer);
    printf("%s\n", copy_array);

    char destination[strlen(array1) + 1 + strlen(array2)];
    string_concat_safe(array1, array2, destination, buffer);
    printf("%s\n", destination);

    return 0;
}