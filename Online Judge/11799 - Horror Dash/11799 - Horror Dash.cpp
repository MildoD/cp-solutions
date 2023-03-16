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
  int tc, cn = 0;
  int n, c, max_speed;

  cin >> tc;

  while (tc--) {
    max_speed = 0;

    cin >> n;

    while (n--) {
      cin >> c;

      if (c > max_speed) {
        max_speed = c;
      }
    }

    cout << "Case " << ++cn << ": " << max_speed << endl;
  }

  return 0;
}
