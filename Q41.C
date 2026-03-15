#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void printList(struct Node* head) {
    printf("[");
    while (head != NULL) {
        printf("%d", head->data);
        if (head->next != NULL)
            printf(",");
        head = head->next;
    }
    printf("]");
}

struct Node* middleNode(struct Node* head) {
    struct Node *slow = head, *fast = head;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}

int main() {
    int n, x;
    struct Node *head = NULL, *temp = NULL, *newNode = NULL;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        newNode = createNode(x);

        if (head == NULL) {
            head = newNode;
            temp = head;
        } else {
            temp->next = newNode;
            temp = newNode;
        }
    }

    struct Node* mid = middleNode(head);
    printList(mid);

    return 0;
}
