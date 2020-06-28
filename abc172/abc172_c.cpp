#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,m;
  long long k;
  cin >> n >> m >> k;
  vector<long long> a(n);
  vector<long long> b(m);
  vector<long long> ruib(m+1);
  ruib[0] = 0;

  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  for (int i = 0; i < m; i++)
  {
    cin >> b[i];
    ruib[i+1] = ruib[i] + b[i];
  }

  long long sum = 0;
  // int ni=0;
  // int mi=0;
  int ans = 0;
  // int ansi =  0;
  int cntb;

  for (int i = 0; i < n; i++)
  {
    if(i==0){
      cntb = upper_bound(ruib.begin(), ruib.end(), k) - ruib.begin()-1;
      ans = cntb;
    }



    sum += a[i];
    int tan = k-sum;
    cntb = upper_bound(ruib.begin(), ruib.end(), tan) - ruib.begin()-1;

    if(sum>k){
      ans = max(ans,i);
      break;      
    }

    if(sum==k){
      ans = max(ans,i+1);
      break;
    }

    // cout << "i=" << i << endl;
    // cout << "cntb=" <<  cntb << endl;

    // if(cntb < 0){
    // }
    ans = max(ans,i+1+cntb);    
  }
  cout << ans << endl;
}