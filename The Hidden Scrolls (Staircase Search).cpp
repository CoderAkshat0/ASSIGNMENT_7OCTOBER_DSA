#include <iostream>
using namespace std;

bool searchScroll(int matrix[][1000], int n, int m, int target) {
    int row = 0, col = m - 1;
    while(row < n && col >= 0) {
        if(matrix[row][col] == target) return true;
        else if(matrix[row][col] > target) col--;
        else row++;
    }
    return false;
}

int main() {
    int n, m, target;
    cin >> n >> m;
    int matrix[1000][1000];
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin >> matrix[i][j];
    cin >> target;

    cout << (searchScroll(matrix, n, m, target) ? "True" : "False");
    return 0;
}
