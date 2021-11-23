#include <stdio.h>
#include <ctype.h>

int main(){
    char your_letter;

    while ((your_letter = getchar()) != EOF){
        your_letter = toupper(your_letter); 
	putchar(your_letter);
    }
    return 0;
}
