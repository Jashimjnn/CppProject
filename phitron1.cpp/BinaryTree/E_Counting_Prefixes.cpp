#include <iostream>
#include <vector>
#include <algorithm>

const int MOD = 998244353;

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> p(n);
        for (int i = 0; i < n; ++i) {
            cin >> p[i];
        }

        vector<int> a(n);
        a[0] = p[0];
        for (int i = 1; i < n; ++i) {
            a[i] = p[i] - p[i - 1];
        }

        vector<int> count(n + 1, 0);
        count[0] = 1;

        for (int i = 0; i < n; ++i) {
            int val = 0;
            for (int j = 1; j <= n; ++j) {
                val = (val + count[j]) % MOD;
                count[j] = val;
            }
        }

        long long result = 0;
        for (int i = 0; i < n; ++i) {
            if (a[i] >= 0) {
                result = (result + count[a[i]]) % MOD;
            }
        }

        cout << result << endl;
    }

    return 0;
}
