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
  int n, b, h, w, p, a;
  int hotel_total_cost, min_total_cost;

  while (cin >> n >> b >> h >> w) {
    min_total_cost = numeric_limits<int>::max();

    while (h--) {
      cin >> p;

      hotel_total_cost = p * n;

      for (int i = 0; i < w; ++i) {
        cin >> a;

        if (hotel_total_cost <= b && n <= a &&
            hotel_total_cost < min_total_cost) {
          min_total_cost = hotel_total_cost;
        }
      }
    }

    if (min_total_cost <= b) {
      cout << min_total_cost << endl;
    } else {
      cout << "stay home" << endl;
    }
  }

  return 0;
}
