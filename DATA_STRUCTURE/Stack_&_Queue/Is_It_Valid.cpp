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
    stack<char>st;
    while(t--)
    {
        string str;
        cin>>str;
        for(char c : str)
        {
            st.push(c);
        }
        int cnt0=0;
        int cnt1=0;
        while(!st.empty())
        {
            char x = st.top();
            st.pop();
            if(x=='0')
            {
                cnt0++;
            }
            else
            {
                cnt1++;
            }
        }
        if(cnt1-cnt0==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}