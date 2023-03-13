// Copyright 2023 Romildo Oliveira Souza Júnior <mildo@mildo.dev>

// clang-format off
#include <bits/stdc++.h>
using namespace std;  // NOLINT(build/namespaces)
#define ENABLE_FAST_STREAM ios::sync_with_stdio(false); cin.tie(nullptr);
#define endl "\n"
#define DEBUG(x) cerr << __LINE__ << ": [" << #x << "] = " << (x) << endl;
// clang-format on

int main() {
  ENABLE_FAST_STREAM
  int tc, i = 0;
  int l, w, h;

  cin >> tc;

  while (tc--) {
    cin >> l >> w >> h;

    cout << "Case " << ++i << ": ";

    if (l <= 20 && w <= 20 && h <= 20) {
      cout << "good" << endl;
    } else {
      cout << "bad" << endl;
    }
  }

  return 0;
}
