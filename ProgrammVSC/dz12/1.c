#include <stdio.h>

struct point
{
    int x;
    int y;
};


struct square
{
    struct point A;
    struct point B;
};


int is_point_inside_rectangle(struct point C, struct square s1)
{
    if(C.x >= s1.A.x && C.x >= s1.A.y && C.x <= s1.B.x && C.x <= s1.B.y){
        return 1;
    }

    return 0;
}


int main(void)
{   
    struct point C;
    
    printf("Input point in square \n");
    scanf("%d %d", &C.x, &C.y);

    struct square s1;

    printf("Input first point square: ");
    scanf("%d %d", &s1.A.x, &s1.A.y);

    printf("Input second point square: ");
    scanf("%d %d", &s1.B.x, &s1.B.y);

    if (ipir(C, s1) == 1){
        printf("True\n");
    }else{
        printf("False\n");
    }

    return 1;
}