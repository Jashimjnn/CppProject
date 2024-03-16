#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    ll s,t;
    cin>>s>>t;
    ll cnt=0;
    for(int i=0;i<=100;i++)
    {
        for(int j=0;j<=100;j++)
        {
            for(int k=0;k<=100;k++)
            {
               if((i+j+k)<=s && (i*j*k)<=t)
               {
                cnt++;
               }
            }
        }
    }
    cout<<cnt<<endl;
    return 0;
}