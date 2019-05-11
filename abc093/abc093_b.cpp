#include <bits/stdc++.h>
using namespace std;

int main(){
  int a,b,k;
  cin >> a >> b >> k;

  set<int> ans;

  for (int i = a; i <= min(b,a+k-1); i++)
  {
    ans.insert(i);
  }

  for (int i = b; i >= max(a,b-k+1); i--)
  {
    ans.insert(i);
  }

  for(auto x:ans){
    cout << x << endl;
  }
  

}