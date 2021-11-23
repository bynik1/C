#include <stdio.h>
#include <math.h>

int main(){
    float x, y, s, p, z;
    printf("Введите значения сторон\n");
    scanf("%f %f %f", &x, &y, &z);      
    if ((x + y > z) && (x + z > y) && (z + y > x)){
        p = (x + y + z) / 2;
        s = p * (p - x) * (p - z) * (p - y);
        printf("%s %f\n", 'Ваша площадь треуголника: ', s);
    }
   else{
        printf("Такого треугольника не существует\n");
    }
    return 0;
}