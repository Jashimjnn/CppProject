#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    int n,m;
    cin>>n>>m;
    int x = n%10;
    int y = m%10;
    int ans = x+y;
    cout<<ans<<endl;
    return 0;
}