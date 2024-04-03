#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    ll x,y;
    cin>>x>>y;
    if((x+y)>=2000)
    {
        Y;
    }
    else
    {
        N;
    }
    return 0;
}