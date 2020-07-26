#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> l(n);
  rep(i, n) cin >> l[i];

  sort(l.begin(), l.end(), greater<int>());

  cout << accumulate(l.begin(), l.begin()+k, 0) << endl;

  return 0;
}
