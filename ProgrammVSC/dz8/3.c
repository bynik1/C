#include <stdio.h>

int main(){
    int n;


    printf("Enter rows and cols number: ");
    scanf("%d", &n);

    int a[n * n][n * n];


    for(int i = 0; i < n * n; i++){
        for(int j = 0; j < n * n; j++){
            scanf("%d", &a[i][j]);
            if(a[i][j] < n * n){
                continue;
            }
            
            else{
                printf("Incorrect\n");
                return 0;
            }
        }
    }

    for(int u = 0; u < n * n; u++){
        for(int i = 0; i < n * n; i++){
            for(int j = i + 1; j < n * n; j++){
                printf("a[i][u] = %d n * n = %d\n", a[i][u], n * n);
                if(a[i][u] != a[j][u] && a[i][u] < n * n){
                    continue;
                }

                else{
                    printf("Incorrect\n");

                    return 0;
                }
            }      
        }
    }

    for(int u = 0; u < n * n; u++){
        for(int i = 0; i < n * n; i++){
            for(int j = i + 1; j < n * n; j++){
                if(a[u][i] != a[u][j] && a[u][i] < n * n){
                    continue;
                }

                else{
                    printf("Incorrect\n");

                    return 0;
                }
            }      
        }
    }

    printf("Correct\n");

    return 0;
}