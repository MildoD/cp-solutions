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
  int t, n;
  string formula;
  double molar_mass;

  map<char, double> atomic_weights = {
      {'C', 12.01}, {'H', 1.008}, {'O', 16.00}, {'N', 14.01}};
  int power;
  bool new_element;

  cin >> t;

  cin.ignore();

  while (t--) {
    molar_mass = 0;

    getline(cin, formula);

    for (auto it = formula.rbegin(); it != formula.rend(); ++it) {
      if (new_element == true) {
        if (*it >= 48 && *it <= 57) {
          n = *it - '0';

          power *= 10;
          new_element = false;
        } else {
          molar_mass += atomic_weights[*it];
        }
      } else {
        if (*it >= 48 && *it <= 57) {
          n += (*it - '0') * power;

          power *= 10;
        } else {
          molar_mass += atomic_weights[*it] * n;

          power = 1;
          new_element = true;
        }
      }
    }

    cout << fixed << setprecision(3) << molar_mass << endl;
  }

  return 0;
}
