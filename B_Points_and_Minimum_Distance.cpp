#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
void display(int t)
{
    int n;
    cin >> n;
    int ar[2 * n + 2];
    int dis=0;
    for (int i = 1; i <= 2 * n; i++)
    {
        cin >> ar[i];
      
    }
     for (int i = 1; i <n-1; i++)
    {
        
      dis+=abs(ar[i+1]-ar[i])+abs(ar[n+1+i]-ar[n+1]);
    }
    cout<<dis<<endl;
    sort(ar, ar + 2 * n + 2);

    int i = 1;
    int j = (n);
    while (i < n)
    {
        cout << ar[i] << " " << ar[j] << endl;
        cout << ar[i + 1] << " " << ar[j + 1] << endl;
        i += 2;
        j += 2;
    }
    if (i == n)
    {
        cout << ar[i] << " " << ar[j] << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        display(t);  
    }
}