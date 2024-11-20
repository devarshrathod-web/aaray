#include <stdio.h>

int main() {
    int n;

    printf("Enter the array's size: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array's elements:\n");
    for (int i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &arr[i]);
    }


    printf("Negative elements from the Array: ");
    int found = 0; 
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            printf("%d", arr[i]);
            found = 1;
            if (i < n - 1) {
                printf(", ");
            }
        }
    }

    if (!found) {
        printf("None");
    }

    return 0;
}
