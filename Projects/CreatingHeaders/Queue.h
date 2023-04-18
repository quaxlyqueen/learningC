#include <stdlib.h>

/*
 * Node struct for linked list.
 */
typedef struct node {
    int data;
    struct node *next;
} node;

struct node *head = NULL;
struct node *tail = NULL;

/*
 * Iterate through the Linked List and print each element.
 */
void printList() {
    struct node *pointer = head;
    while(pointer != NULL) {
        pointer = pointer->next;
    }
}

/*
 * Add a new Node to the beginning of the linked list.
 */
void enqueue(int d) {
    struct node *newNode = (struct node*)malloc(sizeof(node));
    newNode->data = d;
    if(head == NULL) {
        head = newNode;
        tail = newNode;
        head->next = tail;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

/*
 * Remove a Node from the beginning of the linked list.
 */
int dequeue() {
    int value = head->data;
    head = head->next;

    return value;
}
