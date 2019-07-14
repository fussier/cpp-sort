//
// Created by Hao Su on 2019-07-03.
//

#ifndef CPP_SORT_EXAMPLE_SHELLSORT_H
#define CPP_SORT_EXAMPLE_SHELLSORT_H

void shellSort (int arr[], int len) {
    for (int gap = len / 2; gap > 0; gap /= 2) {
        for (int i = gap; i < len; ++i) {

            int j = i;
            while (j - gap >= 0 && arr[j - gap] > arr[j]) {
                std::swap(arr[j], arr[j - gap]);
                j -= gap;
            }
        }
    }
    
}

#endif //CPP_SORT_EXAMPLE_SHELLSORT_H
