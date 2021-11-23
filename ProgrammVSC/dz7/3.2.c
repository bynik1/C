#include <stdio.h>

//сортировка методом подсчета
int main()
{
    int n;
    int max_number = 0, k = 0;

    printf("Input n: ");
    scanf("%d", &n);
    int array[n];


    for (int i = 0; i < n; i++) {
        printf("array[%d] = ", i);
        scanf("%d", &array[i]);;
        if(array[i] > max_number){
            max_number = array[i];
        }
    }
    max_number++;
    int count[max_number];

    for (int i = 0; i < max_number; i++){
        count[i] = 0;
    }

    for (int i = 0; i < n; i++){
        count[array[i]] = count[array[i]] + 1;
    }

    printf("-----------");

    for (int i = 0; i < n; i++) {
        printf("array[%d] = %d\n", i, count[i]);
    }


    for (int j = 0; j < max_number; j++){
        for(int i = 0; i < count[j]; i++){
            array[k] = j;
            k++;
        }
    }

    printf("-----------\n");

    for (int i = 0; i < n; i++) {
        printf("array[%d] = %d\n", i, array[i]);
    }

    return 0;
}