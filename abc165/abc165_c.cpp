#include <bits/stdc++.h>
using namespace std;

int n,m,q;
vector<int> a,b,c,d;
int ans = 0;

void dfs(vector<int> A){
  if(A.size()==n+1){
    int sum = 0;
    for (int i = 0; i < q; i++)
    {
      if(A[b[i]]-A[a[i]] == c[i]) sum+=d[i];
    }
    ans = max(ans,sum);
    return;
  }
  A.push_back(A.back());
  while(A.back()<=m){
    dfs(A);
    A.back()++;
  }
}

int main(){
  cin >> n >> m >> q;
  a = b = c = d = vector<int>(q);
  for (int i = 0; i < q; i++) cin >> a[i] >> b[i] >> c[i] >> d[i];

  dfs(vector<int>(1,1));
  cout << ans << endl;    
}