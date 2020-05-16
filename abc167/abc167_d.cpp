#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  long long k;
  cin >> n >> k;
  vector<int> a(n);
  for (int i = 0; i < n; i++)
  {
    int ai;
    cin >> ai;
    a[i] = ai-1;
  }

  vector<int> seen(n,-1);
  int step = 0;
  int now = 0;
  bool ok = false;
  while(k>0){
    if(seen[now]==-1 || ok){
      seen[now] = step;
      now = a[now];
      step++;
      k--;
    }
    else{
      int diff = step - seen[now];
      // cout << "diff=" << diff << endl;
      // cout << "seennow =" << seen[now] << endl;
      if(diff==1) break;
      k%=diff;
      ok = true;
      // cout << "k=" << k << endl;
    }
  }
  // for (int i = 0; i < n; i++)
  // {
  //   cout << seen[i] << endl;
  // }
  
  
  cout << now+1 << endl;  
}