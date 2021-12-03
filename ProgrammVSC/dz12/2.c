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


struct square make_canonical_rectangle(struct square s1)
{
    if(s1.A.x < s1.B.x && s1.A.y > s1.B.y){
        int y = s1.A.y;
        s1.A.y = s1.B.y;
        s1.B.y = y;
        return s1;
    }

    return s1;
}


int main(void)
{   

    struct square s1;

    printf("Input first point square: ");
    scanf("%d %d", &s1.A.x, &s1.A.y);

    printf("Input second point square: ");
    scanf("%d %d", &s1.B.x, &s1.B.y);

    struct square s2;
    s2 = make_canonical_rectangle(s1);
    
    printf("Canonical = (%d, %d), (%d. %d)\n", s2.A.x, s2.A.y, s2.B.x, s2.B.y);

    return 1;
}