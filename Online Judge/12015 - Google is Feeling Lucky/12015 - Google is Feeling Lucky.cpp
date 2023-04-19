// Copyright 2023 Romildo Oliveira Souza Júnior <mildo@mildo.dev>

// clang-format off
#include <bits/stdc++.h>
using namespace std;  // NOLINT(build/namespaces)
#define ENABLE_FAST_STREAM ios::sync_with_stdio(false); cin.tie(nullptr);
#define endl "\n"
#define DEBUG(x) cerr << __LINE__ << ": [" << #x << "] = " << (x) << endl;
// clang-format on

bool compare_second(pair<string, int> a, pair<string, int> b) {
  return a.second > b.second;
}

int main() {
  ENABLE_FAST_STREAM
  int tc, cn = 0;
  vector<pair<string, int>> v(10);
  int highest;

  cin >> tc;

  while (tc--) {
    for (int i = 0; i < 10; ++i) {
      cin >> v[i].first >> v[i].second;
    }

    sort(v.begin(), v.end(), compare_second);

    highest = v[0].second;

    cout << "Case #" << ++cn << ":" << endl;

    for (int i = 0; i < 10 && v[i].second == highest; ++i) {
      cout << v[i].first << endl;
    }
  }

  return 0;
}
