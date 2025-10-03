#include <iostream>
using namespace std;

int solve(int N, int K) {
    if (N == 1) return 0; // base case
    int mid = 1 << (N - 2); // half of 2^(N-1)
    if (K <= mid)
        return solve(N - 1, K);
    else
        return !solve(N - 1, K - mid);
}

int main() {
    int N, K;
    cout << "Enter N and K: ";
    cin >> N >> K;

    if (K < 1 || K > (1 << (N - 1))) {
        cout << "Invalid input! K must be between 1 and " << (1 << (N - 1)) << endl;
        return 1;
    }

    cout << "Result: " << solve(N, K) << endl;
    return 0;
}
