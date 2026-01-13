#include <bits/stdc++.h>
using namespace std;

#define int long long          // safer for big numbers
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define pb push_back
#define sz(x) (int)x.size()
#define fastio ios::sync_with_stdio(0); cin.tie(0);

int32_t main() {
    fastio;
    int n; cin >> n;
    int sum_x = 0, sum_y = 0, sum_z = 0;
    while(n--){
        int x, y, z; cin >> x >> y >> z;
        sum_x += x; sum_y += y; sum_z += z;
    }
    if (sum_x == 0 && sum_y == 0 && sum_z == 0) cout << "YES";
    else cout << "NO";
}