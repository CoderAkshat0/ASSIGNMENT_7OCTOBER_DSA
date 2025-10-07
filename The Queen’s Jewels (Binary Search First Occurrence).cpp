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

    int rowIndex = -1, colIndex = -1;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(matrix[i][j] == target) {
                rowIndex = i;
                colIndex = j;
                break;
            }
        }
        if(rowIndex != -1) break;
    }

    cout << "(" << rowIndex << "," << colIndex << ")";
    return 0;
}
