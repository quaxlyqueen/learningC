#include <stdlib.h>
#include <stdio.h>
#include "Queue.h"

int main() {
    printf("testing creating header files.");

    struct node *head = (struct node*)malloc(sizeof(node));

    for (int i = 0; i < 10; i++) {
        enqueue(i);
    }

    printList();

    return 0;
}
