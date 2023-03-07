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
  int tc;

  cin >> tc;

  while (tc--) {
    int64_t n;

    cin >> n;

    cout << (-1 + static_cast<int>(sqrt(1 + 8 * n))) / 2 << endl;
  }

  return 0;
}
