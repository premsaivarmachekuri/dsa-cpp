#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>& arr, int l, int m, int h) {
    vector<int> temp;
    int left = l;
    int right = m + 1;
    int high = h;
    
    while (left <= m && right <= h) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        } else {
            temp.push_back(arr[right]);
            right++;
        }
    }

    while (left <= m) {
        temp.push_back(arr[left]);
        left++;
    }

    while (right <= high) {
        temp.push_back(arr[right]);
        right++;
    }

    for (int i = l; i <= h; i++) {
        arr[i] = temp[i - l];
    }
}

void merge_sort(vector<int>& arr, int l, int r) {
    if (l >= r) {
        return;
    }
    int mid = (l + r) / 2;
    merge_sort(arr, l, mid);
    merge_sort(arr, mid + 1, r);
    merge(arr, l, mid, r);
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    merge_sort(arr, 0, n - 1);
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    return 0;
}
