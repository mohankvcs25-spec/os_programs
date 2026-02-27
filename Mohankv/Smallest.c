#include <stdio.h>
#include <limits.h>

int main() {
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if(n < 2) {
        printf("Need at least 2 elements.\n");
        return 0;
    }

    int arr[n];

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for(i = 0; i < n; i++) {
        if(arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        }
        else if(arr[i] < largest && arr[i] > secondLargest) {
            secondLargest = arr[i];
        }
    }

    if(secondLargest == INT_MIN)
        printf("No second largest element.\n");
    else
        printf("Second Largest Element = %d\n", secondLargest);

    return 0;
}