#include <stdio.h>

int main() {
    int n, i, value, pos;

    printf("Input the size of array : ");
    scanf("%d", &n);

    /* Extra space for 1 new element */
    int arr[n + 1];

    printf("Input %d elements in the array in ascending order:\n", n);
    for (i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    printf("Input the value to be inserted : ");
    scanf("%d", &value);

    printf("Input the Position, where the value to be inserted :");
    scanf("%d", &pos);

    printf("The current list of the array : ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    /* Shift elements right to make room at index (pos - 1) */
    for (i = n; i > pos - 1; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos - 1] = value;
    n = n + 1;

    printf("\nAfter Insert the element the new list is : ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
