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
        ll n;
        cin >> n;
        string str;
        cin >> str;
        set<char>st;
        for(int i=0;i<n;i++)
        {
            st.insert(str[i]);
        }
        cout<<(n+st.size())<<endl;
    }
    return 0;
}