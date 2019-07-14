//
// Created by Hao Su on 2019-07-03.
//

#ifndef CPP_SORT_EXAMPLE_INSERTIONSORT_H
#define CPP_SORT_EXAMPLE_INSERTIONSORT_H

void insertionSort (int arr[], int len) {
    for (int i = 1; i < len; ++i) {
        int j = i;

        while (j > 0 && arr[j - 1] > arr[j]) {
            std::swap(arr[j - 1], arr[j]);
            --j;
        }
    }
}

#endif //CPP_SORT_EXAMPLE_INSERTIONSORT_H
