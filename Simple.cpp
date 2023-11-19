#include <bits/stdc++.h>
#include <vector>
typedef long long ll;
using namespace std;

int main()
{
    int T;
    cin >> T;

    for (int t=1;t<=T;t++)
    {
        int N, A, B;
        cin >> N >> A >> B;

        vector<int> s(N);
        for (int i = 0; i < N; i++)
        {
            cin >> s[i];
        }
        int count = 0;
        //sort(s.begin(),s.end());
        for (int i = 0; i < N; i++)
        {
            //for (int j = i + 1; j < N; j++)
            //{
                int sum = s[i] + s[i+1];
                if (sum >= A && sum <= B)
                {
                    count++;
                }
           // }
        }
        // long long result = mew(s, A, B);

        cout << "Case " << t << ": " << count << endl;
    }

    return 0;
}