#include <iostream>
using namespace std;

int upperBound(int arr[], int n, int target) {
    int left = 0, right = n - 1;
    int ans = n; // default if all elements ≤ target
    while(left <= right) {
        int mid = left + (right - left) / 2;
        if(arr[mid] > target) {
            ans = mid;
            right = mid - 1;
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

    cout << upperBound(arr, n, target);
    return 0;
}
