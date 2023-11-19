#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        char ch = '1';
        int count = 4;
        for (auto s : str)
        {
            if (s == '0')
            {
                s += 10;
            }
            count += abs(s - ch);
            ch = s;
        }
        cout << count << endl;
    }
}
