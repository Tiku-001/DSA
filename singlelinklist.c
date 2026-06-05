// single link list (insertion & deletion)
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* head = NULL;

void insert(int x) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = x;
    newNode->next = head;
    head = newNode;
    printf("%d inserted\n", x);
}

void deleteNode() {
    if (head == NULL)
        printf("List is empty\n");
    else {
        struct Node* temp = head;
        printf("%d deleted\n", temp->data);
        head = head->next;
        free(temp);
    }
}

void display() {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    insert(1);
    insert(2);
    insert(3);
    display();
    deleteNode();
    display();
    return 0;
}