#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
        cin>>n;
        if((n-=2)<0)
        {
            cout<<0<<endl;
        }
        else
        {
            cout<<(n/7)+1<<endl;
        }
	}
	return 0;
}
