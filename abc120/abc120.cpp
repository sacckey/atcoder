#include <bits/stdc++.h>
using namespace std;

void solveA(){
  int a,b,c;
  cin >> a >> b >> c;

  cout << min(b/a,c) << endl;
}
void solveB(){
  int a,b,k;
  cin >> a >> b >> k;
  vector<int> vec;
  int cnt=0;
  int i;

  for(i=1;i<=100;i++){
    if(a%i==0 && b%i==0){
      vec.push_back(i);
    }
  }

  sort(vec.begin(),vec.end(),greater<int>());

  cout << vec[k-1] << endl;
}
void solveC(){
  string s;
  cin >> s;
  int cntone=0;
  int cntzero=0;

  for(int i=0;i<s.length();i++){
    if(s[i]=='0'){
      cntzero++;
    }
    else {
      cntone++;
    }
  }
  cout << min(cntzero,cntone) * 2 << endl;
}

void solveD(){
}

int main(){
  solveD();
}
