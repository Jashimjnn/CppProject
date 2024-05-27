#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    ll n,e;
    cin>>n>>e;
    ll mat[n][n];
    while(e--)
    {
        ll a,b;
        cin>>a>>b;
        mat[a][b] = 1;
        mat[b][a] = 1;
    }
    if(mat[3][1]==1)
    {
        cout<<"Connected"<<endl;
    }
    else
    {
        cout<<"Not connected"<<endl;
    }
    return 0;
}