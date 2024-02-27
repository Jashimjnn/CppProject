#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    // int t;
    // cin >> t;

    // while (t--)
    // {
    //     int n;
    //     cin >> n;

    //     vector<int> cells(n);
    //     for (int i = 0; i < n; ++i)
    //     {
    //         cin >> cells[i];
    //     }

    //     int min_operations = 0;
    //     int last_chip_index = -1;

    //     for (int i = 0; i < n; ++i)
    //     {
    //         if (cells[i] == 1)
    //         {
    //             if (last_chip_index != -1)
    //             {
    //                 min_operations += i - last_chip_index - 1;
    //             }
    //             last_chip_index = i;
    //         }
    //     }

    //     cout << min_operations << endl;
    // }
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        int a,b,cnt=0;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            if(v[i]==1)
            {
                a=i;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(v[i]==1)
            {
                b=i;
                break;
            }
        }
        for(int i=b;i<=a;i++)
        {
            if(v[i]==0)
            {
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
