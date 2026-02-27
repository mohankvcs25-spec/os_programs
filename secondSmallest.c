#include <stdio.h>
#include <limits.h>

int main() {
    int arr[100], n, i;
    int small, secondSmall;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Array should have at least two elements.\n");
        return 0;
    }

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize both to the maximum possible integer value
    small = secondSmall = INT_MAX;

    for (i = 0; i < n; i++) {
        if (arr[i] < small) {
            // If current is smaller than small, update both
            secondSmall = small;
            small = arr[i];
        } 
        else if (arr[i] < secondSmall && arr[i] != small) {
            // If current is between small and secondSmall
            secondSmall = arr[i];
        }
    }

    if (secondSmall == INT_MAX) {
        printf("There is no second smallest element (all elements might be the same).\n");
    } else {
        printf("The smallest element is: %d\n", small);
        printf("The second smallest element is: %d\n", secondSmall);
    }

    return 0;
}