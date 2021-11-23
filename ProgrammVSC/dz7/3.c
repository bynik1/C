#include <stdio.h>


int main (){
    int size;

    printf("Input size: ");
    scanf("%d", &size);

    int array[size];
    for (int i = 0; i < size; i++) {
        printf("array[%d] = ", i);
        scanf("%d", &array[i]);
    }

 
    for (int i = 1; i < size; i++){ 
        int x = i;    
        while (x > 0 && array[x - 1] > array[x]){
            int temp = array[x - 1]; 
            array[x - 1] = array[x];
            array[x] = temp;
            x--;
        }
    }

    for (int i = 0; i < size; i++){
        printf("%d\n", array[i]);
    }

    return 0;
}