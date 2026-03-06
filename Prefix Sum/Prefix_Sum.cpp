#include <bits/stdc++.h>
using namespace std;

void prefix_sum(vector<int> &v)
{
    vector<int> pre_sum(v.size());
    pre_sum[0] = v[0];

    for (int i = 1; i < v.size(); i++)
    {
        pre_sum[i] = v[i] + pre_sum[i - 1];
    }

    for (int i = 0; i < pre_sum.size(); i++)
    {
        cout << pre_sum[i] << endl;
    }
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

    prefix_sum(v);

    return 0;
}