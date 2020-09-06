#include <stdio.h>
#include "sort.h"

int main(){

    int test_case[] = { 3, 4, 5, 1, 2};
    int size = sizeof(test_case)/sizeof(int);


    printf("test data : ");
    PrintArray(test_case, size);

#if 0
    printf("\n> Insertion Sort : ");
    InsertionSort(test_case, size);
    PrintArray(test_case, size);

    printf("\n> Selection Sort : ");
    SelectionSort(test_case, size);
    PrintArray(test_case, size);

    printf("\n> Bubble Sort : ");
    BubbleSort(test_case, size);
    PrintArray(test_case, size);

    printf("\n> Merge Sort : ");
    MergeSort(test_case, 0, size-1);
    PrintArray(test_case, size);

    printf("\n> Heap Sort : ");
    HeapSort(test_case,size);
    PrintArray(test_case, size);

#endif

    printf("\n> Quick Sort : ");
    QuickSort(test_case, 0, size-1 );
    PrintArray(test_case, size);

    return 0;
}

