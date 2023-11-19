#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
#define all(v) v.begin(), v.end()
#define min(a, b) a <= b ? a : b
#define max(a, b) a >= b ? a : b
using namespace std;

const int MAXN = 100005;
int spf[MAXN];


/*void sieve() {
    for (int i = 2; i < MAXN; i++) {
        if (spf[i] == 0) {
            spf[i] = i;
            for (int j = 2 * i; j < MAXN; j += i) {
                if (spf[j] == 0) {
                    spf[j] = i;
                }
            }
        }
    }
}*/

int Prime(int n) {
    int count = 0;
    while (n > 1) {
        count++;
        int smallestFactor = spf[n];
        while (n % smallestFactor == 0) {
            n /= smallestFactor;
        }
    }
    return count;
}

int main() {
    //sieve();

    int T;
    cin >> T;
    for (int t = 1; t <= T; t++) {
        int N, K;
        cin >> N >> K;
        vector<int> A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        int left = 0, maxLen = 0, currentAlmostPrimes = 0;
        map<int, int> freq;
        
        for (int right = 0; right < N; right++) {
            int factors = Prime(A[right]);
            
            if (factors > 0) {
                if (freq[factors] == 0) {
                    currentAlmostPrimes++;
                }
                freq[factors]++;
            }
            
            while (currentAlmostPrimes > K) {
                int leftFactors = Prime(A[left]);
                if (leftFactors > 0) {
                    freq[leftFactors]--;
                    if (freq[leftFactors] == 0) {
                        currentAlmostPrimes--;
                    }
                }
                left++;
            }
            
            maxLen = max(maxLen, right - left);
        }
        maxLen-=2;
        if (maxLen == 0) {
            cout << "Case " << t << ": 0" << endl;
        } else {
            cout << "Case " << t << ": " << maxLen+2 << endl;
        }
    }
    
    return 0;
}
