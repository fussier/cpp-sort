//
// Created by Hao Su on 2019-07-03.
//
#ifndef CPP_SORT_EXAMPLE_BUBBLESORT_H
#define CPP_SORT_EXAMPLE_BUBBLESORT_H

void bubbleSort (int arr[], int len) {
    for (int i = 0; i < len - 1; ++i) {
        for (int j = i + 1; j < len; ++j) {
            if (arr[i] > arr[j]) {
                std::swap(arr[i], arr[j]);
            }
        }
    }
}

#endif //CPP_SORT_EXAMPLE_BUBBLESORT_H