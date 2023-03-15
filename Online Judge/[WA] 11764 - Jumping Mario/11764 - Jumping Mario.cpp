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
  int n, hj, lj;
  int current_height, previous_height;

  cin >> tc;

  while (tc--) {
    cin >> n;

    hj = 0, lj = 0;

    if (n == 1) {
      cin.ignore();
      cin.ignore();
    } else if (n >= 2) {
      cin >> previous_height;

      --n;

      while (n--) {
        cin >> current_height;

        if (previous_height < current_height) {
          ++hj;
        } else if (previous_height > current_height) {
          ++lj;
        }

        previous_height = current_height;
      }
    }

    cout << "Case " << ++cn << ": " << hj << " " << lj << endl;
  }

  return 0;
}
