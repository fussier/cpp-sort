//
// Created by Hao Su on 2019-07-14.
//

#ifndef CPP_SORT_EXAMPLE_RADIXSORT_H
#define CPP_SORT_EXAMPLE_RADIXSORT_H

#include <vector>

void radixSort (int arr[], int len) {
    std::vector<std::vector<int> > buckets;
    buckets.reserve(10);
    for (int k = 0; k < 10; ++k) {
        buckets.push_back(std::vector<int>());
    }

    for (int i = 0; i < len; ++i) {
        buckets[arr[i] % 10].push_back(arr[i]);
    }

    int index = 0;
    for (auto& bucket : buckets) {
        for (auto& elem : bucket) {
            arr[index++] = elem;
        }

        bucket.clear();
    }

    for (int j = 0; j < len; ++j) {
        buckets[arr[j] / 10].push_back(arr[j]);
    }

    index = 0;
    for (auto& bucket : buckets) {
        for (auto& elem : bucket) {
            arr[index++] = elem;
        }
    }
}

#endif //CPP_SORT_EXAMPLE_RADIXSORT_H
