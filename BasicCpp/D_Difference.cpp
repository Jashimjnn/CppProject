#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int ans = (a*b)-(c*d);
    cout<<"Difference = "<<ans<<endl;
    return 0;
}