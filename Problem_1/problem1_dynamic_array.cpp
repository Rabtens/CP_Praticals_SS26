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

    int sum = 0, max_val = arr[0], min_val = arr[0];

    for(int i = 0; i < N; i++) {
        sum += arr[i];
        if(arr[i] > max_val) max_val = arr[i];
        if(arr[i] < min_val) min_val = arr[i];
    }

    cout << "Maximum: " << max_val << endl;
    cout << "Minimum: " << min_val << endl;
    cout << "Sum: " << sum << endl;

    return 0;
}

