/*
 * Filename: main.c
 * Description: Main driver for matrix manipulating functions
 * Date: Feb. 2020
 * Name: 
 */

#include <stdio.h>   // printf()

#define N 4

void copy(void *, void *, int);
// void transpose(void *, int );
// void reverseColumns(void *, int n);
void printMatrixByRow(void *, int);

char A[N][N] = { 1,  -2,  3,  -4,
                -5,   6, -7,   8,
                -1,   2, -3,   4,
                 5,  -6,  7,  -8};

char C[N][N];

void main() {
    int i, j;

    printf("Copy: \n");
    copy(A, C, N);
    printMatrixByRow(A, N);  // 
    printMatrixByRow(C, N);

    printf("Rotating the matrix by 90 degrees clockwise: \n");
//    transpose(C, N);
//    reverseColumns(C, N);
    printMatrixByRow(C, N);

    return;
}

void printMatrixByRow(void *D, int n) {
    int i, j;
    char val;
    for (i = 0; i < n; i++) {
        val = *((char*)(D + i*n + j));
        printf("%4d %4d %4d %4d", *((char*)(D + i*n + 0)), *((char*)(D + i*n + 1)), *((char*)(D + i*n + 2)), *((char*)(D + i*n + 3)));
        printf("\n");
    }
    printf("\n");
}