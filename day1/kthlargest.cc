#include <bits/stdc++.h>

using namespace  std;

int kthLargest(int arr[], int k) {
  int n = sizeof(arr) / sizeof(arr[0]);
  return kthLargestHelper(arr, n, k);
}

int kthLargestHelper(int arr[], int n, int k) {
  sort(arr, arr + n);
  return arr[n - k];
}