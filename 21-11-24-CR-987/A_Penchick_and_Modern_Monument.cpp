#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> h(n);
    for (int i = 0; i < n; i++) {
        cin >> h[i];
    }

    int longest = 1; // Maximum length of a streak of equal elements
    int current = 1; // Current streak length

    for (int i = 1; i < n; i++) {
        if (h[i] == h[i - 1]) {
            current++;
        } else {
            longest = max(longest, current);
            current = 1;
        }
    }
    // Update longest for the last streak
    longest = max(longest, current);

    // Calculate the result
    cout << n - longest << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
