#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,k;
  cin >> n >> k;
  vector<int> p(n);
  vector<long long> c(n);

  for (int i = 0; i < n; i++){
    cin >> p[i];
    p[i]--;
  }
  for (int i = 0; i < n; i++) cin >> c[i];

  long long ans = -1000000000000000000;
  for (int i = 0; i < n; i++)
  {
    long long csum = 0;
    int clen = 0;
    int now = i;
    while(true){
      clen++;
      now = p[now];
      csum+=c[now];
      if(now==i) break;
    }

    int cnt = 0;
    long long path = 0;
    while(true){
        cnt++;
        path += c[now];

        if (cnt > k) break;

        int num = (k - cnt) / clen;
        long long score = path + max(0ll, csum) * num;
        ans = max(ans,score);

        now = p[now];
        if (now == i) break;
    }
  }
  cout << ans << endl;
}