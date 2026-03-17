#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> dq;
    int q;
    cout << "Enter number of operations: ";
    cin >> q;

    while(q--) {
        string op;
        cin >> op;

        if(op == "push_front") {
            int x; cin >> x;
            dq.push_front(x);
        }
        else if(op == "push_back") {
            int x; cin >> x;
            dq.push_back(x);
        }
        else if(op == "pop_front" && !dq.empty()) {
            dq.pop_front();
        }
        else if(op == "pop_back" && !dq.empty()) {
            dq.pop_back();
        }

        for(int x : dq) cout << x << " ";
        cout << endl;
    }

    return 0;
}

