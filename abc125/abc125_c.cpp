#include <bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
  int r;

  if(a<b) swap(a,b);
  if(b==0) return a;

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
  vector<int> a(n);

  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  vector<int> left(n+1);
  for (int i = 0; i < n; i++)
  {
    left[i+1]=gcd(left[i],a[i]);
  }

  vector<int> right(n+1);
  for (int i = n; i > 0; i--)
  {
    right[i-1]=gcd(right[i],a[i-1]);
  }

  int ans = 0;
  for (int i = 0; i < n; i++)
  {
    ans=max(gcd(left[i],right[i+1]),ans);
  }
  
  cout << ans << endl;
}