#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = int64_t;
using vl = vector<ll>;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  ll n;
  cin >> n;
  string s;
  cin >> s;

  auto e = 0LL;
  auto o = 0LL;
  for (const auto& c : s) {
    if (0 == (c - '0') % 2) {
      ++e;
    } else {
      ++o;
    }
  }

  if (e < o) {
    cout << 1;
  } else if (o < e) {
    cout << 0;
  } else {
    cout << -1;
  }

  return 0;
}