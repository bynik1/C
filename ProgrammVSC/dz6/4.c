#include <stdio.h>
#include <math.h>

int main(){
    int n, element;

    scanf("%d %d", &element,  &n);

    for(int i = 1; i < n; i++){
        printf("%.0f, ", pow(element, i));
    }

    printf("%.0f\n", pow(element, n));

    return 0;
}