#include <stdio.h>

int main() {
    int size;


    printf("Enter the array's row & column size: ");
    scanf("%d", &size);

    int arr[size][size], transpose[size][size];

   
    printf("Enter array's elements:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }


    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            transpose[j][i] = arr[i][j];
        }
    }


    printf("The transpose matrix of the array:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
