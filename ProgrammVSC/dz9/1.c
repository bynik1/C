#include <stdio.h>

int string_to_int(char *str){
    int chiclo = 0;
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] == '-' || str[i] == '+'){
            continue;
            }
        chiclo = chiclo * 10 + (str[i] - '0');
    }

    if(str[0] == '-'){
        chiclo *= - 1;
    }

    return chiclo;
}

int main(){
    int number;

    char str[] = "-123456"; 

    number = string_to_int(str);

    printf("%d\n", number);

    return 0;
}