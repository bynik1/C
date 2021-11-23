#include <stdio.h>

int main(){
    float chiclo, min, max;
    int n = 1, nmax, nmin;

    scanf("%f\n", &chiclo);

    max = chiclo;
    min = chiclo;

    nmin = n;
    nmax = n;

    while(scanf("%f\n", &chiclo) == 1){
        n ++;
        if (chiclo > max){
            max = chiclo;
            nmax = n;
        }
        if (chiclo < min){
            min = chiclo;
            nmin = n;
        }
    } 

    printf("%f %d\n", max, nmax);
    printf("%f %d\n", min, nmin);

    return 0;
}