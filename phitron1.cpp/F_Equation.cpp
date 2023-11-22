#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
void display()
{
    ll x,n;
    cin>>x>>n;
    ll ans=0;
    for(int i=2;i<=n;i+=2)
    {
        // if(i%2==0)
        // {
            ans+=pow(x,i);
        //}
    }
    cout<<ans<<endl;
}
int main()
{
    display();
    return 0;
}