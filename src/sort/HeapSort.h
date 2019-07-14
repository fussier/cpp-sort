//
// Created by Hao Su on 2019-07-05.
//

#ifndef CPP_SORT_EXAMPLE_HEAPSORT_H
#define CPP_SORT_EXAMPLE_HEAPSORT_H

void adjustHeap(int arr[], int pos, int len) {
    int temp = arr[pos];

    for (int i = 2 * pos + 1; i < len; i = i * 2 + 1) {
        if (i + 1 < len && arr[i] < arr[i + 1]) {
            i++;
        }

        if (temp < arr[i]) {
            arr[pos] = arr[i];
            pos = i;
        } else {
            break;
        }
    }

    arr[pos] = temp;
}

void heapSort(int arr[], int len) {
    for (int i = len / 2 - 1; i > -1 ; --i) {
        adjustHeap(arr, i, len);
    }

    for (int j = 1; j < len; ++j) {
        std::swap(arr[0], arr[len - j]);
        adjustHeap(arr, 0, len - j);
    }
}

#endif //CPP_SORT_EXAMPLE_HEAPSORT_H
