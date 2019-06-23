#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,k;
  cin >> n >> k;

  vector<pair<int,int>> vec;

  if(k>(n - 2)*(n - 1)/2){
    cout << -1 << endl;
    return 0;
  }

  for (int i = 1; i < n; i++) vec.emplace_back(i,n);

  vector<pair<int,int>> edge;
  for (int i = 1; i < n; i++)
  {
    for (int j = i+1; j < n; j++) edge.emplace_back(i,j);
  }

  int cnt = (n-2)*(n-1)/2 - k;
  for (int i = 0; i < cnt; i++) vec.push_back(edge[i]);

  
  cout << vec.size() << endl;
  for(auto ans:vec){
    cout << ans.first << " " << ans.second << endl;
  }
}