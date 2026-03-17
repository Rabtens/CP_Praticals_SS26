#include <iostream>
#include <deque>
using namespace std;

void printDeque(const deque<int>& dq) {
    for (int i = 0; i < (int)dq.size(); i++) {
        cout << dq[i];
        if (i + 1 < (int)dq.size()) cout << " ";
    }
    cout << endl;
}

int main() {
    int Q;
    cin >> Q;

    deque<int> line;

    while (Q--) {
        string op;
        cin >> op;

        if (op == "push_front") {
            int x;
            cin >> x;
            line.push_front(x);
        } else if (op == "push_back") {
            int x;
            cin >> x;
            line.push_back(x);
        } else if (op == "pop_front") {
            if (!line.empty()) line.pop_front();
        } else if (op == "pop_back") {
            if (!line.empty()) line.pop_back();
        }

        printDeque(line);
    }

    return 0;
}
