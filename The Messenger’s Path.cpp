#include <iostream>
using namespace std;

bool dfs(int i, int j, int n, int m, int arr[100][100], bool visited[100][100]) {
    if(i < 0 || j < 0 || i >= n || j >= m || arr[i][j] == 1 || visited[i][j]) return false;
    if(i == n-1 && j == m-1) return true;
    visited[i][j] = true;
    return dfs(i+1, j, n, m, arr, visited) || dfs(i-1, j, n, m, arr, visited) ||
           dfs(i, j+1, n, m, arr, visited) || dfs(i, j-1, n, m, arr, visited);
}

int main() {
    int n, m;
    cin >> n >> m;
    int arr[100][100];
    bool visited[100][100] = {false};
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin >> arr[i][j];

    cout << (dfs(0, 0, n, m, arr, visited) ? "true" : "false");
    return 0;
}
