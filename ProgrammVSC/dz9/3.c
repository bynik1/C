#include <stdio.h>
#include <string.h>


int unique_copy(char *array){
    char unique_copy[strlen(array)];

    unique_copy[0] = array[0];
    
    int len_unique_copy = 1;

    for(int i = 1; i < strlen(array); i++){
        if(array[i - 1] != array[i]){
            unique_copy[len_unique_copy] = array[i];
            len_unique_copy++;
        }

        else if (array[i - 1] == array[i])
        {   
            char recurring_character = array[i]; 

            for(i; recurring_character != array[i]; i++){
                break;
            }
        }
        
    }

    for(int i = 0; i < len_unique_copy; i++){
        printf("%c", unique_copy[i]);
    }
    printf("\n");

    return 0;
}


int main(){
    char array[] = "gssfgfgg454545";
    //gssfgfgg454545
    unique_copy(array);

    return 0;
}