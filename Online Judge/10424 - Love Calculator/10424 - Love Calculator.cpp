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

int get_name_value(string name) {
  int name_value = 0;
  char lower_char;

  for (int i = 0; i < name.length(); ++i) {
    lower_char = tolower(name[i]);

    if (lower_char >= 97 && lower_char <= 122) {
      name_value += lower_char - 96;
    }
  }

  while (name_value / 10 >= 1) {
    name_value = sum_of_digits(name_value);
  }

  return name_value;
}

int main() {
  ENABLE_FAST_STREAM
  string name1, name2;
  int name1_value, name2_value;
  double love;

  while (getline(cin, name1)) {
    getline(cin, name2);

    name1_value = get_name_value(name1);
    name2_value = get_name_value(name2);

    if (name1_value <= name2_value) {
      love = (static_cast<double>(name1_value) / name2_value) * 100;
    } else {
      love = (static_cast<double>(name2_value) / name1_value) * 100;
    }

    cout << fixed << setprecision(2) << love << " %" << endl;
  }

  return 0;
}
