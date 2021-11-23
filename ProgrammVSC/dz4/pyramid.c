#include <stdio.h>
#include <ctype.h>

int main(){
    char your_letter;

    printf("Введите букву в нижнем регистре: ");
    scanf("%c", &your_letter);

    if (isalpha(your_letter)){//Проверка буква ли это или нет
        your_letter = your_letter + 'A' - 'a'; // Перевод в верхний регистр
        for (int i = 65; i <= (int)your_letter; i++){
            for (int u = (int) your_letter; u >= i + 1; u--){
                    printf("%s", " ");
                }
            for (int i1 = 65; i1 < i + 1; i1++){ 
                printf("%c", i1);
            }
            for (int i1 = i - 1; i1 >= 65; i1--){
                printf("%c", i1);
            }
            printf("\n");
        }   
    }
    else{
        printf("%s\n", "Вы ввели не букву!!!");
    }

    return 0;
}