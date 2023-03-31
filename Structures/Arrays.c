#include <stdio.h>

void sort(int array[], int size) {
    int temp;
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            if(array[j] > array[i]) {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}

void printArray(int array[], int size) {
    printf("\n");
    for(int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main() {
    int array[] = {9, 1, 8, 2, 7, 3, 6, 4, 5};
    int size = sizeof(array)/sizeof(array[0]);

    printf("Pre-sorted array: ");
    printArray(array, size);
    sort(array, size);

    printf("Post-sorted array: ");
    printArray(array, size);

    return 0;
}
