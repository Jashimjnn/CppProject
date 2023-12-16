#include <iostream>
#include <vector>

using namespace std;

int minOperations(string& s) {
    int n = s.length();
    int lastPos = n - 1;

    for (int i = n - 2; i >= 0; --i) {
        if (s[i] > s[lastPos]) {
            lastPos = i;
        } else if (s[i] < s[lastPos]) {
            // A cyclic shift is needed
            return lastPos;
        }
    }

    // If the lastPos is at the beginning, the string is already sorted
    return (lastPos == 0) ? -1 : lastPos;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int result = minOperations(s);

        if (result == -1) {
            cout << 0 << endl; // Already sorted
        } else {
            cout << result + 1 << endl; // Convert to 1-based indexing
        }
    }

    return 0;
}
