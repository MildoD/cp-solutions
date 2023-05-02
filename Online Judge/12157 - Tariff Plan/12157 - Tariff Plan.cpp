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
  int t, cn = 0;
  int n, duration;
  int mile_cost, juice_cost;

  cin >> t;

  while (t--) {
    mile_cost = 0;
    juice_cost = 0;

    cin >> n;

    while (n--) {
      cin >> duration;

      mile_cost += ((duration / 30) + 1) * 10;
      juice_cost += ((duration / 60) + 1) * 15;
    }

    cout << "Case " << ++cn << ": ";

    if (mile_cost < juice_cost) {
      cout << "Mile " << mile_cost << endl;
    } else if (mile_cost > juice_cost) {
      cout << "Juice " << juice_cost << endl;
    } else {
      cout << "Mile Juice " << mile_cost << endl;
    }
  }

  return 0;
}
