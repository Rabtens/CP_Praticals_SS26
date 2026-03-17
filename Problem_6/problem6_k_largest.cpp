#include <iostream>
#include <queue>
using namespace std;

int main() {
    int N, K;
    cout << "Enter N and K: ";
    cin >> N >> K;

    priority_queue<int> pq;

    cout << "Enter elements:\n";
    for(int i = 0; i < N; i++) {
        int x; cin >> x;
        pq.push(x);
    }

    cout << "K largest elements:\n";
    for(int i = 0; i < K; i++) {
        cout << pq.top() << " ";
        pq.pop();
    }

    return 0;
}