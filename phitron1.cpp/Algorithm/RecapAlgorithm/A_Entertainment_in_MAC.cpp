#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        string str;
        cin>>str;
        set<string>st;
        st.insert(str);
        string str1 = str;
        reverse(str1.begin(),str1.end());
        string str2 = str1+str;
        st.insert(str2);
        for(auto s:st)
        {
            cout<<s;
            break;
        }
        cout<<endl;
    }
    return 0;
}
