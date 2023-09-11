#include <stdio.h>

int main() {
    int a[10][10], b[10][10], sum[10][10], r, c, i, j, k;
    
    printf("Enter the number of rows: ");
    scanf("%d", &r);
    
    printf("Enter the number of columns: ");
    scanf("%d", &c);
    
    printf("Enter the first matrix elements:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    
    printf("Enter the second matrix elements:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &b[i][j]);
        }
    }
    
    printf("Sum of the matrices:\n");
    sum[i][j] = a[i][j] + b[i][j];
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            
            printf("%d\t", sum[i][j]);
        }
        
    }
    
    return 0;
}