#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    int n;
    cin>>n;
    // int ar[n];
    // for(int i=0;i<n;i++)
    // {
    //     cin>>ar[i];
    // }
    // int cnt=0;
    // for(int i=0;i<n-1;i++)
    // {
    //     for(int j=i+1;j<n;j++)
    //     {
    //         if(ar[j]>ar[i])
    //         {
    //             int tmp=ar[j];
    //             ar[j]=ar[i];
    //             ar[i]=tmp;
    //             cnt++;
    //         }
    //     }
    // }
    // for(int i=0;i<n;i++)
    // {
    //     cout<<ar[i]<<" ";
    // }
    //cout<<cnt<<endl;
    vector<string>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}