#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    map<int, int> cnt;
    for (int i = 2; i * i <= n; i++)
    {
        while (n % i == 0)
        {
            cnt[i]++;
            n /= i;
        }
    }

    if (n > 1)
        cnt[n]++;

    for (auto it : cnt)
    {
        cout << it.first << " -> " << it.second << endl;
    }

    return 0;
}

// Time Complexity -> O (sqrt(n))