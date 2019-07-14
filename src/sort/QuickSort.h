//
// Created by Hao Su on 2019-07-04.
//

#ifndef CPP_SORT_EXAMPLE_QUICKSORT_H
#define CPP_SORT_EXAMPLE_QUICKSORT_H

void sort (int arr[], int begin, int end) {
    if (begin < end) {
        int i = begin;
        int j = end;

        int temp = arr[begin];

        while (begin < end) {
            while (begin < end && arr[end] >= temp) end--;
            arr[begin] = arr[end];

            while (begin < end && arr[begin] <= temp) begin++;
            arr[end] = arr[begin];
        }
        arr[begin] = temp;

        sort(arr, i, begin - 1);
        sort(arr, begin + 1, j);
    }
}

void quickSort (int arr[], int len) {
    sort(arr, 0, len - 1);
}

#endif //CPP_SORT_EXAMPLE_QUICKSORT_H
