#include <stdio.h>

main() {
    int size;

    // size of the array
    printf("Enter the array's size: ");
    scanf("%d", &size);

    int array[size]; // Declare an array 

    // Taking the elements of the array
    printf("Enter array's elements:\n");
    for (int i = 0; i < size; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &array[i]);
    }

    // Print the negative elements of the array
    printf("Negative elements from the Array: ");
    int Negative = 0;
    for (int i = 0; i < size; i++) {
        if (array[i] < 0) {
            printf("%d  ", array[i]);
            Negative = 1; 
        }
    }

    if (!Negative) {
        printf("None"); // If no negative numbers are found
    }

    printf("\n"); 
}
