#include <bits/stdc++.h>
using namespace std;

void solveA(){
  int n;
  cin >> n;
  vector<int> b(n);
  int flg = 0;

  for(int i=0;i<n;i++){
    cin >> b[i];
  }

  vector<int> ans;
  while(b.size()>0){
    int c = -1;

    for(int i=0;i<b.size();i++){
      if(i+1==b[i]) c=b[i];
    }
    if (c==-1) {
      flg = 1;
      break;
    }
    ans.push_back(c);
    b.erase(b.begin()+c-1);
  }

  reverse(ans.begin(),ans.end());
  if(flg){
    cout << -1 << endl;
  }
  else{
    for(auto x:ans){
      cout << x << endl;
    }
  }
}


int main(){
  solveA();
}
