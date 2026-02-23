#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<bool> prime(n + 1, true);

    for (int i = 2; i * i <= n; i++)
    // i * i <= n  is equivalent to  i <= sqrt(n)   (for i ≥ 0)
    {
        if (prime[i])
        {
            for (int j = i + i; j <= n; j += i)
            {
                prime[j] = false;
            }
        }
    }

    for (int i = 2; i <= n; i++)
    {
        if (prime[i])
        {
            cout << i << " ";
        }
    }
    cout << endl;
}

// Time Complexity -> O(N log log N)