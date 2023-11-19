#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    string str;

    while (getline(cin,str))
    {
        string tem = "";
        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] != ' ')
            {
                tem += str[i];
            }
        }
        sort(tem.begin(), tem.end());
        cout << tem << endl;
    }

    return 0;
}
