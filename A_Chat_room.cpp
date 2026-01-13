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
    string mssg; cin >> mssg;
    string hello_mssg = "hello";
    int x = 0;
    for (int i=0; i<mssg.size(); ++i) {
        if (mssg[i] == hello_mssg[x]) x++;
    }
    cout << ((x == hello_mssg.size()) ? "YES" : "NO") << endl;
}