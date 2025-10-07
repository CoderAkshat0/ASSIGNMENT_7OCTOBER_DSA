#include <iostream>
using namespace std;

int n, m;
int grid[100][100];
bool visited[100][100];

void dfs(int i, int j) {
    if(i < 0 || j < 0 || i >= n || j >= m || grid[i][j] == 0 || visited[i][j]) return;
    visited[i][j] = true;
    dfs(i+1, j);
    dfs(i-1, j);
    dfs(i, j+1);
    dfs(i, j-1);
    dfs(i+1, j+1);
    dfs(i+1, j-1);
    dfs(i-1, j+1);
    dfs(i-1, j-1);
}

int main() {
    cin >> n >> m;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin >> grid[i][j];

    int count = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(grid[i][j] == 1 && !visited[i][j]) {
                dfs(i, j);
                count++;
            }
        }
    }

    cout << count;
    return 0;
}
