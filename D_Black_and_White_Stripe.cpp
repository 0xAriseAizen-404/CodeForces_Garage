#include <bits/stdc++.h>
//#include <atcoder/all>

#pragma GCC optimize "trapv"

using namespace std;
//using namespace atcoder;

#define int long long int
#define double long double

#define vi vector<int>
#define mii map<int, int>
#define pii pair<int, int>
#define v_pii vector<pii>

#define ff first
#define ss second
#define pf push_front
#define pb push_back
#define ppf pop_front()
#define ppb pop_back()
#define in insert
#define lb lower_bound
#define ub upper_bound
#define fr front()
#define bk back()
#define make make_pair
#define size(x) (int)(x).size()
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define repp(i, a, b, c) for (int i = (a); i < (b); i += (c))
#define bckk(i, a, b, c) for (int i = (a) - 1; i >= (b); i -= (c))
#define rep(i, a, b) repp(i, a, b, 1)
#define bck(i, a, b) bckk(i, a, b, 1)
#define mx(x) *max_element(all(x))
#define mn(x) *min_element(all(x))
#define summ(x) accumulate(all(x), 0LL)
#define mem(x, y) memset(x, y, sizeof(x))
#define count_1(x) __builtin_popcountll(x)
#define lmb(x) __lg(x)
#define rmb(x) (int)log2((x) & -(x))
#define srt(x) is_sorted(all(x))
#define endl '\n'
#define rtn exit(0)

void __print(int x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(bool x) {cerr << (x ? "true" : "false");}
void _print() {cerr << "]\n";}

template <typename T1, typename T2> void __print(const pair<T1, T2> &x) {cerr << '{'; __print(x.ff); cerr << ','; __print(x.ss); cerr << '}';}
template <typename T> void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << '}';}
template <typename T1, typename... T2> void _print(T1 t, T2... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}

#ifndef coderdhanraj
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif

const double pi = acos(-1.0);
const double eps = 1e-9;
const int inf = 2e18;
const int INF = 9e18;
const int maxn = 2e5 + 10;
const int maxx = 2e6 + 10;
const int mod = 1e9 + 7;
const int mod2 = 998244353LL;

int testcase;
int iseq(double x, double y) {return abs(x - y) < eps;}
bool isSquare(int x) {int y = sqrtl(x); return x == y * y;}
bool ispow2(int x) {return (x ? !(x & (x - 1)) : 0);}
int ceils(int x, int y) {return (x >= 0 ? (x + y - 1) / y : x / y);}
int gcd(int x, int y) {return (x ? gcd(y % x, x) : y);}
int lcm(int x, int y) {return x / gcd(x, y) * y;}

int power(int x, int y, int m = INF) {
    int res = 1;
    x %= m;
    while (y > 0) {
        if (y & 1) res = (res * x) % m;
        y >>= 1;
        x = (x * x) % m;
    }
    return res;
}

bool isPrime(int n) {
    if (n < 2) return false;
    if (n <= 3) return true;
    if (!(n % 2) || !(n % 3)) return false;
    for (int i = 5; i * i <= n; i += 6)
        if (!(n % i) || !(n % (i + 2))) return false;
    return true;
}

void IOS() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cout.precision(20);
    cout.setf(ios::fixed);
}

void solve() {
    // Code the Solution here
    int n, k; cin >> n >> k;
    string s; cin >> s;

    if (k > n) { 
        cout << 0 << '\n';
        return;
    }

    int cntW = 0;
    for (int i = 0; i < k; ++i) if (s[i] == 'W') ++cntW;

    int ans = cntW;
    for (int r = k; r < n; ++r) {
        if (s[r - k] == 'W') --cntW;
        if (s[r] == 'W') ++cntW;
        ans = min(ans, cntW);
    }

    cout << ans << '\n';
}

int32_t main() {
    IOS();
    int ttc = 1;
    cin >> ttc;
    while (ttc--) solve();
    return 0;
}