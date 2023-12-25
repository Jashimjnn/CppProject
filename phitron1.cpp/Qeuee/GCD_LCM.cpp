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
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    int i=0,j=1;int sum=0;
    int mx = INT_MIN;
    while(j<n){
         int t1=__gcd(ar[i],ar[j]);
         int t2=(ar[i]*ar[j])/t1;
         //cout<<t1<<" "<<t2<<endl;
         //sum+=(t1*t2);
         mx = max(mx,t2);
        i++;j++;
    }
    cout<<mx<<endl;
    return 0;
}