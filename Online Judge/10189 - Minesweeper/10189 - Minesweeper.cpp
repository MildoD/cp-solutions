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
  int n, m;
  vector<vector<char>> field(100, vector<char>(100));
  int adjacent_mines;

  while (cin >> n >> m, n != 0 && m != 0) {
    for (int i = 0; i < n; ++i) {
      for (int j = 0; j < m; ++j) {
        cin >> field[i][j];
      }
    }

    if (cn > 0) {
      cout << endl;
    }

    cout << "Field #" << ++cn << ":" << endl;

    for (int i = 0; i < n; ++i) {
      for (int j = 0; j < m; ++j) {
        adjacent_mines = 0;

        if (field[i][j] == '*') {
          cout << "*";
        } else {
          if (((i - 1) >= 0) && field[i - 1][j] == '*') {
            ++adjacent_mines;
          }
          if (((j - 1) >= 0) && field[i][j - 1] == '*') {
            ++adjacent_mines;
          }
          if (((i - 1) >= 0) && ((j - 1) >= 0) && field[i - 1][j - 1] == '*') {
            ++adjacent_mines;
          }
          if (((i + 1) < n) && field[i + 1][j] == '*') {
            ++adjacent_mines;
          }
          if (((j + 1) < m) && field[i][j + 1] == '*') {
            ++adjacent_mines;
          }
          if (((i + 1) < n) && ((j + 1) < m) && field[i + 1][j + 1] == '*') {
            ++adjacent_mines;
          }
          if (((i + 1) < n) && ((j - 1) >= 0) && field[i + 1][j - 1] == '*') {
            ++adjacent_mines;
          }
          if (((i - 1) >= 0) && ((j + 1) < m) && field[i - 1][j + 1] == '*') {
            ++adjacent_mines;
          }

          cout << adjacent_mines;
        }
      }

      cout << endl;
    }
  }

  return 0;
}
