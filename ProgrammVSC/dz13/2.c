   
#include <string.h>
#include <ctype.h>
#define n 5

typedef struct PlayerScores {
    int army;
    char name[20]; 
    int res;
    int scor;
}ps;


void reed(ps* game1){
    int i, j;

    printf("\nHero        Army    Resources    Score\n");
    for(i = 0; i < n; i++){

        for(j = 0; j < strlen(game1[i].name); j++){
            printf("%c", game1[i].name[j]);
        }

        printf("  %6d  ", game1[i].army);
        printf("     %6d   ", game1[i].res);
        printf("%6d  ", game1[i].scor);
        printf("\n");
    }

}


ps sort_army(ps *game2)//Пузырьковая сортировка
{
    int i, j; 
    ps ptr;

    for (i = 0; i < n - 1; i++){
        for(j = i + 1; j < n; j++){
            if(game2[i].army > game2[j].army){
                ptr = game2[j]; 
                game2[j] = game2[i];
                game2[i] = ptr;
            }
        }
    }

    return *game2;
}


ps sort_res(ps *game2)//Сортировка выбором
{
    int min;
    ps temp;

    for(int i = 0; i < n - 1; i++){
        min = i;
        for(int j = i + 1; j < n; j++){
            if(game2[min].res > game2[j].res){
                min = j;
            }
        }

        temp = game2[i];
        game2[i] = game2[min];
        game2[min] = temp;
    }

    return *game2;
}


ps sort_score(ps * game2)//Алгоритм подсчётом
{   
    ps count;

    for (int i = 0; i < n; i++)
    {
        int k = 0;
        for (int j = 0; j < n; j++)
        {
            if (game2[i].scor > game2[j].scor)
                k++;
        }

        game2[k] = game2[i];
    }

    return *game2;
}


ps sort_name(ps * game2)//Алгоритм вставками
{

}


int main()
{
    ps game[n] = {
        {7449, "Vitaly", 124, 889},
        {18008, "Lexa", 300, 999},
        {33434, "Oleg", 456, 65},
        {232, "Ilyu", 434, 45454}, 
        {3232, "Anna", 454, 1}
    };
      
    *game = sort_army(game);
    reed(game);

    *game = sort_res(game);
    reed(game);

    *game = sort_scor(game);
    reed(game);

    *game = sort_name(game);
    reed(game);

    return 0;
}


// int sort_sname(ps* game) 
// {
//     int i, j; 
//     ps ptr;

//     for (i = 0; i< n- 1; i++){
//         for(j = 1 + 1; j < n; j++){
//             if(game[1].army< game[j].army){
//                 ptr = game[1]; 
//                 game[1]= game[j];
//                 game[j] = ptr;
//             }
//         }
//     }

// return game;
// }

// int sort_sres(ps* game) 
// {
//     int i, j; 
//     ps ptr;

//     for (i = 0; i< n- 1; i++){
//         for(j = 1 + 1; j < n; j++){
//             if(game[1].army< game[j].army){
//                 ptr = game[1]; 
//                 game[1]= game[j];
//                 game[j] = ptr;
//             }
//         }
//     }

// return game;
// }

// int sort_sscor(ps* game) 
// {
//     int i, j; 
//     ps ptr;

//     for (i = 0; i < n- 1; i++){
//         for(j = 1 + 1; j < n; j++){
//             if(game[i].army > game[j].army){
//                 ptr = game[j]; 
//                 game[i]= game[j];
//                 game[i] = ptr;
//             }
//         }
//     }

// return game;
// }