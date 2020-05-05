#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  map<int,long long> ps,ms;
  for (int i = 0; i < n; i++)
  {
    int a;
    cin >> a;
    ps[i+1+a]++;
    ms[i+1-a]++;
  }

  long long ans=0;
  for(auto p:ps){
    int pi=p.first;
    long long v = p.second * ms[pi];
    ans+=v;
  }
  cout << ans << endl;  
}