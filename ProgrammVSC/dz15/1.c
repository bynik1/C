#include <stdio.h>
#define n 20
#include <stdlib.h>
#include <time.h>

void matrix(char *name, int rows, int col)
{
    int i, j; 
    srand(time(NULL));

    FILE *fp;

    fp = fopen(name, "wr+");

    fprintf(fp, "Строк - %d, столбцов - %d\n", rows, col);

    for(i = 0; i < rows; i++){

        for(j = 0; j < col; j++){
            fprintf(fp, "%4d ", (-10 + rand()%21));
        }
    fprintf(fp, "\n");
    }

    fclose(fp);
}


int main()
{
    int rows, col;
    char name[n];

    printf("Введите название файла:");
    scanf ("%s", name);

    printf("Впедите количетсво строк и столбцов: "); 
    scanf ("%d %d", &rows, &col);

    matrix(name, rows, col);

    return 0;
}