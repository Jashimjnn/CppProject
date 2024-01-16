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
    int sp=n-1;
    int k=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=sp;j++)
        {
            cout<<" ";
        }
        for(int j=k;j>=1;j--)
        {
         cout<<j;
        }
        cout<<endl;
        k++;
        sp--;
    }
    return 0;
}