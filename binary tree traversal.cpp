#include <stdio.h>

// Function to perform inorder traversal
void inorderTraversal(int arr[], int n, int rootIndex) {
    if (rootIndex < n) {
        inorderTraversal(arr, n, 2 * rootIndex + 1); // Traverse left subtree
        printf("%d ", arr[rootIndex]); // Visit the root node
        inorderTraversal(arr, n, 2 * rootIndex + 2); // Traverse right subtree
    }
}

// Function to perform preorder traversal
void preorderTraversal(int arr[], int n, int rootIndex) {
    if (rootIndex < n) {
        printf("%d ", arr[rootIndex]); // Visit the root node
        preorderTraversal(arr, n, 2 * rootIndex + 1); // Traverse left subtree
        preorderTraversal(arr, n, 2 * rootIndex + 2); // Traverse right subtree
    }
}

// Function to perform postorder traversal
void postorderTraversal(int arr[], int n, int rootIndex) {
    if (rootIndex < n) {
        postorderTraversal(arr, n, 2 * rootIndex + 1); // Traverse left subtree
        postorderTraversal(arr, n, 2 * rootIndex + 2); // Traverse right subtree
        printf("%d ", arr[rootIndex]); // Visit the root node
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7}; // Binary tree represented as an array

    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Inorder Traversal: ");
    inorderTraversal(arr, n, 0);
    printf("\n");

    printf("Preorder Traversal: ");
    preorderTraversal(arr, n, 0);
    printf("\n");

    printf("Postorder Traversal: ");
    postorderTraversal(arr, n, 0);
    printf("\n");

    
}
