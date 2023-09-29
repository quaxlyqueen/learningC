#include <stdio.h>
#include <stdlib.h>

#define NUMEL(x) (sizeof(x) / sizeof((x)[0]))

typedef struct Edge {
    int src, dest;
} Edge;

typedef struct Node {
    int id;
    int size;
    Edge *edges[];
} Node;

typedef struct Graph {
    int size;
    struct Node *nodes[];
} Graph;

Graph* g;

void copy(Edge *dest[], Edge *src[]) {

}

void addNode() {

}

void addEdge(int src, int dest) {
    Edge* e = malloc(sizeof(Edge));
        e->src = src;
        e->dest = dest;

    // TODO: Need to dynamically obtain original edges size.
    Edge *srcEdges[(g->nodes[src]->size) + 1];
    copy(srcEdges, g->nodes[src]->edges);


    g->nodes[src]->size++;
}

int main() {
    g = (Graph*)malloc(sizeof(Graph));
    g->size = 0;

    return 0;
}
