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

struct Node* mergeTwoLists(struct Node* list1, struct Node* list2) {
    struct Node dummy;
    struct Node* tail = &dummy;
    dummy.next = NULL;

    while (list1 != NULL && list2 != NULL) {
        if (list1->data <= list2->data) {
            tail->next = list1;
            list1 = list1->next;
        } else {
            tail->next = list2;
            list2 = list2->next;
        }
        tail = tail->next;
    }

    if (list1 != NULL)
        tail->next = list1;
    else
        tail->next = list2;

    return dummy.next;
}

int main() {
    int n1, n2, x;
    struct Node *list1 = NULL, *list2 = NULL, *temp = NULL, *newNode = NULL;

    scanf("%d", &n1);
    for (int i = 0; i < n1; i++) {
        scanf("%d", &x);
        newNode = createNode(x);
        if (list1 == NULL) {
            list1 = newNode;
            temp = list1;
        } else {
            temp->next = newNode;
            temp = newNode;
        }
    }

    scanf("%d", &n2);
    for (int i = 0; i < n2; i++) {
        scanf("%d", &x);
        newNode = createNode(x);
        if (list2 == NULL) {
            list2 = newNode;
            temp = list2;
        } else {
            temp->next = newNode;
            temp = newNode;
        }
    }

    struct Node* merged = mergeTwoLists(list1, list2);
    printList(merged);

    return 0;
}
