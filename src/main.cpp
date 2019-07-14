//
// Created by Hao Su on 2019-07-03.
//

#include <iostream>
#include "sort/BubbleSort.h"
#include "sort/SelectionSort.h"
#include "sort/InsertionSort.h"
#include "sort/ShellSort.h"
#include "sort/MergeSort.h"
#include "sort/QuickSort.h"
#include "sort/HeapSort.h"
#include "sort/CountingSort.h"
#include "sort/RadixSort.h"


int main (int argc, char* argv[]) {
    /* arr for countingSort and radixSort */
    // int countArr[] = {3, 5, 0, 7, 4, 9, 6, 8, 10, 4};

    int arr[] = {3, 5, 1, -7, 4, 9, -6, 8, 10, 4};
    int len = sizeof(arr) / sizeof(int);

    // bubbleSort(arr, len);

    // selectionSort(arr, len);

    // insertionSort(arr, len);

    // shellSort(arr, len);

    // mergeSort(arr, len);

    // quickSort(arr, len);

    // heapSort(arr, len);

    // countingSort(countArr, len);

    // radixSort(countArr, len);

    for (int i = 0; i < len; ++i) {
        std::cout << arr[i] << " ";
    }


    return 0;
}
