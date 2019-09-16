#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,m;
  cin >> n >> m;
  vector<int> a(n);

  priority_queue<int> q;
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
    q.push(a[i]);
  }

  for (int i = 0; i < m; i++)
  {
    int s = q.top();
    q.pop();
    q.push(s/2);
  }

  long long ans = 0;
  for (int i = 0; i < n; i++)
  {
    int s = q.top();
    q.pop();
    ans+=(long long) s;
  }
  
  cout << ans << endl;
}