#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <malloc.h>

void string_concat_safe(char *array1, char *array2){

    for(int i = 0; i < strlen(array1); i++){
        printf("%c", array1[i]);
    }

    printf("_");

    for(int i = 0; i < strlen(array2); i++){
        printf("%c", array2[i]);
    }

    printf("\n");
}


void string_copy_safe(char *array, char *destination, int buffer_size){ 
    int i;
    for(i = 0; i < buffer_size - 1; i++) {
        destination[i] = array[i];
    }
    destination[i] = '\0';
}

void puk() {
    char* gug = "1111111";
}

int main()
{
    char array1[] = "sdfadfsdfadfadfasdfasdfassssssssssssssssssssssssssssssssssssssssssssssssssssssssssssdfadfadfasdfasdfassssssssssssssssssssssssssssssssssssssssssssssssssssssssssssdfadfadfasdfasdfassssssssssssssssssssssssssssssssssssssssssssssssssssssssssssdfadfadfasdfasdfassssssssssssssssssssssssssssssssssssssssssssssssssssssssssssdfadfadfasdfasdfassssssssssssssssssssssssssssssssssssssssssssssssssssssssssssdfadfadfasdfasdfassssssssssssssssssssssssssssssssssssssssssssssssssssssssssssdfadfadfasdfasdfasssssssssssssssssssssssssssssssssssssssssssssssssssssssssssvvsdfadfadfasdfasdfassssssssssssssssssssssssssssssssssssssssssssssssssssssssssssdfadfadfasdfasdfassssssssssssssssssssssssssssssssssssssssssssssssssssssssssssdfadfadfasdfasdfassssssssssssssssssssssssssssssssssssssssssssssssssssssssssssdfadfadfasdfasdfassssssssssssssssssssssssssssssssssssssssssssssssssssssssssssdfadfadfasdfasdfassssssssssssssssssssssssssssssssssssssssssssssssssssssssssssdfadfadfasdfasdfassssssssssssssssssssssssssssssssssssssssssssssssssssssssssssdfadfadfasdfasdfassssssssssssssssssssssssssssssssssssssssssssssssssssssssssssdfadfadfasdfasdfassssssssssssssssssssssssssssssssssssssssssssssssssssssssssssdfadfadfasdfasdfassssssssssssssssssssssssssssssssssssssssssssssssssssssssssssdfadfadfasdfasdfassssssssssssssssssssssssssssssssssssssssssssssssssssssssssssdfadfadfasdfasdfassssssssssssssssssssssssssssssssssssssssssssssssssssssssssssdfadfadfasdfasdfassssssssssssssssssssssssssssssssssssssssssssssssssssssssssssdfadfadfasdfasdfassssssssssssssssssssssssssssssssssssssssssssssssssssssssssssdfadfadfasdfasdfassssssssssssssssssssssssssssssssssssssssssssssssssssssssssssdfadfadfasdfasdfassssssssssssssssssssssssssssssssssssssssssssssssssssssssssssdfadfadfasdfasdfassssssssssssssssssssssssssssssssssssssssssssssssssssssssssssdfadfadfasdfasdfassssssssssssssssssssssssssssssssssssssssssssssssssssssssssssdfadfadfasdfasdfassssssssssssssssssssssssssssssssssssssssssssssssssssssssssssdfadfadfasdfasdfassssssssssssssssssssssssssssssssssssssssssssssssssssssssssssdfadfadfasdfasdfassssssssssssssssssssssssssssssssssssssssssssssssssssssssssssdfadfadfasdfasdfassssssssssssssssssssssssssssssssssssssssssssssssssssssssssssdfadfadfasdfasdfassssssssssssssssssssssssssssssssssssssssssssssssssssssssssssdfadfadfasdfasdfassssssssssssssssssssssssssssssssssssssssssssssssssssssssssssdfadfadfasdfasdfassssssssssssssssssssssssssssssssssssssssssssssssssssssssssssdfadfadfasdfasdfassssssssssssssssssssssssssssssssssssssssssssssssssssssssssssdfadfadfasdfasdfassssssssssssssssssssssssssssssssssssssssssssssssssssssssssssdfadfadfasdfasdfassssssssssssssssssssssssssssssssssssssssssssssssssssssssssssdfadfadfasdfasdfassssssssssssssssssssssssssssssssssssssssssssssssssssssssssssdfadfadfasdfasdfassssssssssssssssssssssssssssssssssssssssssssssssssssssssssssdfadfadfasdfasdfassssssssssssssssssssssssssssssssssssssssssssssssssssssssssssdfadfadfasdfasdfassssssssssssssssssssssssssssssssssssssssssssssssssssssssssssdfadfadfasdfasdfassssssssssssssssssssssssssssssssssssssssssssssssssssssssssssdfadfadfasdfasdfassssssssssssssssssssssssssssssssssssssssssssssssssssssssssssdfadfadfasdfasdfassssssssssssssssssssssssssssssssssssssssssssssssssssssssssssdfadfadfasdfasdfassssssssssssssssssssssssssssssssssssssssssssssssssssssssssssdfadfadfasdfasdfassssssssssssssssssssssssssssssssssssssssssssssssssssssssssssdfadfadfasdfasdfassssssssssssssssssssssssssssssssssssssssssssssssssssssssssssdfadfadfasdfasdfassssssssssssssssssssssssssssssssssssssssssssssssssssssssssssdfadfadfasdfasdfassssssssssssssssssssssssssssssssssssssssssssssssssssssssssssdfadfadfasdfasdfassssssssssssssssssssssssssssssssssssssssssssssssssssssssssssdfadfadfasdfasdfassssssssssssssssssssssssssssssssssssssssssssssssssssssssssssdfadfadfasdfasdfassssssssssssssssssssssssssssssssssssssssssssssssssssssssssssdfadfadfasdfasdfassssssssssssssssssssssssssssssssssssssssssssssssssssssssssssdfadfadfasdfasdfassssssssssssssssssssssssssssssssssssssssssssssssssssssssssssdfadfadfasdfasdfassssssssssssssssssssssssssssssssssssssssssssssssssssssssssssdfadfadfasdfasdfassssssssssssssssssssssssssssssssssssssssssssssssssssssssssssdfadfadfasdfasdfassssssssssssssssssssssssssssssssssssssssssssssssssssssssssssdfadfadfasdfasdfassssssssssssssssssssssssssssssssssssssssssssssssssssssssssssdfadfadfasdfasdfassssssssssssssssssssssssssssssssssssssssssssssssssssssssssssdfadfadfasdfasdfassssssssssssssssssssssssssssssssssssssssssssssssssssssssssssdfadfadfasdfasdfassssssssssssssssssssssssssssssssssssssssssssssssssssssssssssdfadfadfasdfasdfassssssssssssssssssssssssssssssssssssssssssssssssssssssssssssdfadfadfasdfasdfassssssssssssssssssssssssssssssssssssssssssssssssssssssssssssdfadfadfasdfasdfassssssssssssssssssssssssssssssssssssssssssssssssssssssssssssdfadfadfasdfasdfassssssssssssssssssssssssssssssssssssssssssssssssssssssssssssdfadfadfasdfasdfassssssssssssssssssssssssssssssssssssssssssssssssssssssssssssdfadfadfasdfasdfassssssssssssssssssssssssssssssssssssssssssssssssssssssssssssdfadfadfasdfasdfassssssssssssssssssssssssssssssssssssssssssssssssssssssssssssdfadfadfasdfasdfassssssssssssssssssssssssssssssssssssssssssssssssssssssssssssdfadfadfasdfasdfassssssssssssssssssssssssssssssssssssssssssssssssssssssssssssdfadfadfasdfasdfassssssssssssssssssssssssssssssssssssssssssssssssssssssssssssdfadfadfasdfasdfassssssssssssssssssssssssssssssssssssssssssssssssssssssssssssdfadfadfasdfasdfassssssssssssssssssssssssssssssssssssssssssssssssssssssssssssdfadfadfasdfasdfassssssssssssssssssssssssssssssssssssssssssssssssssssssssssssdfadfadfasdfasdfassssssssssssssssssssssssssssssssssssssssssssssssssssssssssssdfadfadfasdfasdfassssssssssssssssssssssssssssssssssssssssssssssssssssssssssssdfadfadfasdfasdfassssssssssssssssssssssssssssssssssssssssssssssssssssssssssssdfadfadfasdfasdfassssssssssssssssssssssssssssssssssssssssssssssssssssssssssssdfadfadfasdfasdfassssssssssssssssssssssssssssssssssssssssssssssssssssssssssssdfadfadfasdfasdfassssssssssssssssssssssssssssssssssssssssssssssssssssssssssssdfadfadfasdfasdfassssssssssssssssssssssssssssssssssssssssssssssssssssssssssssdfadfadfasdfasdfassssssssssssssssssssssssssssssssssssssssssssssssssssssssssssdfadfadfasdfasdfassssssssssssssssssssssssssssssssssssssssssssssssssssssssssssdfadfadfasdfasdfassssssssssssssssssssssssssssssssssssssssssssssssssssssssssssdfadfadfasdfasdfassssssssssssssssssssssssssssssssssssssssssssssssssssssssssssdfadfadfasdfasdfassssssssssssssssssssssssssssssssssssssssssssssssssssssssssssdfadfadfasdfasdfassssssssssssssssssssssssssssssssssssssssssssssssssssssssssssdfadfadfasdfasdfassssssssssssssssssssssssssssssssssssssssssssssssssssssssssssdfadfadfasdfasdfassssssssssssssssssssssssssssssssssssssssssssssssssssssssssssdfadfadfasdfasdfassssssssssssssssssssssssssssssssssssssssssssssssssssssssssssdfadfadfasdfasdfassssssssssssssssssssssssssssssssssssssssssssssssssssssssssssdfadfadfasdfasdfassssssssssssssssssssssssssssssssssssssssssssssssssssssssssssdfadfadfasdfasdfassssssssssssssssssssssssssssssssssssssssssssssssssssssssssssdfadfadfasdfasdfassssssssssssssssssssssssssssssssssssssssssssssssssssssssssssdfadfadfasdfasdfassssssssssssssssssssssssssssssssssssssssssssssssssssssssssssdfadfadfasdfasdfassssssssssssssssssssssssssssssssssssssssssssssssssssssssssssdfadfadfasdfasdfassssssssssssssssssssssssssssssssssssssssssssssssssssssssssssdfadfadfasdfasdfassssssssssssssssssssssssssssssssssssssssssssssssssssssssssssdfadfadfasdfasdfassssssssssssssssssssssssssssssssssssssssssssssssssssssssssssdfadfadfasdfasdfassssssssssssssssssssssssssssssssssssssssssssssssssssssssssssdfadfadfasdfasdfassssssssssssssssssssssssssssssssssssssssssssssssssssssssssssdfadfadfasdfasdfassssssssssssssssssssssssssssssssssssssssssssssssssssssssssssdfadfadfasdfasdfassssssssssssssssssssssssssssssssssssssssssssssssssssssssssssdfadfadfasdfasdfassssssssssssssssssssssssssssssssssssssssssssssssssssssssssssdfadfadfasdfasdfassssssssssssssssssssssssssssssssssssssssssssssssssssssssssssdfadfadfasdfasdfassssssssssssssssssssssssssssssssssssssssssssssssssssssssssssdfadfadfasdfasdfassssssssssssssssssssssssssssssssssssssssssssssssssssssssssssdfadfadfasdfasdfassssssssssssssssssssssssssssssssssssssssssssssssssssssssssssdfadfadfasdfasdfassssssssssssssssssssssssssssssssssssssssssssssssssssssssssssdfadfadfasdfasdfassssssssssssssssssssssssssssssssssssssssssssssssssssssssssssdfadfadfasdfasdfassssssssssssssssssssssssssssssssssssssssssssssssssssssssssssdfadfadfasdfasdfasssssssssssssssssssssssssssssssssssssssssssssssssssssssssssadfasdfasdfasssssssssssssssssssssssssssssssssssssssssssssssssssssssssss";
    char array2[]="fdffd";
    
    //char *buffer = malloc(50);
    char *buffer[strlen(array1) + 1];
    //printf(" доин %ld\n", strlen(array1) + 1);
    char *morse;
    int morse-size;   


    //long unsigned int size = malloc_usable_size(buffer);
    //printf("%zu\n", size);
    string_copy_safe(array1, buffer, 50);
    //puk();
    printf("%s\n", buffer);
    string_concat_safe(array1, array2, 50);
    free(buffer);
    
    return 0;
}