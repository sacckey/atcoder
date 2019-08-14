#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a,long long b){
  long long r;

  if(a<b) swap(a,b);
 
  r = a % b;
  while(r!=0){
    a = b;
    b = r;
    r = a % b;
  }
  return b;
}

int main(){
  int n;
  cin >> n;

  vector<long long> t(n);
  for (int i = 0; i < n; i++)
  {
    cin >> t[i];
  }

  long long g = t[0];
  for (int i = 1; i < n; i++)
  {
    g = t[i]/gcd(g,t[i])*g;
  }
  cout << g << endl;  
}