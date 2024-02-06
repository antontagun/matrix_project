#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include "matrix.h"
/*
void fill_file(int amount, const char* name_file)
{
    FILE* fl = fopen(name_file, "w");
    const int len_matrix = 3;
    int matrix[len_matrix][len_matrix];
    for(int i = 0; i < amount; i++)
    {
        fill_matrix_randomly(len_matrix, len_matrix, matrix, 0, 2);
        fprint_matrix(fl, len_matrix, len_matrix, matrix);
        fprintf(fl, "\n");    
    }
    fclose(fl);
}

void read_file(int amount, const char* name_file)
{
    FILE* fl = fopen(name_file, "r");
    const int len_matrix = 3;
    int matrix[len_matrix][len_matrix];
    for(int i = 0; i < amount; i++)
    {
        fscan_matrix(fl, len_matrix, len_matrix, matrix);  
        printf("is_diagonal_matrix: %s\n", is_diagonal_matrix(len_matrix, len_matrix, matrix) ? "true" : "false");
        printf("is_identity_matrix: %s\n", is_identity_matrix(len_matrix, len_matrix, matrix) ? "true" : "false");
        printf("is_scalar_matrix: %s\n", is_scalar_matrix(len_matrix, len_matrix, matrix) ? "true" : "false");
        printf("is_square_matrix: %s\n", is_square_matrix(len_matrix, len_matrix, matrix) ? "true" : "false");
        printf("is_symmetric_matrix: %s\n", is_symmetric_matrix(len_matrix, len_matrix, matrix) ? "true" : "false");
        printf("is_tringular_matrix: %s\n", is_tringular_matrix(len_matrix, len_matrix, matrix) ? "true" : "false");
        printf("is_zero_matrix: %s\n", is_zero_matrix(len_matrix, len_matrix, matrix) ? "true" : "false"); 
        printf("\n");    
    }
    fclose(fl);
}
*/
int main(void)
{
    const int len_matrix = 3;
    int matrix[len_matrix][len_matrix];
    const char* name_file = "matrix_file.txt";
    int amount = 4;
    print_matrix(len_matrix, len_matrix, matrix);
    printf("is_diagonal_matrix: %s\n", is_diagonal_matrix(len_matrix, len_matrix, matrix) ? "true" : "false");
    printf("is_identity_matrix: %s\n", is_identity_matrix(len_matrix, len_matrix, matrix) ? "true" : "false");
    printf("is_scalar_matrix: %s\n", is_scalar_matrix(len_matrix, len_matrix, matrix) ? "true" : "false");
    printf("is_square_matrix: %s\n", is_square_matrix(len_matrix, len_matrix, matrix) ? "true" : "false");
    printf("is_symmetric_matrix: %s\n", is_symmetric_matrix(len_matrix, len_matrix, matrix) ? "true" : "false");
    printf("is_tringular_matrix: %s\n", is_tringular_matrix(len_matrix, len_matrix, matrix) ? "true" : "false");
    printf("is_zero_matrix: %s\n", is_zero_matrix(len_matrix, len_matrix, matrix) ? "true" : "false"); 
    printf("\n");
    srand(time(NULL));
    return 0;
}