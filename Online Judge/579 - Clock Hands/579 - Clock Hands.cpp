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
  double h, m;
  double angle;
  char colon;
  double h_angle, m_angle;

  while (cin >> h >> colon >> m, h != 0 || m != 0) {
    h_angle = (h + (m / 60)) * 30;
    m_angle = m * 6;

    angle = abs(h_angle - m_angle);

    cout << fixed << setprecision(3) << min(angle, 360 - angle) << endl;
  }

  return 0;
}
