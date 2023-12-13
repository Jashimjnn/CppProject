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
    cout<<n/100+n/20%5+n/10%2+n/5%2+n%5<<endl;
    return 0;
}