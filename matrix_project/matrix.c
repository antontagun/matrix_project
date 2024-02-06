#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

void print_matrix(size_t n, size_t m, const int matrix[][m])

{
    for(size_t i = 0; i < n; i++)
    {
        for(size_t j = 0; j < m; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

bool is_square_matrix(size_t n, size_t m, const int matrix[][m])
{
    return n == m;
}

bool is_zero_matrix(size_t n, size_t m, const int matrix[][m])
{
    for(size_t i = 0; i < n; i++)
    {
        for(size_t j = 0; j < m; j++)
        {
            if (matrix[i][j] != 0)
            {
                return false;
            }
        }
    }
    return true;
}

bool is_identity_matrix(size_t n, size_t m, const int matrix[][m])
{
    for(size_t i = 0; i < n; i++)
    {
        if (matrix[i][i] != 1)
        {
            return false;
        }
    }
    for(size_t i = 0; i < n; i++)
    {
        for(size_t j = 0; j < i; j++)
        {
            if (matrix[i][j] != 0 && matrix[j][i] != 0)
            {
                return false;
            }
        }
    }
    return true;
}

bool is_tringular_matrix(size_t n, size_t m, const int matrix[][m])
{
    bool low = false, up = false;

    for(size_t i = 0; i < n; i++)
    {
        for(size_t j = 0; j < i; j++)
        {
            if (matrix[i][j] != 0)
            {
                up = true;
            }
            if (matrix[j][i] != 0)
            {
                low = true;
            }
            if (low && up)
                break; 
        }
        if (low && up)
            break;
    }
    
    return up != low;
}

bool is_scalar_matrix(size_t n, size_t m, const int matrix[][m])
{
    for(size_t i = 0; i < n; i++)
    {
        if (matrix[i][i] != matrix[0][0])
        {
            return false;
        }
    }
    for(size_t i = 0; i < n; i++)
    {
        for(size_t j = 0; j < i; j++)
        {
            if (matrix[i][j] != 0 || matrix[j][i] != 0)
            {
                return false;
            }
        }
    }
    return true;
}

bool is_diagonal_matrix(size_t n, size_t m, const int matrix[][m])
{
    for(size_t i = 0; i < n; i++)
    {
        for(size_t j = 0; j < i; j++)
        {
            if (matrix[i][j] != 0 || matrix[j][i] != 0)
            {
                return false;
            }
        }
    }
    return true;
}

bool is_symmetric_matrix(size_t n, size_t m, const int matrix[][m])
{
    for(size_t i = 0; i < n; i++)
    {
        for(size_t j = 0; j < i; j++)
        {
            if (matrix[i][j] != matrix[j][i])
            {
                return false;
            }
        }
    }
    return true;
}

int fill_matrix_randomly(size_t n, size_t m, int matrix[][m], int min, int max)
{
    if (max < min)
        return 0;
    int len = max - min + 1;
    for(size_t i = 0; i < n; i++)
    {
        for(size_t j = 0; j < m; j++)
        {
            matrix[i][j] = (rand() % len) + min;
        }
    }
    return matrix[n][m];
}

void fprint_matrix(FILE* fl, size_t n, size_t m, const int matrix[][m])
{
    for(size_t i = 0; i < n; i++)
    {
        for(size_t j = 0; j < m; j++)
        {
            fprintf(fl, "%d ", matrix[i][j]);
        }
        fprintf(fl, "\n");
    }
}

void fscan_matrix(FILE* fl, size_t n, size_t m, const int matrix[][m])
{
    for(size_t i = 0; i < n; i++)
    {
        for(size_t j = 0; j < m; j++)
        {
            fscanf(fl, "%d ", &matrix[i][j]);
        }
    }
}