#include <stdio.h>
#include <string.h>

char string_concat_safe(char *array1, char *array2, char *destination)
{   
    if (BUFSIZ > strlen(array1))
    {
        for(int i = 0; i < strlen(array1) + 1; i++)
        {
            destination[i] = array1[i];
        }

        if (BUFSIZ > strlen(array2) + 1)
        {
            for(int j = 0; j < strlen(array2) + 1; j++)
            {
                destination[strlen(array1) + j] = array2[j];
            }
        }
        else
        {
            for(int j = 0; j < BUFSIZ - strlen(array2) + 1 ; j++)
            {
                destination[strlen(array1) + j] = array2[j];
            }
        }
    }
    else
    {
        for(int i = 0; i < BUFSIZ; i++)
            {
                destination[i] = array2[i];
            }
    }

    return *destination;
}


char string_copy_safe(char *array, char *copy_array)
{
    if (BUFSIZ < strlen(array) + 1)
    {
        for(int i = 0; i < BUFSIZ - 1; i++)
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
    string_copy_safe(array1, copy_array);
    printf("%s\n", copy_array);

    char destination[strlen(array1) + 1 + strlen(array2)];
    string_concat_safe(array1, array2, destination);
    printf("%s\n", destination);
    //Зад
    //sdsds
    //dsdsd

    return 0;
}