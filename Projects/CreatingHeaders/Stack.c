#include <stdio.h>
#include <stdlib.h>

/*
 * Node struct for linked list.
 */
typedef struct node {
    int data;
    struct node *next;
} node;

struct node *head = NULL;

/*
 * Iterate through the Linked List and print each element.
 */
void printList() {
    struct node *pointer = head;
    printf("printing list: \n");
    while(pointer != NULL) {
        printf("data: %d\n", pointer->data);
        pointer = pointer->next;
    }
}

/*
 * Add a new Node to the beginning of the linked list.
 */
void push(int d) {
    struct node *newNode = (struct node*)malloc(sizeof(node));
    newNode->data = d;
    newNode->next = head;
    head = newNode;
}

/*
 * Remove a Node from the beginning of the linked list.
 */
int pop() {
    int value = head->data;
    head = head->next;

    return value;
}

/*
 * Test client for linked list in stack structure.
 */
int main() {
    printf("Testing linked list functionality in C.\n");

    struct node *head = (struct node*)malloc(sizeof(node));

    for (int i = 0; i < 10; i++) {
        printf("Adding %d to linked list\n", i);
        push(i);
    }

    printList();

    printf("Removing %d from linked list\n", pop());
    printList();

    return 0;
}
