#include <iostream>
using namespace std;

int hanoi(int n, char source, char dest, char helper) {
    if(n == 0) return 0;
    int moves = 0;
    moves += hanoi(n-1, source, helper, dest);
    cout << "Move disk " << n << " from " << source << " to " << dest << endl;
    moves++;
    moves += hanoi(n-1, helper, dest, source);
    return moves;
}

int main() {
    int n;
    cin >> n;
    int totalMoves = hanoi(n, 'A', 'C', 'B');
    cout << "Total moves: " << totalMoves;
    return 0;
}
