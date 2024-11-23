#include <stdio.h>

 main() {
    int rows, cols;

    // Taking the size of the matrix
    printf("Enter the array's row & column size: ");
    scanf("%d %d", &rows, &cols);

    int a[rows][cols]; // Declare the  matrix

    int transpose[cols][rows]; // Declare the transpose matrix

    // Taking the elements 
    printf("Enter array's elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    // Calculating the transpose of the matrix
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transpose[j][i] = a[i][j]; // Swap the rows and columns
        }
    }

    // Printing the transposed matrix
    printf("The transpose matrix of an array:\n");
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

   
}
