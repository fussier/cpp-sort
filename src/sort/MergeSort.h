//
// Created by Hao Su on 2019-07-04.
//

#ifndef CPP_SORT_EXAMPLE_MERGESORT_H
#define CPP_SORT_EXAMPLE_MERGESORT_H

void merge (int arr[], int begin, int end, int pos, int temp[]) {
    int i = begin;
    int fi = begin;
    int mid = pos;

    while (begin < mid && pos < end) {
        temp[i++] =  arr[begin] > arr[pos] ? arr[pos++] : arr[begin++];
    }

    while (pos < end) {
        temp[i++] = arr[pos++];
    }

    while (begin < mid) {
        temp[i++] = arr[begin++];
    }

    for (int j = fi; j < end; ++j) {
        arr[j] = temp[j];
    }
}

void mergeSort (int arr[], int begin, int end, int temp[]) {

    if (begin < end - 1) {
        int pos = (begin + end) / 2;

        mergeSort(arr, begin, pos, temp);
        mergeSort(arr, pos, end, temp);

        merge(arr, begin, end, pos, temp);
    }
}

void mergeSort (int arr[], int len) {
    int *temp = new int[len];
    mergeSort(arr, 0, len, temp);
}



#endif //CPP_SORT_EXAMPLE_MERGESORT_H
