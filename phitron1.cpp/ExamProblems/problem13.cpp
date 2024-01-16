#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int sum = (a+b);
        int ans = (c*a)/sum;
        int x = c-ans;
        cout<<x<<endl;
    }
    return 0;
}