#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *next;
} node;

struct node *head = NULL;

void printList() {
    struct node *pointer = head;
    printf("printing list: \n");
    while(pointer != NULL) {
        printf("data: %d", pointer->data);
        pointer = pointer->next;
    }
}

void enqueue(int d) {
    struct node* newNode = (struct node*)malloc(sizeof(node));
    newNode->data = d;

    head->next = newNode;
    head = newNode;
    free(newNode);
}

int dequeue() {
    //int value = tail->data;
    //struct node *tail = NULL;

    //return value;
    return 0;
}

int main() {
    printf("Testing linked list functionality in C.\n");

    struct node *head = (struct node*)malloc(sizeof(node));
    head->data = 5012;

    printf("head data: %d\n", head->data);

    for (int i = 0; i < 10; i++) {
        printf("Adding %d to linked list\n", i);
        //enqueue(i);
    }

    printList();

    return 0;
}
