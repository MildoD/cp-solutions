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
  int l;
  string decision;
  string direction;
  map<pair<string, string>, string> directions = {
      {make_pair("+x", "+y"), "+y"}, {make_pair("+x", "-y"), "-y"},
      {make_pair("+x", "+z"), "+z"}, {make_pair("+x", "-z"), "-z"},
      {make_pair("-x", "+y"), "-y"}, {make_pair("-x", "-y"), "+y"},
      {make_pair("-x", "+z"), "-z"}, {make_pair("-x", "-z"), "+z"},
      {make_pair("+y", "+y"), "-x"}, {make_pair("+y", "-y"), "+x"},
      {make_pair("+y", "+z"), "+y"}, {make_pair("+y", "-z"), "+y"},
      {make_pair("-y", "+y"), "+x"}, {make_pair("-y", "-y"), "-x"},
      {make_pair("-y", "+z"), "-y"}, {make_pair("-y", "-z"), "-y"},
      {make_pair("+z", "+y"), "+z"}, {make_pair("+z", "-y"), "+z"},
      {make_pair("+z", "+z"), "-x"}, {make_pair("+z", "-z"), "+x"},
      {make_pair("-z", "+y"), "-z"}, {make_pair("-z", "-y"), "-z"},
      {make_pair("-z", "+z"), "+x"}, {make_pair("-z", "-z"), "-x"}};

  while (cin >> l, l != 0) {
    direction = "+x";

    --l;

    while (l--) {
      cin >> decision;

      if (decision != "No") {
        direction = directions[{direction, decision}];
      }
    }

    cout << direction << endl;
  }

  return 0;
}
