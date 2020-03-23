#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<int> a(n);
  map<int,long long> b;
  for (int i = 0; i < n; i++)
  {
    int A;
    cin >> A;
    a[i]=A;
    b[A]++;
  }
  
  long long sum = 0;
  for(auto pai:b){
    long long bi = pai.second;
    sum += bi*(bi-1)/2;
  }

  for (int i = 0; i < n; i++)
  {
    long long ans = sum;
    ans -= b[a[i]]*(b[a[i]]-1)/2;
    ans += (b[a[i]]-1)*(b[a[i]]-2)/2;
    cout << ans << endl;
  }
}