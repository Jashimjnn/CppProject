#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    double x,p;
    cin>>x>>p;
    double  ans = p*(100/(100-x));
    cout<<fixed<<setprecision(2)<<ans<<endl;
    return 0;
}