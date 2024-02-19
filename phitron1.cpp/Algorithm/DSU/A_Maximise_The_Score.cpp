#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(2 * n);
        for (int i = 0; i < 2 * n; ++i) {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        int score = 0;
        for (int i = 0; i < n; ++i) {
            score += min(a[i], a[2 * n - i - 1]);
        }

        cout << score << endl;
    }

    return 0;
}
