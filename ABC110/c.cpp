#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define repI(i, d, n) for (int i = (d); i < (n); ++i)
#define reps1(i, n) for (int i = 1; i < (n); ++i)
using namespace std;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

using ll = long long;
using P = pair<int, int>;
using Pl = pair<ll, ll>;
using M = map<int, int>;
using Ml = map<ll, ll>;
ll const INF = 1ll<<61;
double pi = 3.141592653589793238;

int main() {
  string s, t;
  cin >> s >> t;
  map<char, ll> ms, mt;
  ll ans = true;
  rep(i, ll(s.size())) {
    if (ms[s[i]] != mt[t[i]]) {
      ans = false;
      break;
    }
    ms[s[i]]++;
    mt[t[i]]++;
  }

  if (ans) cout << "Yes" << endl;
  else cout << "No" << endl;

  return 0;
}
