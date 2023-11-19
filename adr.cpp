#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        unordered_map<int, int> frequency;

        for (int i = 1; i < n; i++) {
            frequency[a[i] - a[i - 1]]++;
        }

        bool possible = false;

        for (auto& entry : frequency) {
            if (entry.second == n - 1) {
                possible = true;
                break;
            }
        }

        if (possible) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}
