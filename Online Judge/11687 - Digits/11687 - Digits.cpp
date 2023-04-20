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
  string x;
  int i;
  string x_prev;

  while (cin >> x, x != "END") {
    i = 0;

    do {
      x_prev = x;

      ++i;
      x = to_string(x.length());
    } while (x_prev != x);

    cout << i << endl;
  }

  return 0;
}
