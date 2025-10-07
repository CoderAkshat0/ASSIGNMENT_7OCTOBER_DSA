#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    int total = n * (n + 1) / 2;
    int sum = 0;
    for(int i = 0; i < n; i++) sum += arr[i];
    cout << total - sum;
    return 0;
}
