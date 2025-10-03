#include <iostream>
#include <vector>
using namespace std;

void solve(vector<int> &v, int k, int ind) {
    if (v.size() == 1) {
        cout << v[0] << endl;
        return;
    }
    ind = (ind + k) % v.size();
    v.erase(v.begin() + ind);
    solve(v, k, ind);
}

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> v;
    for (int i = 1; i <= n; i++) {
        v.push_back(i);
    }

    k--; // zero-based index
    solve(v, k, 0);

    return 0;
}
