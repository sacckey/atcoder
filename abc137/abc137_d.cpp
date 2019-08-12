#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,m;
  cin >> n >> m;
  
  vector<vector<int>> c(m);
  for (int i = 0; i < n; ++i){
    int a,b;
    cin >> a >> b;
    if(a>m) continue;
    c[m-a].push_back(b);    
  }

  priority_queue<int> q;
  int ans=0;
  for (int i = m-1; i >= 0; i--)
  {
    for(int x:c[i]){
      q.push(x);
    }
    if(!q.empty()){
      ans+=q.top();
      q.pop();
    }
  }
  cout << ans << endl;
}