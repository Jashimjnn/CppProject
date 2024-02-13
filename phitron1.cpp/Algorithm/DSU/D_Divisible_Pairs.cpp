#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int countBeautifulPairs(vector<int>& a, int x, int y) {
    int n = a.size();
    unordered_map<int, int> freq_x, freq_y;
    int beautiful_pairs = 0;

    for (int i = 0; i < n; ++i) {
        freq_x[a[i] % x]++;
        freq_y[a[i] % y]++;
    }

    for (int i = 0; i < n; ++i) {
        int rem_x = a[i] % x;
        int rem_y = a[i] % y;

        // Beautiful pairs condition check
        beautiful_pairs += freq_x[(x - rem_x) % x] * freq_y[(y - rem_y) % y];
    }

    return beautiful_pairs;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, x, y;
        cin >> n >> x >> y;

        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        cout << countBeautifulPairs(a, x, y) << endl;
    }

    return 0;
}
