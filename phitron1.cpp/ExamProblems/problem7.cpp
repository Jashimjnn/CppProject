#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    int n;
    cin>>n;
    if(n>0)
    {
        for(int i=1;i<=n;i++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    else
    {
        for(int i=n;i<=0;i++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}