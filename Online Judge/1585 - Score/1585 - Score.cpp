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
  string result;
  int score;
  int consecutive;

  cin >> tc;

  cin.ignore();

  while (tc--) {
    score = 0;
    consecutive = 0;

    getline(cin, result);

    for (auto it = result.begin(); it != result.end(); ++it) {
      if (*it == 'O') {
        consecutive += 1;
        score += consecutive;
      } else if (*it == 'X') {
        consecutive = 0;
      }
    }

    cout << score << endl;
  }

  return 0;
}
