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
  string standard_solution, team_output;
  string line, standard_solution_digits, team_output_digits;

  while (cin >> n, n != 0) {
    standard_solution = "";
    team_output = "";
    standard_solution_digits = "";
    team_output_digits = "";

    cin.ignore();

    while (n--) {
      getline(cin, line);

      standard_solution += line + "\n";
    }

    cin >> m;
    cin.ignore();

    while (m--) {
      getline(cin, line);

      team_output += line + "\n";
    }

    cout << "Run #" << ++cn;

    if (standard_solution == team_output) {
      cout << ": Accepted" << endl;
    } else {
      for (char c : standard_solution) {
        if (c >= '0' && c <= '9') {
          standard_solution_digits += c;
        }
      }

      for (char c : team_output) {
        if (c >= '0' && c <= '9') {
          team_output_digits += c;
        }
      }

      if (standard_solution_digits == team_output_digits) {
        cout << ": Presentation Error" << endl;
      } else {
        cout << ": Wrong Answer" << endl;
      }
    }
  }

  return 0;
}
