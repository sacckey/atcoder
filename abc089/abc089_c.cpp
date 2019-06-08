#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  map<char,int> mp;
  char march[] = {'M','A','R','C','H'};

  for (int i = 0; i < n; i++)
  {
    string s;
    cin >> s;
    mp[s[0]]++;
  }

  long long ans=0;
  for (int bit = 0; bit < (1<<5); bit++)
  {
    set<char> top;
    for (int i = 0; i < 5; i++)
    {
      if(bit&(1<<i)){
        top.insert(march[i]);
      }
    }
    if(top.size()==3){
      long long tmp = 1;
      for(auto c:top){
        tmp*=(long long) mp[c];
      }
      ans+=tmp;
    }
  }
  cout << ans << endl;
}