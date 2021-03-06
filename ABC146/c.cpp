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
ll a, b;

ll keta(ll n) {
  return log10(n) + 1;
}

ll calc(ll n) {
  return a * n + b * keta(n);
}

int main() {
  ll x;
  cin >> a >> b >> x;

  ll left = 0;
  ll right = 1e9 + 1;

  while (left + 1 < right) {
    ll mid = (left + right) / 2;
    if (calc(mid) <= x) left = mid;
    else right = mid;

  }

  cout << left << endl;

  return 0;
}
