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
    for(int i=0;i<n;i++)
    {
        if(i&2)
        {
            cout<<'b';
        }
        else
        {
            cout<<'a';
        }
    }
    return 0;
}