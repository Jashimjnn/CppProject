#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int index1, index2;
        int max_value = INT_MIN;
        vector<int> water1(n),water2(n);
        for (int i = 0; i < n; i++)
        {
            cin >> water1[i];
            water2[i]=water1[i];
        }
        sort(water2.begin(),water2.end());
        int max_value1 = water2[n-2];
        for (int i = 0; i < n; i++)
        {
            if (max_value < water1[i])
            {
                index1 = i;
                max_value = water1[i];
            }
            if(max_value1==water1[i])
            {
                index2=i;
            }
        }
        if(index1>index2)
        {
            swap(index1,index2);
        }
        cout<<index1<<" "<<index2<<endl;
    }
    return 0;
}