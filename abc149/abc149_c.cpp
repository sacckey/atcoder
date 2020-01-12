#include <bits/stdc++.h>
using namespace std;

bool is_prime(long long n){
  if(n==1) return false;
  long long m = sqrt(n);
  for (long long i = 2; i <= m; i++) if(n%i==0) return false;
  return true;
}

int main(){
  long long x;
  cin >> x;

  while(!is_prime(x)) x++;
  cout << x << endl;
}