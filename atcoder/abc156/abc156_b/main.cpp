// clang-format off
#define _GLIBCXX_DEBUG
#define _LIBCPP_DEBUG 0
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <tuple>
#include <cstdint>
#include <cstdio>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <stack>
#include <queue>
#include <deque>
#include <bitset>
#include <cctype>
#include <cmath>
using namespace std;
#define PI 3.14159265358979323846264338327950L
#define rep(i,n) for (int i=0; i<(int)(n); ++i)
#define rep2(i,s,n) for (int i=(s); i<(int)(n); ++i)
#define noflush ios::sync_with_stdio(false);cin.tie(nullptr);constexpr char endl='\n'
#define prec(i) fixed << setprecision(i)
#define put(expr) cout<<expr<<'\n'
#define putV(A) cout << '['; rep(i, A.size()) { cout << A[i]; if (i != A.size() - 1) cout << ' '; else cout << "]\n"; }
typedef int8_t i8; typedef int16_t i16; typedef int32_t i32; typedef int64_t i64; typedef uint8_t u8; typedef uint16_t u16; typedef uint32_t u32; typedef uint64_t u64; typedef float f32; typedef double f64; typedef long double f80;
typedef vector<int> vi; typedef vector<vector<int>> vvi; typedef map<int, int> mii;
typedef __int128_t i128; i128 parse(string &s) { i128 ret = 0; for (int i = 0; i < s.length(); i++) if ('0' <= s[i] && s[i] <= '9') ret = 10 * ret + s[i] - '0'; return ret; } istream &operator>>(istream &is, i128 &v) { string s; is >> s; v = parse(s); return is; } ostream &operator<<(ostream &os, const i128 &v) { if (v == 0) return (os << "0"); i128 num = v; if (v < 0) { os << '-'; num = -num; } string s; for (; num > 0; num /= 10) s.push_back('0' + (char)(num % 10)); reverse(s.begin(), s.end()); return (os << s); }
template <typename T> bool chmax(T &now, const T &cand) { if (now < cand) { now = cand; return true; } return false; } template <typename T> bool chmin(T &now, const T &cand) { if (now > cand) { now = cand; return true; } return false; }
template <typename T> T gcd(const T &a, const T &b) { if (a % b == 0) return b; return gcd(b, a % b); } template <typename T> T lcm(const T &a, const T &b) { return a * b / gcd(a, b); }
template <typename T> T nCr(const T &n, T k) { if (k > n) return 0; if (k * 2 > n) k = n - k; if (k == 0) return 1; int result = n; for (int i = 2; i <= k; ++i) { result *= (n - i + 1); result /= i; } return result; }
const int INF = 1<<30; /* INF > 10^9 */ const i64 INFLL = 1LL<<60; /* INFLL > 10^18 */ const string YES = "Yes", NO = "No";
// clang-format on

int main() {
  noflush;

  int N, K;
  cin >> N >> K;

  int _pow = 0;
  while (1) {
    // put(N << "/" << (int)(pow(K, _pow)));
    if (N / (int)(pow(K, _pow)) != 0)
      ++_pow;
    else {
      put(_pow);
      return 0;
    }
  }
}
