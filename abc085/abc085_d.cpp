#include <bits/stdc++.h>
using namespace std;
int main(){
  int n;
  long long h;
  cin >> n >> h;

  vector<long long> b(n);
  long long maxa = 0;
  for(int i=0;i<n;i++){
    long long ai,bi;
    cin >> ai >> bi;
    maxa = max(maxa,ai);
    b[i] = bi;
  }
  sort(b.begin(),b.end());
  reverse(b.begin(),b.end());

  long long ans=0;
  for(int i=0;i<n;i++){
    if(b[i]>maxa && h>0){
      h-=b[i];
      ans++;
    }
    else break;
  }

  if(h>0) ans+=(h+maxa-1) / maxa;

  cout << ans << endl;
}