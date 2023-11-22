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
        int n;
        cin>>n;
        int ar[n];
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        if(n%2!=0)
        {
             cout<<-1<<endl;
             continue;
        }
        int e=0,o=0;
        for(int i=0;i<n;i++)
        {
            if(ar[i]%2==0)
            {
                e++;
            }
            else
            {
                o++;
            }
        }
        if(e==o)
        {
            cout<<0<<endl;
        }
        else if((e==n || o==n))
        {
            cout<<(n/2)<<endl;
        }
        else
        {
            cout<<max(e,o)-(n/2)<<endl;
        }
    }
    return 0;
}