#include <stdio.h>

int main(){
    int days, month, year, day_in_order = 0;

    scanf("%d %d %d", &days, &month, &year);

    if ((year % 4 != 0) && ((year % 25 != 0) || (year % 16 != 0))){
        for(int i = 1; i <= month - 1; i++){
            switch (i)
            {
            case 1: case 3: case 5: case 7: case 8: case 10:
                day_in_order += 31;
                break;
            case 4: case 6: case 9: case 11:
                day_in_order += 30;
                break;
            default:
                day_in_order += 28;
                break;
            }
        }
    }

    else{
        for(int i = 1; i <= month - 1; i++){
            switch (i)
            {
            case 1: case 3: case 5: case 7: case 8: case 10:
                day_in_order += 31;
                break;
            case 4: case 6: case 9: case 11: 
                day_in_order += 30;
                break;
            default:
                day_in_order += 29;
                break;
            }
        }
    }
    day_in_order += days;

    printf("%d\n", day_in_order);

    return 0;
}