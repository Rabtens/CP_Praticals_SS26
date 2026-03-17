#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> arr(N);

    for(int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    int sum = 0;
    int maxVal = arr[0];
    int minVal = arr[0];

    for(int i = 0; i < N; i++) {
        sum += arr[i];

        if(arr[i] > maxVal)
            maxVal = arr[i];

        if(arr[i] < minVal)
            minVal = arr[i];
    }

    cout << "Maximum: " << maxVal << endl;
    cout << "Minimum: " << minVal << endl;
    cout << "Sum: " << sum << endl;

    return 0;
}