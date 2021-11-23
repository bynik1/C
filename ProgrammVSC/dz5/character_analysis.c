#include <stdio.h>
#include <ctype.h>

int main(){
    char line;
    int letter = 0, number = 0, punctuation_marks = 0, len = 0, vowels = 0;
    float vowels_analysis;

    while((line = getchar()) != '\n'){
        len ++;
        if (isalpha(line)){
            letter ++;
            if ((line == 'a' || line == 'e' || line ==
                'i' || line == 'o' || line == 'u' || line == 'y') ||
                (line == 'A' || line == 'E' || line ==
                'I' || line == 'O' || line == 'U' || line == 'Y')){
                    vowels++;
                }
        }
        else if(isdigit(line)){
            number ++;
        }
        else if(ispunct(line)){
            punctuation_marks ++;
        }
    }
    vowels_analysis =  (float)vowels / len * 100;
    printf("%d\t%d\t%d\t%d\t%f\n", len, number, punctuation_marks, letter, vowels_analysis);

    return 0;
}