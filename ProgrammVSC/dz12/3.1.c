#include <stdio.h>
#include <math.h>
#include <stdlib.h>

struct point
{
    int *A;
    int *B;
}; 

int find_max_segment(int **array, int *count_point)
{
    float max_interval = 0, interval;
    struct point AB;
    printf("%d %d %d %d", *(*(array + 0) + 1), *(*(array + 0) + 0), *(*(array + 1) + 0), *(*(array + 1) + 1));

    for(int i = 0; i < *count_point - 1; i++){
        for(int j = i + 1; j < *count_point; j++){
            //printf("%d %d %d %d", *array[i][0], *array[j][0], *array[i][1], *array[j][1]);
            int x = abs(*(*(array + i) + 0) - *(*(array + j) + 0));
            int y = abs(*(*(array + i) + 1) - *(*(array + j) + 1));

            interval = sqrt(pow(x, 2) + pow(y, 2));

            if (max_interval < interval){
                max_interval = interval;

                //AB.A = *array[i][];
                //AB.B = *array[j][];
            }
        }
    }

    return 1;
}


int main(void)
{
    int count_point;

    printf("count_point = ");
    scanf("%d", &count_point);

    int array_point[count_point][2];

    for(int i = 0; i < count_point; i++){
        printf("Input %d point (x, y) = ", i);
        scanf("%d %d", &array_point[i][0], &array_point[i][1]);
        printf("\n");
    }

    printf("point = %d\n", *(*(array_point)));
    printf("max_interval = %d\n", find_max_segment(array_point, &count_point));

    return 0;
}