#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long int N;
    cin >> N;

    vector<long long int> arr(N);
    vector<int> zeroIdx;
    for (long long int i = 0; i < N; i++)
    {
        cin >> arr[i];
        if (arr[i] == 0)
        {
            zeroIdx.push_back(i);
        }
    }

    vector<long long int> prefix(N);
    prefix[0] = arr[0];
    for (long long int i = 1; i < N; i++)
    {
        if (arr[i] == 0)
        {
            prefix[i] = prefix[i - 1];
        }
        else
        {
            prefix[i] = prefix[i - 1] * arr[i];
        }
    }

    long long int Q;
    cin >> Q;

    while (Q--)
    {
        long long int L, R;
        cin >> L >> R;
        L--;
        R--;

        long long result;
        bool Zero = false;
        for (int index : zeroIdx)
        {
            if (index >= L && index <= R)
            {
                Zero = true;
                break;
            }
        }

        if (Zero)
        {
            cout << 0 << "\n";
        }
        else
        {
            if (L == 0)
            {
                cout << prefix[R] << "\n";
            }
            else
            {
                if (prefix[L - 1] != 0)
                {
                    result = prefix[R] / prefix[L - 1];
                    cout << result << "\n";
                }
            }
        }
    }

    return 0;
}