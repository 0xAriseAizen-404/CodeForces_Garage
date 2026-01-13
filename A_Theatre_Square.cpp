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
    int n, m, a;
    cin >> n >> m >> a;
    int ans = 0;
    ans = (m / a) + ((m%a!=0) ? 1 : 0);
    ans *= ((n) / a) + ((n%a!=0) ? 1 : 0);
    cout << ans;
}