#include <bits/stdc++.h>
using namespace std;

long long n,a,b,c,d;
long long INF = 1e18;
map<long long, long long> mp;

long long dfs(long long now){
  if(now<=0) return 1e15;
  if(mp[now]!=0) return mp[now];

  long long a1=INF,a2=INF,b1=INF,b2=INF,c1=INF,c2=INF,x=INF;

  if(now < INF/d) x = now*d;

  if(now%2==0) a1 = a+dfs(now/2);
  else a2 = a+d+min(dfs((now-1)/2), dfs((now+1)/2));

  if(now%3==0) b1 = b+dfs(now/3);
  else b2 = min(b+d*(now-now/3*3)+dfs(now/3), b+d*(now/3*3+3-now)+dfs(now/3+1));

  if(now%5==0) c1 = c+dfs(now/5);
  else c2 = min(c+d*(now-now/5*5)+dfs(now/5), c+d*(now/5*5+5-now)+dfs(now/5+1));

  return mp[now] = min({x,a1,a2,b1,b2,c1,c2});
}

int main(){
  int t;
  cin >> t;
  vector<long long> anss(t);
  for (int i = 0; i < t; i++)
  {
    mp = map<long long, long long>();
    cin >> n >> a >> b >> c >> d;
    mp[1] = d;
    long long ans = dfs(n);
    anss[i] = ans;
  }
  for (int i = 0; i < t; i++) cout << anss[i] << endl;
}