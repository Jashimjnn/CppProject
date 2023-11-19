#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n, m;
    cin >> n >> m;
    //n%=m;
    ll fact = 1;
     for (int i = 1; i <= n; i++)
     {
         fact *= i;
     }
    //ll ans = pow(n,m);

   // cout << (fact / (m)) << endl;
    cout << fact/m << endl;


}