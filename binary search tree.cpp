#include <stdio.h>

// Maximum number of nodes in the tree
#define MAX_NODES 100

int tree[MAX_NODES]; // Array to represent the BST

// Function to insert a value into the BST and print it
void insertAndPrint(int value, int rootIndex) {
    if (tree[rootIndex] == 0) {
        tree[rootIndex] = value;
        printf("%d ", value); // Print the inserted value
    } else {
        if (value <= tree[rootIndex]) {
            insertAndPrint(value, 2 * rootIndex + 1); // Recursively insert into left subtree
        } else {
            insertAndPrint(value, 2 * rootIndex + 2); // Recursively insert into right subtree
        }
    }
}

int main() {
    insertAndPrint(5, 0);
    insertAndPrint(3, 0);
    insertAndPrint(8, 0);
    insertAndPrint(2, 0);
    insertAndPrint(4, 0);
    insertAndPrint(7, 0);
    insertAndPrint(9, 0);

    printf("\n"); // Add a newline to separate the printed values

    return 0;
}
