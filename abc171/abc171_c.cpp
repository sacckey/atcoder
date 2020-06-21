#include <bits/stdc++.h>
using namespace std;

int main(){
  long long n;
  cin >> n;

  vector<char> als;
  for (char c = 'a'; c <= 'z'; c++)
  {
    als.push_back(c);
  }

  string ans = "";
  n--;
  while(n>=0){
    char an = als[n%26];
    ans.push_back(an);
    if(n<26) break;
    n/=26;
    n--;
  }
  reverse(ans.begin(),ans.end());
  cout << ans << endl;
  
}