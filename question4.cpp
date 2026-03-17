#include <iostream>
#include <vector>
#include <deque>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    vector<int> arr(N);
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    deque<int> dq; // stores indices

    for (int i = 0; i < N; i++) {
        // Remove indices outside current window
        while (!dq.empty() && dq.front() < i - K + 1) {
            dq.pop_front();
        }

        // Remove smaller elements from back (they can never be max)
        while (!dq.empty() && arr[dq.back()] < arr[i]) {
            dq.pop_back();
        }

        dq.push_back(i);

        // Print max once first window is formed
        if (i >= K - 1) {
            cout << arr[dq.front()];
            if (i < N - 1) cout << " ";
        }
    }
    cout << endl;

    return 0;
}
