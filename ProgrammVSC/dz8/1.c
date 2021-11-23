#include <stdio.h>

int main(){
    int r, c, z = -1;


    printf("Enter rows and cols number: ");
    scanf("%d %d", &r, &c);
    if(r == 0 || c == 0){
        return 0;
    }

    int a[r][c];


    for(int i = 0; i < r; i++){
        if(i % 2 == 1){
            for(int j = c - 1; j >= 0; j--){
                z++;
                a[i][j] = z;
            }
        }
        
        else{
            for(int u = 0; u < r - 1; u++){                
                z++;
                a[i][u] = z;
            }
        }
    }

    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            printf("%4d", a[i][j]);
        }
        printf("\n");
    }


    return 0;
}
