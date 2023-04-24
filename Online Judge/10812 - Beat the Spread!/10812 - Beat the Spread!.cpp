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
  int n;
  int64_t s, d;
  int64_t score1, score2;

  cin >> n;

  while (n--) {
    cin >> s >> d;

    score1 = (s + d) / 2;
    score2 = s - score1;

    if (score1 >= 0 && score2 >= 0 && score1 + score2 == s &&
        score1 - score2 == d) {
      cout << score1 << " " << score2 << endl;
    } else {
      cout << "impossible" << endl;
    }
  }

  return 0;
}
