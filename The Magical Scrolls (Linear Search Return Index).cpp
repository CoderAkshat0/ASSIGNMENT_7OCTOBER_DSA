#include <iostream>
using namespace std;

int main() {
    int n, m, target;
    cin >> n >> m;
    int matrix[1000][1000];
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin >> matrix[i][j];
    cin >> target;

    int row = -1, col = -1;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(matrix[i][j] == target) {
                row = i;
                col = j;
                break;
            }
        }
        if(row != -1) break;
    }

    cout << "(" << row << "," << col << ")";
    return 0;
}
