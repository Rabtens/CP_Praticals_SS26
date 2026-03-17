#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cout << "Enter number of elements: ";
    cin >> N;

    vector<int> arr(N);
    cout << "Enter elements:\n";
    for(int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    cout << "Reversed array:\n";
    for(int i = N-1; i >= 0; i--) {
        cout << arr[i] << " ";
    }

    return 0;
}