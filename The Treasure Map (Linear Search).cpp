#include <iostream>
using namespace std;

int main() {
    int n, m, target;
    cin >> n >> m;
    int matrix[500][500];
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin >> matrix[i][j];
    cin >> target;

    bool found = false;
    for(int i = 0; i < n && !found; i++) {
        for(int j = 0; j < m; j++) {
            if(matrix[i][j] == target) {
                found = true;
                break;
            }
        }
    }

    cout << (found ? "Yes" : "No");
    return 0;
}
