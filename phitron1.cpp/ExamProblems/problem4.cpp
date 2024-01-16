#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    ll n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(i%3==0 && i%7==0)
        {
            cout<<i<<endl;
        }
    }
    return 0;
}