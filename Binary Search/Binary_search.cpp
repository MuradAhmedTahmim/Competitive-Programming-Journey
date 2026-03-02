#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> a(n);
    
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int key;
    cin >> key;

    int low = 0, high = n - 1;
    bool flag = false;
    int ind = 0;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        // int mid = low + (high - low) / 2; // It used to avoid integer overflow — it is safer than(low + high) / 2.

        if (key == a[mid])
        {
            flag = true;
            ind = mid;
            break;
        }
        else if (key < a[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    if (flag)
    {
        cout << "Value Found at Index " << ind << endl;
    }
    else
    {
        cout << "Value not found" << endl;
    }

    return 0;
}