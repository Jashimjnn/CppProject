#include<bits/stdc++.h>
using namespace std;
int *fun()
{
    int *a = new int[5];
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
    }
    return a;
}
int main()
{
    // int n;
    // cin>>n;
    // int *a = new int[n];
    // for(int i=0;i<n;i++)
    // {
    //     cin>>a[i];
    // }
    // for(int i=0;i<n;i++)
    // {
    //     cout<<a[i]<<endl;
    // }
    int *a = fun();
    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}