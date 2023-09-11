#include <stdio.h>
#define MAX_SIZE 100

int queue[MAX_SIZE];
int front = -1, rear = -1;

void enqueue(int item) {
    if (rear == MAX_SIZE - 1) {
        printf("Queue is full. Cannot enqueue.\n");
        return;
    }
    if (front == -1) {
        front = 0;
    }
    queue[++rear] = item;
}

int dequeue() {
    if (front == -1) {
        printf("Queue is empty. Cannot dequeue.\n");
        return -1;
    }
    int item = queue[front++];
    if (front > rear) {
        front = rear = -1;
    }
    return item;
}

int main() {
    int choice, item;
    while (1) {
        printf("Choose operation:\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Quit\n");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter item to enqueue: ");
                scanf("%d", &item);
                enqueue(item);
                break;
            case 2:
                item = dequeue();
                if (item != -1) {
                    printf("Dequeued item: %d\n", item);
                }
                break;
            case 3:
                printf("Exiting program.\n");
                return 0;
            default:
                printf("Invalid choice. Please enter 1, 2, or 3.\n");
        }
    }

    return 0;
}
