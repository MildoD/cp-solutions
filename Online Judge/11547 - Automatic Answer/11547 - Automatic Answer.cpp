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
  int tc, n, ans;

  cin >> tc;

  while (tc--) {
    cin >> n;

    ans = abs((((((((n * 567) / 9) + 7492) * 235) / 47) - 498) / 10)) % 10;

    cout << ans << endl;
  }

  return 0;
}
