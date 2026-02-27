#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> divs[n + 1];

    for (int i = 2; i <= n; i++)
    {
        if (divs[i].size() > 0) continue; // For prime divisors

        for (int j = i; j <= n; j += i)
        {
            divs[j].push_back(i);
        }
    }

    for (int i = 2; i <= n; i++)
    {
        cout << i << " -> ";
        for (auto val : divs[i])
        {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}