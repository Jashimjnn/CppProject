#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    int mx=0;
    for(int i=0;i<n;i++)
    {
        mx = max(mx,ar[i]);
    }
    cout<<mx<<endl;
}