#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    ll a,b,c;
    cin>>a>>b>>c;
    c+=0.5;
    cout<<((c/a)*b)<<endl;
    return 0;
}