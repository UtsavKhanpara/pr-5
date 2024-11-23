#include <stdio.h>

 main() {
    int rows, cols;

    // Taking the size 
    printf("Enter the array's row size: ");
    scanf("%d", &rows);

    printf("Enter the array's column size: ");
    scanf("%d", &cols);

    int arr[rows][cols]; // Declare the 2D array

    // Taking the elements of the matrix
    printf("Enter array's elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    // Row sum
    int rowIndex;
    printf("Enter row number: ");
    scanf("%d", &rowIndex);

    // 
    if (rowIndex >= 0 && rowIndex < rows)
     {
        int rowSum = 0;
        printf("Elements of row %d: ", rowIndex);
        for (int j = 0; j < cols; j++) 
        {
            printf("%d ", arr[rowIndex][j]);
            rowSum += arr[rowIndex][j]; // Summing the row
        }
        printf("\nThe sum of row %d: %d\n", rowIndex, rowSum);
    }
     else
    {
        printf("Invalid row index!\n");
    }

    // Column sum
    int colIndex;
    printf("Enter column number: ");
    scanf("%d", &colIndex);

    // 
    if (colIndex >= 0 && colIndex < cols) {
        int colSum = 0;
        printf("Elements of column %d: ", colIndex);
        for (int i = 0; i < rows; i++) {
            printf("%d ", arr[i][colIndex]);
            colSum += arr[i][colIndex]; // Summing the column
        }
        printf("\nThe sum of column %d: %d\n", colIndex, colSum);
    } else {
        printf("Invalid column index!\n");
    }

   
}
