#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    string str, str1;
    while (cin >> str >> str1)
    {
        string tmp="";
        ll i = 0, j = 0;
        while (i < str.size() && j < str1.size())
        {
            if (str[i] == str1[j])
            {
                tmp+=str[i];
                i++;
                j++;
            }
            else
            {
                i++;
            }
        }
        if (tmp.size() == str1.size())
        {
            cout << "Possible" << endl;
        }
        else
        {
            cout << "Impossible" << endl;
        }
    }
    return 0;
}