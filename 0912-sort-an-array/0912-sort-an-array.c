/**
 * LeetCode 912 - Sort an Array
 */

/**
 * Note: The returned array must be malloced,
 * assume caller calls free().
 */

#include <stdlib.h>

void merge(int arr[], int low, int mid, int high) {

    int size = high - low + 1;

    // Temporary array
    int *temp = malloc(size * sizeof(int));

    int i = low;
    int j = mid + 1;
    int k = 0;

    // Compare elements of both halves
    while (i <= mid && j <= high) {

        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        }
        else {
            temp[k++] = arr[j++];
        }
    }

    // Remaining elements of left half
    while (i <= mid) {
        temp[k++] = arr[i++];
    }

    // Remaining elements of right half
    while (j <= high) {
        temp[k++] = arr[j++];
    }

    // Copy temp back into original array
    for (i = low, k = 0; i <= high; i++, k++) {
        arr[i] = temp[k];
    }

    free(temp);
}


void mergesort(int arr[], int low, int high) {

    if (low < high) {

        int mid = low + (high - low) / 2;

        // Sort left half
        mergesort(arr, low, mid);

        // Sort right half
        mergesort(arr, mid + 1, high);

        // Merge both sorted halves
        merge(arr, low, mid, high);
    }
}


int* sortArray(int* nums, int numsSize, int* returnSize) {

    *returnSize = numsSize;

    mergesort(nums, 0, numsSize - 1);

    return nums;
}