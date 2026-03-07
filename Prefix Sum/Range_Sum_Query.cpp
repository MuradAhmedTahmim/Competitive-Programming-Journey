#include <bits/stdc++.h>
using namespace std;

vector<int> prefix_sum(vector<int> &v)
{
    vector<int> pre_sum(v.size());
    pre_sum[0] = v[0];

    for (int i = 1; i < v.size(); i++)
    {
        pre_sum[i] = v[i] + pre_sum[i - 1];
    }

    return pre_sum;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    vector<int> res;

    res = prefix_sum(v);

    int q;
    cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;

        if (l == 0)
            cout << res[r] << endl;
        else
            cout << res[r] - res[l - 1] << endl;
    }

    return 0;
}
