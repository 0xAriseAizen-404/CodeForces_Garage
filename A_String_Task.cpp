#include <bits/stdc++.h>
using namespace std;

#define all(v)  (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define pb      push_back
#define sz(x)   ((int)(x))
#define fastio  ios::sync_with_stdio(false); cin.tie(nullptr);

int main() {
    fastio;
    string s; 
    if (!(cin >> s)) return 0;

    const string vowels = "aeiouyAEIOUY";
    string ans;
    // ans.reserve(sz(s) * 2); // optional: avoid reallocs
    
    for (char c : s) {
        if (vowels.find(c) == string::npos) {
            ans += '.';
            // cast to unsigned char before tolower; then back to char
            char lc = static_cast<char>(std::tolower(static_cast<unsigned char>(c)));
            ans += lc;
        }
    }
    cout << ans << '\n';
    return 0;
}