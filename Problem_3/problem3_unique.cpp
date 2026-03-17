#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cout << "Enter number of elements: ";
    cin >> N;

    vector<int> arr(N);
    cout << "Enter elements:\n";
    for(int i = 0; i < N; i++) cin >> arr[i];

    sort(arr.begin(), arr.end());

    cout << "Unique elements:\n";
    cout << arr[0] << " ";
    for(int i = 1; i < N; i++) {
        if(arr[i] != arr[i-1]) {
            cout << arr[i] << " ";
        }
    }

    return 0;
}