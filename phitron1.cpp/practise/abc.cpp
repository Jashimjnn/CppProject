#include <iostream>
#include <vector>

using namespace std;

int maxAlternatingSum(int n, vector<int>& a) {
    long long oddSum = 0, evenSum = 0;

    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0) {
            evenSum = max(evenSum + a[i], oddSum);
        } else {
            oddSum = max(oddSum + a[i], evenSum);
        }
    }

    return max(oddSum, evenSum);
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        cout << maxAlternatingSum(n, a) << endl;
    }

    return 0;
}
