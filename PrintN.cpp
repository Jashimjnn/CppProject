#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int T;
    cin >> T;

    for (int t = 1; t <= T; t++) {
        int N, A, B;
        cin >> N >> A >> B;
        vector<int> P(N);

        for (int i = 0; i < N; i++) {
            cin >> P[i];
        }

        sort(P.begin(), P.end());

        long long count = 0;

        int left = 0, right = N - 1;
        int mid = (left+right)/2;
        while (left < right) {
            if (P[left] + P[right] >= A && P[left] + P[right] <= B) {
                count +=(right - left);
                right--;
            } else if (P[left] + P[right] > mid) {
                left++;
            } else {
                right--;
            }
        }

        cout << "Case " << t << ": " << count << endl;
    }

    return 0;
}
