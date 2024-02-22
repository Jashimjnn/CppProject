#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool isSquare(const vector<string> &grid, int size)
{
    for (int i = 0; i < size; ++i)
    {
        for (int j = 0; j < size; ++j)
        {
            if (grid[i][j] != '1' || grid[i][size - 1 - j] != '1' || grid[size - 1 - i][j] != '1' || grid[size - 1 - i][size - 1 - j] != '1')
            {
                return false;
            }
        }
    }
    return true;
}
// bool isTriangle(const vector<string> &grid, int size)
// {
//     int midRow = size / 2;
//     int midCol = size / 2;


//     if (grid[midRow][midCol] != '1')
//         return false;


//     for (int i = 0; i < size; ++i)
//     {
//         for (int j = 0; j < size; ++j)
//         {
//             if (grid[i][j] == '1')
//             {
//                 if (i < midRow || j < midCol || j > size - 1 - i)
//                     return false;
//             }
//         }
//     }
//     return true;
// }

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<string> grid(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> grid[i];
        }

        if (isSquare(grid, n))
        {
            cout << "SQUARE" << endl;
        }
        else
        {
            cout << "TRIANGLE" << endl;
        }
    }

    return 0;
}
