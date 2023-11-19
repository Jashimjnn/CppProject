#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T;
    cin >> T;

    for (int t = 1; t <= T; t++) {
        int N;
        cin >> N;

        vector<int> A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        long long total = 0;  // Initialize the total count of non-beautiful subarrays

        int i = 0;
        while (i < N) {
            int j = i;
            while (j + 1 < N && A[j] == A[j + 1]) {
                j++;
            }

            long long beautifulCount = j - i + 1;
            long long nonBeautifulCount = (beautifulCount * (beautifulCount + 1)) / 2;
            total += N - nonBeautifulCount;

            i = j + 1;
        }

        cout << "Case " << t << ": " << total << endl;
    }

    return 0;
}
