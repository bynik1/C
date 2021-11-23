#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char str[10000]; 
    int beg, end, count;
    gets(str);

    if(strlen(str) != 0){
        for(beg = 0, end = strlen(str) - 1; beg <= end; beg++, end--){
            if (str[beg] == ' '){
                end++;
                continue;
            }

            else if(str[end] == ' '){
                beg--;
                continue;
            }

            else{
                if(tolower(str[beg]) != tolower(str[end])){
                    printf("Ne polindrom!\n");
                    count++;
                    break;
                }
                else{ 
                    continue;
                }
            }
        }


        if (count == 0){
            printf ("Polindrom!\n");
        }
    }

    else{
        printf("В строке нет букв!\n");
    }

    return 0;
}