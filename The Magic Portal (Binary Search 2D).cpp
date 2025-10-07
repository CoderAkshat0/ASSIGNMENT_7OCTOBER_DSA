#include <iostream>
using namespace std;

string activatePortal(int matrix[][500], int n, int m, int target) {
    int row = 0, col = m - 1;
    while(row < n && col >= 0) {
        if(matrix[row][col] == target) return "Activated";
        else if(matrix[row][col] > target) col--;
        else row++;
    }
    return "Failed";
}

int main() {
    int n, m, target;
    cin >> n >> m;
    int matrix[500][500];
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin >> matrix[i][j];
    cin >> target;

    cout << activatePortal(matrix, n, m, target);
    return 0;
}
