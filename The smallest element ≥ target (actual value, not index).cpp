#include <iostream>
using namespace std;

int ceilElement(int arr[], int n, int target) {
    int left = 0, right = n - 1;
    int ans = -1;
    while(left <= right) {
        int mid = left + (right - left) / 2;
        if(arr[mid] >= target) {
            ans = arr[mid];
            right = mid - 1; // search left half for smaller ceil
        } else {
            left = mid + 1;
        }
    }
    return ans;
}

int main() {
    int n, target;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    cin >> target;

    cout << ceilElement(arr, n, target);
    return 0;
}
