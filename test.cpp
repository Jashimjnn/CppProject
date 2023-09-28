#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
#define          all(v)              v.begin(), v.end()

int main() 
{
	// count divisors;
     int n;
     cin>>n;
     int count=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    cout<<count<<endl;
}