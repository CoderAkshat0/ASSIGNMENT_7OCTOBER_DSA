#include <iostream>
#include <unordered_map>
using namespace std;
int main() {
    int n, target;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    cin >> target;

    unordered_map<int, int> mp;
    for(int i = 0; i < n; i++) {
        int need = target - arr[i];
        if(mp.find(need) != mp.end()) {
            cout << "(" << mp[need] + 1 << "," << i + 1 << ")";
            return 0;
        }
        mp[arr[i]] = i;
    }
    cout << "No pair found";
    return 0;
}
