#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    ll n,k;
    cin>>n>>k;
    for(int i=0;i<k;i++)
    {
        int x=n%10;
        if(x!=0)
        {
            n-=1;
        }
        else
        {
            n/=10;
        }
    }
    cout<<n<<endl;
    return 0;
}