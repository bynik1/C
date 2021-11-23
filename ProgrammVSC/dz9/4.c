#include <stdio.h>
#include <string.h>


int unique_copy_unctable(char *array){
    char unique_copy_unctable[strlen(array)];

    unique_copy_unctable[0] = array[0];
    
    int len_unique_copy = 1;

    for(int i = 1; i < strlen(array); i++){
        for(int j = 0; j < len_unique_copy; j++){
            if(unique_copy_unctable[j] != array[i] && j == len_unique_copy - 1){
                unique_copy_unctable[len_unique_copy] = array[i];
                len_unique_copy++;
            }

            else if(unique_copy_unctable[j] != array[i]){
                continue;
            }

            else if (unique_copy_unctable[j] == array[i]){
               break;
            }
        }
    }

    for(int i = 0; i < len_unique_copy; i++){
        printf("%c", unique_copy_unctable[i]);
    }
    printf("\n");

    return 0;
}


int main(){
    char array[] = "gssfgfgg454545";
    unique_copy_unctable(array);

    return 0;
}