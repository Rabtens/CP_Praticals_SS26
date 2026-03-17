#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, target;
    cout << "Enter N and target sum: ";
    cin >> N >> target;

    vector<int> arr(N);
    cout << "Enter elements:\n";
    for(int i = 0; i < N; i++) cin >> arr[i];

    int count = 0;
    int total = 1 << N;

    for(int mask = 0; mask < total; mask++) {
        int sum = 0;
        for(int i = 0; i < N; i++) {
            if(mask & (1 << i))
                sum += arr[i];
        }
        if(sum == target) count++;
    }

    cout << "Subsets with target sum: " << count;

    return 0;
}