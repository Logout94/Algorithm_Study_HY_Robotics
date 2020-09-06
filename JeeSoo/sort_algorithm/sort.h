/**
 * sort.h
 * 
 * File : Sorting Algorithm Functions
 * Author : Jeesoo HA
 * Day : 2020.09.05 
 */

#ifndef __SORT_HEADER__
#define __SORT_HEADER__

#include <stdio.h>
#include <math.h>

// Common
void swap(int * a, int* b);
void PrintArray(int array[], int size);


// Sorting Algorithm

void InsertionSort(int array[], int size);

void SelectionSort(int array[], int size);

void BubbleSort(int array[], int size);

void MergeSort(int array[], int p, int r);
void merge(int array[], int p, int q, int r);

void HeapSort(int array[], int size);
void heapify(int array[], int size);
void downheap(int array[], int cur, int size);

void QuickSort(int array[], int left, int right);

#endif // __SORT_HEADER__