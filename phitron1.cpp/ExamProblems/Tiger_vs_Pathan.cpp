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
        string str;
        cin>>str;
        int cntT=0;
        int cntP=0;
        for(int i=0;i<n;i++)
        {
            if(str[i]=='T')
            {
                cntT++;
            }
            else
            {
                cntP++;
            }
        }
        if(cntT>cntP)
        {
            cout<<"Tiger"<<endl;
        }
        else if(cntT<cntP)
        {
            cout<<"Pathaan"<<endl;
        }
        else
        {
            cout<<"Draw"<<endl;
        }
    }
    return 0;
}