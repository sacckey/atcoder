#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;

  vector<pair<long,long>> vec;
  for (int i = 0; i < n; i++)
  {
    long long x,l;
    cin >> x >> l;
    vec.emplace_back(x,l);
  }  
  sort(vec.begin(),vec.end());

  long long minr = vec[0].first + vec[0].second;
  int ans = 0;
  for (int i = 1; i < n; i++)
  {
    long long x,l;
    x = vec[i].first;
    l = vec[i].second;
    if(x-l < minr){
      minr = min(x+l,minr);
      ans++;
    }
    else{
      minr = x+l;
    }
  }
  cout << n-ans << endl;
}