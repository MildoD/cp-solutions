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
  int n, p;
  string instruction;
  vector<int> instructions(101);
  int i;

  cin >> t;

  while (t--) {
    cin >> n;
    cin.ignore();

    i = 1;
    p = 0;

    while (n--) {
      getline(cin, instruction);

      if (instruction == "LEFT") {
        instructions[i] = -1;
      } else if (instruction == "RIGHT") {
        instructions[i] = 1;
      } else {
        instructions[i] = instructions[stoi(instruction.substr(8))];
      }

      ++i;
    }

    for (int j = 1; j < i; ++j) {
      p += instructions[j];
    }

    cout << p << endl;
  }

  return 0;
}
