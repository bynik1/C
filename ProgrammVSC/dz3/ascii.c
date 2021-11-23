#include <stdio.h>

int main()
{
    int i;
    printf("Oct\tDec\tHex\tChar\n");
    for(i = 0; i<128; i++)
    {
        printf("%3o\t%3d\t%3X\t%c\n", i, i, i, i);
    }
    return 0;
}