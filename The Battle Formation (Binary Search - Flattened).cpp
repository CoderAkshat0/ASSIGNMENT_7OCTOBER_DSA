#include <iostream>
using namespace std;

bool searchSoldier(int matrix[][300], int n, int m, int target) {
    int left = 0, right = n*m - 1;
    while(left <= right) {
        int mid = left + (right - left)/2;
        int val = matrix[mid/m][mid%m];
        if(val == target) return true;
        else if(val < target) left = mid + 1;
        else right = mid - 1;
    }
    return false;
}

int main() {
    int n, m, target;
    cin >> n >> m;
    int matrix[300][300];
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin >> matrix[i][j];
    cin >> target;

    cout << (searchSoldier(matrix, n, m, target) ? "True" : "False");
    return 0;
}
