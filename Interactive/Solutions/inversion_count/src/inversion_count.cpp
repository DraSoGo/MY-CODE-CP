#include "inversion_count.h"
using namespace std;

long long merge_and_count(vector<int>& arr, int left, int mid, int right) {
    vector<int> left_part(arr.begin() + left, arr.begin() + mid + 1);
    vector<int> right_part(arr.begin() + mid + 1, arr.begin() + right + 1);
    int i = 0, j = 0, k = left;
    long long inv_count = 0;

    while (i < left_part.size() && j < right_part.size()) {
        if (left_part[i] <= right_part[j]) {
            arr[k++] = left_part[i++];
        } else {
            arr[k++] = right_part[j++];
            inv_count += left_part.size() - i;
        }
    }

    while (i < left_part.size()) arr[k++] = left_part[i++];
    while (j < right_part.size()) arr[k++] = right_part[j++];

    return inv_count;
}

long long merge_sort_and_count(vector<int>& arr, int left, int right) {
    if (left >= right) return 0;
    int mid = (left + right) / 2;
    long long count = 0;
    count += merge_sort_and_count(arr, left, mid);
    count += merge_sort_and_count(arr, mid + 1, right);
    count += merge_and_count(arr, left, mid, right);
    return count;
}

long long count_inversions(vector<int>& arr) {
    return merge_sort_and_count(arr, 0, arr.size() - 1);
}