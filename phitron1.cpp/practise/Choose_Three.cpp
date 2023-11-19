#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, s;
        cin >> n >> s;
        int ar[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        bool flag = false;
        
        for (int i = 0; i < n; i++)
        {
            int sum = 0;
            sum+=ar[i];
            for (int j = i+1; j < n; j++)
            {
               sum+=ar[j];
               for(int k=j+1;k<n;k++)
               {
                 sum+=ar[k];
                 if(sum==s){
                    flag=true;
                    break;
                 }
                 else sum-=ar[k];
                //  cout << sum << ' ' << k << ' ';
               }
               sum-=ar[j];
            }
        }
        if (flag == true)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}