#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        unordered_set<string> distinctStrings;

        for (int i = 0; i < n; ++i)
        {
            string newString = s.substr(i) + s.substr(0, i);
            distinctStrings.insert(newString);
        }

        cout << distinctStrings.size() << endl;
    }
    return 0;
}