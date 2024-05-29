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
        ll n,m;
        cin>>n>>m;
        string str1[25];
        string str2 = "vika";
        for(int i=0;i<n;i++)
        {
            cin>>str1[i];
        }
        if(n==1)
        {
            if(str1[0]==str2)
            {
                Y;
                continue;
            }
        }
        if(m<4)
        {
            N;
            continue;
        }
        ll cnt=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(str1[j][i]==str2[cnt])
                {
                    cnt++;
                    break;
                }
            }
        }
        if(cnt>=4)
        {
            Y;
        }
        else
        {
            N;
        }
    }
    return 0;
}