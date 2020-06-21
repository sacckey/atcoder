#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<int> a(n);
  vector<long long> anss;
  long long ans = 0;
  map<int,int> mp;

  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
    ans+=a[i];
    mp[a[i]]++;
  }

  int q;
  cin >> q;
  for (int i = 0; i < q; i++)
  {
    int b,c;
    cin >> b >> c;
    long long sub = c-b;
    sub*=mp[b];
    ans+=sub;
    mp[c]+=mp[b];
    mp[b]=0;
    anss.push_back(ans);
  }
  for(long long an:anss){
    cout << an << endl;
  }
}