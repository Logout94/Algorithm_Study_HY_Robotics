
#include "sort.h"


void PrintArray(int array[], int size){
    int i;
    for(i = 0; i<size; i++){
        printf("%d ", array[i]);
    }
    printf("\n");
}


void swap(int * a, int* b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}


/**
 * Insertion Sort Function
 * - array : sort array
 * - size : array size
 * 
*/
void InsertionSort(int array[], int size){
    int i, j, key;

    for(j = 1; j < size; j++){
        key = array[j];

        i = j-1;
        while (i > 0 && key < array[i]){
            array[i+1] = array[i];
            i--;
        }
        array[i+1] = key;
    }
}


/**
 * Selection Sort Function
 * - array : sort array
 * - size : array size
 * 
*/
void SelectionSort(int array[], int size){

    int i, j, min;
    
    for(i=0; i<size-1;i++){
        min = i;

        // Fine the i-th smallest element
        for(j=i+1; j<size; j++){
            if(array[j]<array[min]){
                min = j;
            }
        }

        if(min != i){
            swap(&array[min], &array[i]);
        }
    }
}


/**
 * Bubble Sort Function
 * - array : sort array
 * - size : array size
 * 
*/
void BubbleSort(int array[], int size){

    int i, j;
    for(i=1 ; i<size; i++){
        for(j=0 ; j<size-i; j++){
            if(array[j] > array[j+1]){
                swap(&array[j], &array[j+1]);
            }
        }
    }
}

/**
 * Merge Sort Function
 * - array : sort array
 * - p : start index
 * - r : end index
 * 
*/
void MergeSort(int array[], int p, int r){
    if (p < r)
    {
        // mid
        int q =  (p+r)/2;
        MergeSort(array, p, q);
        MergeSort(array, q+1, r);
        merge(array, p, q, r);
    }
}

void merge(int array[], int p, int q, int r){
    int n1 = q-p+1; // left array size
    int n2 = r-q;   // right array size 

    int arrL[n1];
    int arrR[n2];

    int i;
    for(i=0; i<n1; i++){
        arrL[i] = array[p+i];

    }

    int j;
    for(j=0; j<n2; j++){
        arrR[j] = array[q+j+1];

    }

    arrL[n1] = __INT_MAX__;
    arrR[n2] = __INT_MAX__;

    i = 0;
    j = 0;
    int k;
    for(k=p; k<=r; k++){
        if(arrL[i] <= arrR[j])
        {
            array[k] = arrL[i];
            i++;
        }
        else{
            array[k] = arrR[j];
            j++;
        }
    }
}


/**
 * Heap Sort Function
 * - array : sort array
 * - size : array size
 */ 
void HeapSort(int array[], int size){

    heapify(array, size);
    
    int k;
    for(k = size-1; k > 0; k--){
        swap(&array[0], &array[k]);
        downheap(array, 0, k);
    }
}

void heapify(int array[], int size)
{
    int i, p;
    for(i = (size-1)/2 ; i>= 0; i--)
    {
        downheap(array, i, size);
    }
}


void downheap(int array[], int cur, int size)
{
    int left, right, p;

    while (cur < size){
        left  = cur*2 + 1;
        right = cur*2 + 2;

        if(left >= size && right >= size) break;

        p = cur;
        if(left < size && array[p] < array[left])
            p = left;

        if(right < size && array[p] < array[right])
            p = right;

        if (p == cur) break;

        swap(&array[cur], &array[p]);
        cur = p;
    }
}


/**
 * Quick Sort Function
 * - array : sort array
 * - left : start index
 * - right : end index
 */ 
void QuickSort(int array[], int left, int right){
    int i = left, j = right;
    int pivot = array[ (left+right)/2 ];
    int tmp;

    do{
        while(array[i] < pivot) i++;
        while(array[j] > pivot) j--;

        if(i <= j){
            swap(&array[i], &array[j]);
            i++;
            j--;
        }
    }while( i<= j);

    // Recurse
    if(left < j)    QuickSort(array, left, j);
    if(i < right)   QuickSort(array, i, right);
}
