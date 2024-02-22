#include <iostream>
#include <vector>
#include <set>

using namespace std;

int countGroups(const vector<int> &numbers)
{
    set<int> uniqueNumbers(numbers.begin(), numbers.end());
    int groups = uniqueNumbers.size();

    for (auto it = uniqueNumbers.begin(); it != prev(uniqueNumbers.end()); ++it)
    {
        auto nextIt = next(it);
        int num1 = *it;
        int num2 = *nextIt;

        // Check if any pair has matching bit values from 1 to 31
        if ((num1 ^ num2) <= ((1 << 31) - 1))
        {
            groups = 1; // If any pair has matching bits, only one group is needed
            break;
        }
    }

    return groups;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> numbers(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> numbers[i];
        }

        cout << countGroups(numbers) << endl;
    }

    return 0;
}
