#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
#define all(v) v.begin(), v.end()
#define min(a, b) a <= b ? a : b
#define max(a, b) a >= b ? a : b
void display()
{
     int n,m;
        cin>>n>>m;
        string str1,str2;
        cin>>str1>>str2;
        int count=0;
        for(int i=0;i<7;i++)
        {
            if(str1.find(str2)!= -1)
            {
                count++;
                cout<<i<<endl;
                break;
            }
            str1+=str1;
        }
        if(!count)
        {
            cout<<"-1"<<endl;
        }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       display();
 
    }
}