#include <stdio.h>
#include <string.h>
#define n 30

char *string_suffix(char *arr, int x)
{
    char *ptr = &arr[strlen(arr) - x - 1];

    return ptr;
}

int main()
{
    char str[n];
    int a;
    char *suf = NULL;

    printf("Enter string: ");
    fgets(str, n - 1, stdin);

    printf("Enter suffix length: ");
    scanf("%d", &a);

    suf = string_suffix(str, a);

    printf("Suffix: ");
    for(int i = 0; i < a; i++){
        printf("%c", *(suf + i));
    }
    printf("\n");

    return 0;
}