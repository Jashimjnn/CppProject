#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    //vector<int>v;
    //vector<int>v(5);
    //vector<int>v(5,10);
    //vector<int>v2(5,100);
    //vector<int>v(v2);
    // int ar[6]={1,2,3,4,5,6};
    // vector<int>v(ar,ar+6);
    vector<int>v={2,10,3,4,5};
    cout<<v.size()<<endl;
    for(int  i=0;i<5;i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}