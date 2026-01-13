#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    vector<int> lucky = {4, 7, 47, 74, 447, 474, 477, 744, 747, 774};
    string ans = "NO";
    for (int x : lucky) {
        if (n % x == 0) { ans = "YES"; break; }
    }
    cout << ans << '\n';
    return 0;
}