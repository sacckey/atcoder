#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,k,r,s,p;
  cin >> n >> k >> r >> s >> p;
  string t;
  cin >> t;

  vector<char> pre(k,'x');
  int sum = 0;
  for (int i = 0; i < n; i++)
  {
    char hand = t[i];
    if(hand=='r'){
      if(pre[i%k]=='p') pre[i%k] = 'x';
      else{
        sum+=p;
        pre[i%k] = 'p';
      }
    }
    if(hand=='s'){
      if(pre[i%k]=='r') pre[i%k] = 'x';
      else{
        sum+=r;
        pre[i%k] = 'r';
      }
    }
    if(hand=='p'){
      if(pre[i%k]=='s') pre[i%k] = 'x';
      else{
        sum+=s;
        pre[i%k] = 's';
      }
    }
  }
  cout << sum << endl;
}