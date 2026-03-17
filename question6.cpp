#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    priority_queue<int> maxHeap; // max heap by default

    for (int i = 0; i < N; i++) {
        int x;
        cin >> x;
        maxHeap.push(x);
    }

    for (int i = 0; i < K; i++) {
        cout << maxHeap.top();
        maxHeap.pop();
        if (i + 1 < K) cout << " ";
    }
    cout << endl;

    return 0;
}
