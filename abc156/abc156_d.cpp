#include <bits/stdc++.h>
using namespace std;

const int mod = 1000000007;
struct mint {
  long long x;
  mint(long long x=0):x((x%mod+mod)%mod){}
  mint operator-() const { return mint(-x);}
  mint& operator+=(const mint a) {
    if ((x += a.x) >= mod) x -= mod;
    return *this;
  }
  mint& operator-=(const mint a) {
    if ((x += mod-a.x) >= mod) x -= mod;
    return *this;
  }
  mint& operator*=(const mint a) { (x *= a.x) %= mod; return *this;}
  mint operator+(const mint a) const { return mint(*this) += a;}
  mint operator-(const mint a) const { return mint(*this) -= a;}
  mint operator*(const mint a) const { return mint(*this) *= a;}
  mint pow(long long t) const {
    if (!t) return 1;
    mint a = pow(t>>1);
    a *= a;
    if (t&1) a *= *this;
    return a;
  }

  // for prime mod
  mint inv() const { return pow(mod-2);}
  mint& operator/=(const mint a) { return *this *= a.inv();}
  mint operator/(const mint a) const { return mint(*this) /= a;}
};
istream& operator>>(istream& is, const mint& a) { return is >> a.x;}
ostream& operator<<(ostream& os, const mint& a) { return os << a.x;}

mint modpow(int n) {
  if (n == 0) return 1;
  mint x = modpow(n/2);
  x *= x;
  if (n%2 == 1) x *= 2;
  return x;
}

mint comb(int n, int a) {
  mint x = 1, y = 1;
  for (int i = 0; i < a; i++)
  {
    x *= n-i;
    y *= i+1;
  }
  return x / y;
}

int main(){
  int n,a,b;
  cin >> n >> a >> b;
  mint ans = modpow(n) - 1 - comb(n,a) - comb(n,b);
  cout << ans << endl;
}