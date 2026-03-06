#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> a = {1, 3, 3, 5, 7};

    int idx = lower_bound(a.begin(), a.end(), 3) - a.begin();
    // int idx = upper_bound(a.begin(), a.end(), 3) - a.begin();
    cout << idx;

    return 0;
}


// lower_bound → first index where a[i] ≥ target

// upper_bound → first index where a[i] > target