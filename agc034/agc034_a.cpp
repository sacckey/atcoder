#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,a,b,c,d;
  string s;
  cin >> n >> a >> b >> c >> d;
  a--,b--,c--,d--;
  cin >> s;

  if(c<b){
    for (int i = a; i <= c-2; i++)
    {
      if(s[i]=='#'&&s[i+1]=='#'){
        cout << "No" << endl;
        return 0 ;
      }
    }
    for (int i = b; i <= d-2; i++)
    {
      if(s[i]=='#'&&s[i+1]=='#'){
        cout << "No" << endl;
        return 0 ;
      }
    }
    cout << "Yes" << endl;
    return 0 ;
  }
  else{
    for (int i = a; i <= max(c,d)-2; i++)
    {
      if(s[i]=='#'&&s[i+1]=='#'){
        cout << "No" << endl;
        return 0 ;
      }
    }
    if(c>d){
      for (int i = b; i <= d-1; i++)
      {
        if((s[i]=='.' && (s[i+1]=='.' && s[i+2]=='.')) || (s[b-1]=='.' && s[b+1]=='.')){
          cout << "Yes" << endl;
          return 0;
        }
      }
      cout << "No" << endl;
      return 0;
    }
    else{
      cout << "Yes" << endl;
      return 0;
    }
  }
}