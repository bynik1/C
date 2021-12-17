#include <stdio.h>
#define n 10

int bable(int *array)
{
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(array[i] > array[j]){
                int tmp = array[j];
                array[j] = array[i];
                array[i] = tmp;
            }
        }
    }

    for(int i = 0; i < n; i++){
        printf("%4d", array[i]);
    }
    printf("\nbable\n");
}


int vibor(int *array)
{
    for(int i = 0; i < n; i++){
        int min = i;
        for(int j = i + 1; j < n; j++){
            if(array[i] > array[j]){
                min = j;
            }
        }

        int tmp = array[i];
        array[min] = array[i];
        array[i] = tmp;
    }

    for(int i = 0; i < n; i++){
        printf("%4d", array[i]);
    }
    printf("\nvibor\n");
}


int sort(int *array)
{
    for(int i = 1; i < n; i++){
        int new = array[i];
        int location = i - 1;
        while(location >= 0 && new < array[location]){
                array[location + 1] = array[location];
                location--;
        }

        array[location + 1] = new;
    }


    for(int i = 0; i < n; i++){
        printf("%4d", array[i]);
    }
    printf("\nsort\n");
}

int main(void)
{
    int i, j, min;
    int array[n];

    for(i = 0; i < n; i++){
        scanf("%d", &array[i]);
    }

    bable(array);
    vibor(array);
    sort(array);
    

    for(i = 0; i < n; i++){
        printf("%4d", array[i]);
    }
    printf("\n");


    return 0;
}