#include <stdio.h>

int min_max_elems(int *str){
    int min = str[0], max = str[0];
    
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] > max)
        {
            max = str[i];
        }
        else if (min > str[i])
        {
            min = str[i];
        }

    }
    printf("min_number = %d max_number = %d\n", min, max);
    return 0;

}

int main(){
    int str[] = {1, 10, 1, 1, 3, 2, 5, 9, 10, 11, 12, '\0'};

    min_max_elems(str);

    return 0;
}