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
  int cn = 0;
  int n, eb, event;

  while (cin >> n) {
    eb = 0;

    if (n > 0) {
      while (n--) {
        cin >> event;

        eb += event > 0 ? 1 : -1;
      }

      cout << "Case " << ++cn << ": " << eb << endl;
    }
  }

  return 0;
}
