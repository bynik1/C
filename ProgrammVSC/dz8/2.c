#include <stdio.h>

int main(){
    int r, c, u = 0;

    printf("Enter rows and cols number: ");
    scanf("%d %d", &r, &c);

    int a[r][c], min_number[3][c];

    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            scanf("%d", &a[i][j]);
        }
    }

    printf("Saddle pints: \n");

    for(int j = 0; j < r; j++){

        int end = 0;

        for(int i = 0; i < 3; i++){
            for(int p = 0; p < c; p++){
                min_number[i][p] = a[j][0] + 1;
            }
        } 

        for(int i = 0; i < c; i++){
            //printf("a  = %d и min = %d\n", a[j][i], min_number[0][0]);
            if (a[j][i] > min_number[0][0]){
                continue;
            }

            else if(a[j][i] == min_number[0][0]){
                if(a[j][i] == a[j][i - 1] && i != 0){
                    u++;                     
                    min_number[0][u] = a[j][i];
                    min_number[1][u] = j;
                    min_number[2][u] = i;
                }

                else{
                    min_number[0][u] = a[j][i];
                    min_number[1][u] = j;
                    min_number[2][u] = i;
                    u++;
                }
            }

            else{
                min_number[0][0] = a[j][i];
                min_number[1][0] = j;
                min_number[2][0] = i;
                u = 0;
            }
        }

        // for(int i = 0; i < 3; i++){
        //     for(int j = 0; j < c; j++){
        //         printf("%4d", min_number[i][j]);
        //     }
        //     printf("\n");
        // }
            
        for(int i = 0; i < c && min_number[1][0] != a[i][min_number[2][0]]; i++){
            if(min_number[0][0] >= a[i][min_number[2][0]]){
                continue;
            }

            else{
                end++;
                break;
            }
        }
        //printf("end1 = %d\n", end);

        //printf("end2 = %d\n", end);
        if(end == 0 && min_number[0][0] == min_number[0][c - 1]){
            for(int p = 0; p < c; p++){
                printf("(%d, %d) = %d\n", min_number[1][p], min_number[2][p], min_number[0][p]);
            }
        }

        else if(end == 0){
            for(int p = 0; p < c && min_number[0][p] != 0 && min_number[0][p] != min_number[0][c - 1]; p++){
                printf("(%d, %d) = %d\n", min_number[1][p], min_number[2][p], min_number[0][p]);
            }
        }
    }

    // for(int i = 0; i < r; i++){
    //     for(int j = 0; j < c; j++){
    //         printf("%4d", a[i][j]);
    //     }
    //     printf("\n");
    // }

    return 0;
}