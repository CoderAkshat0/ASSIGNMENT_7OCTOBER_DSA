#include <iostream>
using namespace std;
int main() {
    int r, c;
    cin >> r >> c;
    int arr[r][c];
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) cin >> arr[i][j];
    }

    int maxSum = -1e9, rowIndex = -1;
    for(int i = 0; i < r; i++) {
        int sum = 0;
        for(int j = 0; j < c; j++) sum += arr[i][j];
        if(sum > maxSum) {
            maxSum = sum;
            rowIndex = i;
        }
    }

    cout << "Row " << rowIndex + 1 << " (sum=" << maxSum << ")";
    return 0;
}
