#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
ll fibo(ll n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    ll ans = fibo(n - 1) + fibo(n - 2);
    return ans;
}
int main()
{
    ll n;
    cin>>n;
    cout<<fibo(n)<<endl;
    return 0;
}