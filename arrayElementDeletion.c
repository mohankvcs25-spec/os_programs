#include <stdio.h>

int main() {
    int arr[100], position, i, n;

    // 1. Initializing the array
    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // 2. Identifying the target position
    printf("Enter the location where you wish to delete an element (1 to %d): ", n);
    scanf("%d", &position);

    // 3. Validation and Shifting
    if (position >= n + 1 || position < 1) {
        printf("Deletion not possible. Position out of bounds.\n");
    } else {
        // Shift elements to the left
        // We use 'position - 1' because arrays are 0-indexed
        for (i = position - 1; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }

        printf("Resultant array:\n");
        for (i = 0; i < n - 1; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}