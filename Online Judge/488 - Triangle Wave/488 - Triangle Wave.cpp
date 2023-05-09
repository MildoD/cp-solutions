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
  int t;
  int amplitude, frequency;

  cin >> t;

  while (t--) {
    cin.ignore();
    cin >> amplitude >> frequency;

    for (int i = 0; i < frequency; ++i) {
      for (int j = 1; j <= amplitude; ++j) {
        for (int k = 0; k < j; ++k) {
          cout << j;
        }
        cout << endl;
      }

      for (int j = amplitude - 1; j >= 1; --j) {
        for (int k = 0; k < j; ++k) {
          cout << j;
        }
        cout << endl;
      }

      if (!(t == 0 && i == (frequency - 1))) {
        cout << endl;
      }
    }
  }

  return 0;
}
