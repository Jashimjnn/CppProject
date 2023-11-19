#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> candies(n);
        for (int i = 0; i < n; i++) {
            cin >> candies[i];
        }

        int sum = 0;
        int xor_result = 0;
        for (int i = 0; i < n; i++) {
            sum += candies[i];
            xor_result ^= candies[i];
        }

        if (sum % n != 0 || xor_result != 0) {
            cout << "No" << endl;
        } else {
            cout << "Yes" << endl;
        }
    }
    return 0;
}
