
#include <stdio.h>

int main() {
    int i, n;
    int f = 1;

    printf("Enter your number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("No factorial for negative numbers.\n");
    }
    else {

        for (i = 1; i <= n; i++)
            f = f * i;

        printf("Factorial of %d is: %d\n", n, f);
    }

    return 0;
}
