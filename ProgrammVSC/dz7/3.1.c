#include <stdio.h>

//сортировка методом подсчета
int main()
{
    int n;
    int array[n];
    int count[n];

    printf("Input n: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("array[%d] = ", i);
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < n; i++)
    {
        int k = 0;
        for (int j = 0; j < n; j++)
        {
            if (count[i] > count[j])
                k++;
        }
        array[k] = count[i];
    }

    for (int i = 0; i < n; i++){
        printf("%d\n", array[i]);
    }

    return 0;
}