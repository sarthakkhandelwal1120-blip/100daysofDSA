#include <stdio.h>

int main() {
    int n, pos;
    int arr[100];

    // Ask number of elements
    printf("Enter how many elements you want in the array: ");
    scanf("%d", &n);

    // Ask array elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Ask position to delete
    printf("Enter the position (1-based) of the element you want to remove: ");
    scanf("%d", &pos);

    // Shift elements to the left
    for (int i = pos - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    // Print updated array
    printf("Array after deletion:\n");
    for (int i = 0; i < n - 1; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

