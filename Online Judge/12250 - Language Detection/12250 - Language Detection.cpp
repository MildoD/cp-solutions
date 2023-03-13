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
  string s;
  int tc = 0;

  while (getline(cin, s) && s != "#") {
    cout << "Case " << ++tc << ": ";

    if (s == "HELLO") {
      cout << "ENGLISH" << endl;
    } else if (s == "HOLA") {
      cout << "SPANISH" << endl;
    } else if (s == "HALLO") {
      cout << "GERMAN" << endl;
    } else if (s == "BONJOUR") {
      cout << "FRENCH" << endl;
    } else if (s == "CIAO") {
      cout << "ITALIAN" << endl;
    } else if (s == "ZDRAVSTVUJTE") {
      cout << "RUSSIAN" << endl;
    } else {
      cout << "UNKNOWN" << endl;
    }
  }

  return 0;
}
