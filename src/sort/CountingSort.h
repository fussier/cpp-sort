//
// Created by Hao Su on 2019-07-13.
//

#ifndef CPP_SORT_EXAMPLE_COUNTINGSORT_H
#define CPP_SORT_EXAMPLE_COUNTINGSORT_H


void countingSort(int arr[], int len) {
    int maxV = 0;
    for (int i = 0; i < len; ++i) {
        if (arr[i] > maxV) {
            maxV = arr[i];
        }
    }

    int *bucket = new int[maxV + 1];
    memset(bucket, 0, sizeof(int) * (maxV + 1));

    for (int j = 0; j < len; ++j) {
        bucket[arr[j]]++;
    }

    int temp = 0;
    for (int k = 0; k < maxV + 1; ++k) {
        for (int i = 0; i < bucket[k]; ++i) {
            arr[temp++] = k;
        }
    }

    delete[] bucket;
}

#endif //CPP_SORT_EXAMPLE_COUNTINGSORT_H
