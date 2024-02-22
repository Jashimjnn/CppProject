#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 5;
int v[N];
void preCalculate()
{
    for (int i = 1; i <= N; i++)
    {
        long long int sum = 0;
        int tmp = i;
        while (tmp)
        {
            sum += tmp % 10;
            tmp /= 10;
        }
        v[i] = v[i - 1] + sum;
    }
}
int main()
{
    int t;
    cin >> t;
    preCalculate();
    while (t--)
    {
        int n;
        cin >> n;
        cout << v[n] << endl;
    }
    return 0;
}