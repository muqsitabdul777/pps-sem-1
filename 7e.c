#include <stdio.h>

int main() {
    int a[100], n, i, key;
    int low, high, mid, found = 0;
    printf("Enter the number of elements (max 100): ");
    scanf("%d", &n);
    printf("Enter %d integers in ascending (sorted) order:\n", n);
    for (i = 0; i < n; i++)
        {
        scanf("%d", &a[i]);
    }
    printf("Enter the key value to search: ");
    scanf("%d", &key);
    low = 0;
    high = n - 1;
    while (low <= high) {
        mid = low + (high - low) / 2;
if (a[mid] == key) {
            printf("Element %d found at index %d (position %d).\n", key, mid, mid + 1);
            found = 1;
            break;
        }
        else if (a[mid] < key) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    if (!found) {
        printf("Element %d is not present in the array.\n", key);
    }
    return 0;
}
