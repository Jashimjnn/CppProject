#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        vector<ll> v1, v2;
        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] == 'b')
            {
                str[i] = ' ';
                if (v1.size() != 0)
                {
                    str[v1.back()] = ' ';
                    v1.pop_back();
                }
                continue;
            }
            if (str[i] == 'B')
            {
                str[i] = ' ';
                if (v2.size() != 0)
                {
                    str[v2.back()] = ' ';
                    v2.pop_back();
                }
                continue;
            }
            if (str[i] >= 'a' && str[i] <= 'z')
            {
                v1.push_back(i);
            }
            else
            {
                v2.push_back(i);
            }
        }
        string tmp="";
        for(int i=0;i<str.size();i++)
        {
            if(str[i]!=' ')
            {
                tmp+=str[i];
            }
        }
        cout<<tmp<<endl;
    }
    return 0;
}
