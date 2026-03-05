// https://codeforces.com/blog/entry/143038

// Use Binary Search on Answer when you need to find the minimum/maximum
// value that satisfies a condition and the condition is monotonic.

#include <bits/stdc++.h>
using namespace std;

int main() {

    // Example: Minimum time to produce n items
    long long m, n;
    cin >> m >> n;

    vector<long long> arr(m);
    for (int i = 0; i < m; i++) {
        cin >> arr[i];
    }

    long long low = 1, high = 1e18;
    long long ans = -1;

    while (low <= high) {
        long long mid = low + (high - low) / 2;

        // ----- check logic এখানে -----
        long long total = 0;
        for (int i = 0; i < m; i++) {
            total += mid / arr[i];

            if (total >= n) break; // overflow prevent + early stop
        }
        // -----------------------------

        if (total >= n) {   // valid
            ans = mid;
            high = mid - 1;  // minimum চাই
        } else {
            low = mid + 1;
        }
    }

    cout << ans << endl;
}


// // If we want maximum
// if (valid) {
//     ans = mid;
//     low = mid + 1;   // maximum চাইলে low বাড়াবে
// } else {
//     high = mid - 1;
// }