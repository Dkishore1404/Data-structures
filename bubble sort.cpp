#include <stdio.h>

int main() {
    int a[30], n, i, j, temp;
    printf("Enter the number of elements you want to sort: ");
    scanf("%d", &n);
    printf("Enter the elements you want to sort: ");
    for (i= 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (a[j] > a[j+ 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    printf("The elements after bubble sort are:\n");
    for (i = 0; i < n; i++) {
        printf("%d\n", a[i]);
    }

    return 0;
}
