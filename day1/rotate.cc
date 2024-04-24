#include <vector>
#include <algorithm>

using namespace std;

void rotate(vector<int>& arr, int k) {
    int n = arr.size();
    k = k % n;
    std::rotate(arr.begin(), arr.begin() + k, arr.end());
}

void rotate(int arr[], int k) {
  int n = sizeof(arr)/sizeof(arr[0]);
  k = k % n;
  for (int i = 0; i < k; i++) {
    int tmp = arr[0];
    for (int j = 0; j < n - 1; j++) {
      arr[j] = arr[j + 1];
    }
    arr[n - 1] = tmp;
  }
}