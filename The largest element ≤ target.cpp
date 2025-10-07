#include <iostream>
using namespace std;

int floorElement(int arr[], int n, int target) {
    int left = 0, right = n - 1;
    int ans = -1;
    while(left <= right) {
        int mid = left + (right - left) / 2;
        if(arr[mid] <= target) {
            ans = arr[mid];
            left = mid + 1; // search right half for larger floor
        } else {
            right = mid - 1;
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

    cout << floorElement(arr, n, target);
    return 0;
}
