#ifndef __MATRIX__
#define __MATRIX__

#include <stdio.h>

void print_matrix(size_t n, size_t m, const int matrix[][m]);

bool is_square_matrix(size_t n, size_t m, const int matrix[][m]);

bool is_zero_matrix(size_t n, size_t m, const int matrix[][m]);

bool is_identity_matrix(size_t n, size_t m, const int matrix[][m]);

bool is_tringular_matrix(size_t n, size_t m, const int matrix[][m]);

bool is_scalar_matrix(size_t n, size_t m, const int matrix[][m]);

bool is_diagonal_matrix(size_t n, size_t m, const int matrix[][m]);

bool is_symmetric_matrix(size_t n, size_t m, const int matrix[][m]);

int fill_matrix_randomly(size_t n, size_t m, int matrix[][m], int min, int max);

void fprint_matrix(FILE* fl, size_t n, size_t m, const int matrix[][m]);

void fscan_matrix(FILE* fl, size_t n, size_t m, const int matrix[][m]);

#endif