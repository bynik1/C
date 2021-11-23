#include <stdio.h>

void swap_int(int *ptrx, int *ptry){
    int ptra = *ptrx, ptrb = *ptry;
    printf("ptra = %d ptrb = %d\n", ptra, ptrb);
    *ptrx = ptrb;
    *ptry = ptra;
}

int main(){
    int x = 10;
    const int y = 20;  
    int *ptrx = &x, *ptry = &y;

    //printf("x = %d, *x = %p\n", *ptrx, ptrx);
    //printf("y = %d, *y = %p\n", *ptry, ptry);

    const int *ptrl = &x;
    ptrl = &y;

    //printf("x = %d ptr1 = %p\n", *ptrl, ptrl);
    printf("ptrx0 = %p ptry0 = %p\n", ptrx, ptry);
    swap_int(ptrx, ptry);
    printf("ptrx1 = %d ptry1 = %d\n", *ptrx, *ptry);

    return 0;

}