#include <stdio.h>

int main(){
    int day, month, year, zodiac;

    scanf("%d%d%d", &day, &month, &year);

    zodiac = 100 * month + day;

   if(zodiac >= 121 && zodiac <= 219){
       printf("водолей\n");
   }
   
   else if(zodiac >= 220 && zodiac <= 320){
       printf("рыбы\n");
   }

   else if(zodiac >= 321 && zodiac <= 420){
       printf("овен\n");
   }

   else if(zodiac >= 421 && zodiac <= 521){
       printf("телец\n");
   }

   else if(zodiac >= 522 && zodiac <= 621){
       printf("близнецы\n");
   }

   else if(zodiac >= 621 && zodiac <= 722){
       printf("рак\n");
   }

   else if(zodiac >= 723 && zodiac <= 823){
       printf("лев\n");
   }

   else if(zodiac >= 824 && zodiac <= 923){
       printf("дева\n");
   }

   else if(zodiac >= 924 && zodiac <= 1023){
       printf("весы\n");
   }

   else if(zodiac >= 1024 && zodiac <= 1122){
       printf("скорпион\n");
   }

   else if(zodiac >= 1123 && zodiac <= 1221){
       printf("стрелец\n");
   }

   else if(zodiac >= 1222 || zodiac <= 120){
       printf("козерог\n");
   }

    return 0;
}