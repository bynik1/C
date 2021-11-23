#include <stdio.h>

int *find_element(int *b, int *e, int x)
{
    int *ptr = NULL;

    for(int i = 0; i < sizeof(b); i++){
        if(b[i] == x){
            ptr = &b[i];
            return ptr;
        }
    }

    return ptr;
}

int main()
{
    int *elem = NULL;
    int a, b, i;

    printf("Enter array size: ");
    scanf("%d", &a);

    int array[a];

    printf("Enter array elemets: ");
    for(i = 0; i < a; i++){
        scanf("%d", &array[i]);
    }

    printf("Enter elemet to find: ");
    scanf("%d", &b); 

    int *begin = &array[0];
    int *end = &array[a - 1];

    end = end + 1;

    if(find_element(begin, end, b) != NULL){
        elem = find_element(begin, end, b);
        *elem = *elem * (-1);
    }else{
        printf("Element %d not found\n", b);
    }

    printf("Result: ");
    for(i = 0; i < a; i++){
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}