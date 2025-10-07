#include <iostream>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) cin >> arr[i][j];
    }

    int primary = 0, secondary = 0;
    for(int i = 0; i < n; i++) {
        primary += arr[i][i];
        secondary += arr[i][n - i - 1];
    }

    cout << "Primary Diagonal Sum = " << primary << ", Secondary Diagonal Sum = " << secondary;
    return 0;
}
