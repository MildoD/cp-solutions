// Copyright 2023 Romildo Oliveira Souza Júnior <mildo@mildo.dev>

// clang-format off
#include <bits/stdc++.h>
using namespace std;  // NOLINT(build/namespaces)
#define ENABLE_FAST_STREAM ios::sync_with_stdio(false); cin.tie(nullptr);
#define endl "\n"
#define DEBUG(x) cerr << __LINE__ << ": [" << #x << "] = " << (x) << endl;
// clang-format on

int sum_of_digits(int number) {
  int sum = 0;

  while (number != 0) {
    sum += number % 10;
    number /= 10;
  }

  return sum;
}

int main() {
  ENABLE_FAST_STREAM
  int n;

  while (cin >> n && n != 0) {
    while (n / 10 >= 1) {
      n = sum_of_digits(n);
    }

    cout << n << endl;
  }

  return 0;
}
