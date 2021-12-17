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


void matrix_multiplication(char *A, char *B, int rows_A, int col_A, int rows_B, int col_B)
{
    FILE *fA;
    FILE *fB;
    FILE *fC;
    int y;
    system("chcp 1251");


    fA = fopen(A, "r+");
    fB = fopen(B, "r+");
    fprintf(fA, "%d", y);
    fputs(fB, stdout);

    fclose(fA);
    fclose(fB);
}


int main()
{
    int rows_A, col_A;
    int rows_B, col_B;
    char name_A[n];
    char name_B[n];  

    printf("Введите название файладля матрице A: ");
    scanf ("%s", name_A);
    printf("Впедите количетсво строк и столбцов: "); 
    scanf ("%d %d", &rows_A, &col_A);

    matrix(name_A, rows_A, col_A);

    printf("Введите название файла для матрице B: ");
    scanf ("%s", name_B);
    printf("Впедите количетсво строк и столбцов: "); 
    scanf ("%d %d", &rows_B, &col_B);
    
    matrix(name_B, rows_B, col_B);

    matrix_multiplication(name_A, name_B, rows_A, col_A, rows_B, col_B);

    return 0;
}