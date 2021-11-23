#include <stdio.h>
#include <math.h>

int main(){
    float n, xi; 

    scanf("%f", &n);

    xi = n;

    while(xi - sqrt(n) > 0.0001){
        xi = (xi + n / xi) / 2;
    }

    printf("%.4f \n", xi);

    return 0;
}