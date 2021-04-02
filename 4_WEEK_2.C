#include <stdio.h>
int main() {
    int i, n;
    int arr[10];
    printf("Enter the number of elements (1 to 10): ");
    scanf("%d", &n);

    for (i = 0; i < n; ++i) {
        printf("Enter number a[%d]: ", i );
        scanf("%d", &arr[i]);
    }
    for (i = 1; i < n; ++i) {
        if (arr[0] < arr[i])
            arr[0] = arr[i];
    }

    printf("Largest element in the array %d", arr[0]);

    return 0;
}