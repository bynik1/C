#include <stdio.h>
#include <math.h>

typedef struct Segment{
    int* x1;
    int* x2;
}seg;

seg fms(int *ptr, int a)
{
    int d, i, j, dmax = 0;

    seg ans;

    for(i = 0; i < a - 1; i++){

        for(j = i + 1; j < a; j++){

            d = sqrt(pow((*(ptr + 2*i) - *(ptr + 2*j)), 2) + pow((*(ptr + 2*i + 1) - *(ptr + 2*j + 1)), 2));

            if(d > dmax){
                ans.x1 = ptr + 2*i;
                ans.x2 = ptr + 2*j;
                dmax = d;
            }
        }
    }

    return ans;
}

int main()
{
    int n, i;

    printf("Введите количество точек: ");
    scanf("%d", &n);

    int plenty[n][2];

    printf("Введите %d точек: \n", n);
    for(i = 0; i < n; i++){
        printf("%d-ая точка: ", i);
        scanf("%d %d", &plenty[i][0], &plenty[i][1]);
    }

    seg answer = fms(&plenty[0][0], n);

    printf("Максимальное расстояние между точек {%d, %d} и {%d, %d}\n",  *answer.x1, *(answer.x1 + 1), *answer.x2, *(answer.x2 + 1));

    return 0;
}