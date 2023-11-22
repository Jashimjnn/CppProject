#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        int sz = str.size();
        if(sz>10)
        {
            cout<<str[0]<<(sz-2)<<str[sz-1]<<endl;
        }
        else
        {
            cout<<str<<endl;
        }
    }
    return 0;
}