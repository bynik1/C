#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define n 5

typedef struct PlayerScores{
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

ps army(ps* game2){
    int i, j;
    ps emp;

    for(i = 0; i < n - 1; i++){

        for(j = i + 1; j < n; j++){

            if(game2[i].army < game2[j].army){
                emp = game2[i];
                game2[i] = game2[j];
                game2[j] = emp;
            }
        }
    }
    
    return *game2;
}

ps res(ps* game2){
    int i, j;
    ps emp;

    for(i = 0; i < n - 1; i++){

        for(j = i + 1; j < n; j++){

            if(game2[i].res < game2[j].res){
                emp = game2[i];
                game2[i] = game2[j];
                game2[j] = emp;
            }
        }
    }

    return *game2;
}

ps scor(ps* game2){
    int i, j;
    ps emp;

    for(i = 0; i < n - 1; i++){

        for(j = i + 1; j < n; j++){

            if(game2[i].scor < game2[j].scor){
                emp = game2[i];
                game2[i] = game2[j];
                game2[j] = emp;
            }
        }
    }

    return *game2;
}

ps name(ps* game2){
    int i, j;
    ps emp;

    for(i = 0; i < n - 1; i++){

        for(j = i + 1; j < n; j++){

            if(strcmp(game2[i].name, game2[j].name) > 0){
                emp = game2[i];
                game2[i] = game2[j];
                game2[j] = emp;
            }
        }
    }

    return *game2;
}

int main()
{
    char c;

    ps game[n]= {
        {1234, "Vitaly  ", 236, 706},
        {2670, "Moonride", 200, 1200},
        {1509, "Lowlik  ", 122, 929},
        {3000, "Raweceek", 10, 1821},
        {1717, "Lolicorn", 322, 1337}
    };

    reed(game);
    printf("\nPrint q to exit. Sort by: ");

    while ((c = getchar()) != 'q')
    {
        
        switch (tolower(c))
        {
            case 'a':
                *game = army(game);
                reed(game);
                if(c != 'q')printf("\nPrint q to exit. Sort by: ");
                break;
            case 'r':
                *game = res(game);
                reed(game);
                if(c != 'q')printf("\nPrint q to exit. Sort by: ");
                break;
            case 's':
                *game = scor(game);
                reed(game);
                if(c != 'q')printf("\nPrint q to exit. Sort by: ");
                break;
            case 'h':
                *game = name(game);
                reed(game);
                if(c != 'q')printf("\nPrint q to exit. Sort by: ");
                break;
                
        }

        while (getchar() != '\n')continue;
        
    }
    
    

    return 0;
}