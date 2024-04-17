#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
string check_element(vector<int> &arr)
{
    if (arr[0] != arr[arr.size() - 1])
    {
        return "NO";
    }
    else
    {
        int x = arr[0];
        for (int i = 1; i < arr.size() - 1; ++i)
        {
            if (arr[i] < x)
            {
                return "NO";
            }
        }
        return "YES";
    }
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
        }
        cout << check_element(arr) << endl;
    }
    return 0;
}
