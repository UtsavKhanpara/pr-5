#include <stdio.h>

main() {
    int rows, cols;

    //  row and column size of the 2D array
    printf("Enter the array's row size: ");
    scanf("%d", &rows);

    printf("Enter the array's column size: ");
    scanf("%d", &cols);

    int a[rows][cols]; // Declare a 2D array 

    // Taking the elements of the 2D array
    printf("Enter array's elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    // Finding the largest element in the 2D array
    int large = a[0][0]; // 
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (a[i][j] > large) {
                large = a[i][j]; 
            }
        }
    }

    // Printing the largest element
    printf("The largest element is: %d\n", large);

}
