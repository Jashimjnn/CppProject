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
    int p,q;
    cin>>p;
    int ar[200];
    for(int i=0;i<p;i++)
    {
        cin>>ar[i];
    }
    int count=0;
    cin>>q;
    for(int i=p;i<(p+q);i++)
    {
        cin>>ar[i];
    }
    sort(ar,ar+(p+q));
    for(int i=0;i<(p+q);i++)
    {
        if(ar[i]!=ar[i+1])
        {
            count++;
        }
    }
    if(count==t)
    {
        cout<<"I become the guy."<<endl;
    }
    else
    {
        cout<<"Oh, my keyboard!"<<endl;
    }
    return 0;
}