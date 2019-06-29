#include <bits/stdc++.h>
using namespace std;
int main(){
  int a,b;
  string s;
  cin >> a >> b >> s;

  int flg = 1;
  for (int i = 0; i < a+b+1; i++)
  {
    if(i==a){
      if(s[i]!='-') flg=0;
    }
    else{
      if(s[i]=='-') flg=0;
    }
  }
  
  if(flg) cout << "Yes" << endl;
  else cout << "No" << endl;
}