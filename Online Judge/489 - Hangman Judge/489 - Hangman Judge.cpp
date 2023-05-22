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
  int round;
  string solution, guesses;
  set<char> solution_unique_chars, guesses_unique_chars;
  int strokes;

  while (cin >> round, round != -1) {
    solution_unique_chars.clear();
    guesses_unique_chars.clear();
    strokes = 0;

    cin.ignore();

    getline(cin, solution);

    for (char c : solution) {
      solution_unique_chars.insert(c);
    }

    getline(cin, guesses);

    for (char c : guesses) {
      if (guesses_unique_chars.find(c) == guesses_unique_chars.end()) {
        guesses_unique_chars.insert(c);

        set<char>::iterator it = solution_unique_chars.find(c);

        if (it != solution_unique_chars.end()) {
          solution_unique_chars.erase(it);

          if (solution_unique_chars.size() == 0) {
            cout << "Round " << round << endl << "You win." << endl;

            break;
          }
        } else {
          ++strokes;

          if (strokes == 7) {
            cout << "Round " << round << endl << "You lose." << endl;

            break;
          }
        }
      }
    }

    if (solution_unique_chars.size() != 0 && strokes != 7) {
      cout << "Round " << round << endl << "You chickened out." << endl;
    }
  }

  return 0;
}
