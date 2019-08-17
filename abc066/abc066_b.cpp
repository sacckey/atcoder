#include <bits/stdc++.h>
using namespace std;

bool is_e(string t){
  for (int i = 0; i < t.size()/2; i++)
  {
    if(t[i]!=t[t.size()/2+i]) return false;
  }
  return true; 
}

int main(){
  string s;
  cin >> s;

  for (int i = 2; i < s.size(); i+=2)
  {
    string t = s.substr(0,s.size()-i);
    if(is_e(t)){
      cout << t.size() << endl;
      break;
    }
  }
}