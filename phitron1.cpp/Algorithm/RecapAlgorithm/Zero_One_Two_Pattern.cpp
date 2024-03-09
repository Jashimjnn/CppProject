#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[3] = {1, 2, 0};
    int in = 0;

    for (int i = n - 1; i > 0; i--)
    {
        for (int k = 0; k < n - 1 - i; k++)
        {
            cout << " ";
        }
        cout << arr[in];
        for (int j = 0; j < 2 * i - 1; j++)
        {
            cout << " ";
        }
        cout << arr[in] << "\n";
        in++;

        if (in > 2)
            in = 0;
    }

    for (int i = 0; i < n - 1; i++)
    {
        cout << " ";
    }
    cout << arr[in] << "\n";
    in++;
    if (in > 2)
        in = 0;

    for (int i = 1; i < n; i++)
    {
        for (int k = 0; k < n - 1 - i; k++)
        {
            cout << " ";
        }
        cout << arr[in];
        for (int j = 0; j < 2 * i - 1; j++)
        {
            cout << " ";
        }
        cout << arr[in] << "\n";
        in++;

        if (in > 2)
            in = 0;
    }

    return 0;
}