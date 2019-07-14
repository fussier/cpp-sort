//
// Created by Hao Su on 2019-07-03.
//

#ifndef CPP_SORT_EXAMPLE_SELECTIONSORT_H
#define CPP_SORT_EXAMPLE_SELECTIONSORT_H

void selectionSort (int arr[], int len) {
    for (int i = 0; i < len - 1; ++i) {
        int min = arr[i];
        int pos = i;

        for (int j = i + 1; j < len; ++j) {
            if (min > arr[j]) {
                min = arr[j];
                pos = j;
            }
        }

        std::swap(arr[i], arr[pos]);
    }
}

#endif //CPP_SORT_EXAMPLE_SELECTIONSORT_H
