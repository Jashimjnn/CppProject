#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool canFormCompleteBinaryTree(vector<int> &a)
{
    int n = a.size();
    sort(a.begin(), a.end());

    for (int i = 1; i <= n; ++i)
    {
        if (a[i] - a[i - 1] > 1)
        {
            return true;
        }
    }

    return false;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        if (canFormCompleteBinaryTree(a))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
