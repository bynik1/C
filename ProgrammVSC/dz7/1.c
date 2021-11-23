#include <stdio.h>


int main (){
    int size, p;

    printf("Input size: ");
    scanf("%d", &size);

    int array[size];
    for (int i = 0; i < size; i++) {
        printf("array[%d] = ", i);
        scanf("%d", &array[i]);
    }


    for (int i = 0; i < size - 1; i++){
        for (int j = (size - 1); j > i; j--){
            if (array[j - 1] > array[j]){
                int temp = array[j - 1]; 
                array[j - 1] = array[j];
                array[j] = temp;
            }
        }
    }

    for (int i = 0; i < size; i++){
        printf("%d\n", array[i]);
    }

    return 0;
}