#include <bits/stdc++.h>
using namespace std;

const int maxN = 30;
vector<int> allPrimes;

void seive()
{
    vector<bool> prime(maxN + 1, true);

    for (int i = 2; i * i <= maxN; i++)
    {
        if (prime[i])
        {
            for (int j = i + i; j <= maxN; j += i)
            {
                prime[j] = false;
            }
        }
    }
    for (int i = 2; i <= maxN; i++)
    {
        if (prime[i])
        {
            allPrimes.push_back(i);
        }
    }
}

int main()
{
    seive();

    int n;
    cin >> n;
    int nn = n;
    int idx = 0;

    cout << n << " = ";
    while (nn > 1 && idx < allPrimes.size())
    {
        while (nn % allPrimes[idx] == 0)
        {
            cout << allPrimes[idx] << " ";
            nn /= allPrimes[idx];
        }
        idx++;
    }
    cout << endl;

    return 0;
}