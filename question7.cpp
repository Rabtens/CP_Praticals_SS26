#include <iostream>
#include <queue>
using namespace std;

int main() {
    int N;
    cin >> N;

    // Max heap for lower half, min heap for upper half
    priority_queue<int> lowerMax;                            // max heap
    priority_queue<int, vector<int>, greater<int>> upperMin; // min heap

    for (int i = 0; i < N; i++) {
        int x;
        cin >> x;

        // Insert into appropriate heap
        if (lowerMax.empty() || x <= lowerMax.top()) {
            lowerMax.push(x);
        } else {
            upperMin.push(x);
        }

        // Balance heaps: lowerMax can have at most 1 extra element
        if (lowerMax.size() > upperMin.size() + 1) {
            upperMin.push(lowerMax.top());
            lowerMax.pop();
        } else if (upperMin.size() > lowerMax.size()) {
            lowerMax.push(upperMin.top());
            upperMin.pop();
        }

        // Print running median
        if (lowerMax.size() == upperMin.size()) {
            // Even number of elements: average of two middles
            cout << fixed;
            cout.precision(1);
            cout << (lowerMax.top() + upperMin.top()) / 2.0 << "\n";
        } else {
            // Odd: median is top of lowerMax
            cout << fixed;
            cout.precision(1);
            cout << (double)lowerMax.top() << "\n";
        }
    }

    return 0;
}
