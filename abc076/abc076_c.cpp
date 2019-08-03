#include <bits/stdc++.h>
using namespace std;

bool match(char c, char d){
  if(c==d || c=='?') return true;
  else return false;
}

int main(){
  string s,t;
  cin >> s >> t;
  vector<string> vec;

  for (int i = 0; i < (int)s.size(); i++)
  {
    string ss = s;
    bool flg=false;
    if(match(s[i],t[0])){
      for (int j = 0; j < (int)t.size(); j++)
      {
        if(i+j==(int)s.size()) break;
        if(!match(s[i+j],t[j])) break;
        ss[i+j]=t[j];
        if(j==(int)t.size()-1) flg=true;
      }
      if(flg) vec.push_back(ss);
    }
  }
  if(vec.size()==0){
    cout << "UNRESTORABLE" << endl;
    return 0;
  }

  for(int i = 0; i < (int)vec.size(); i++){
    for (int j = 0; j < (int)s.size(); j++)
    {
      if(vec[i][j]=='?'){ 
        vec[i][j]='a';
      }
    }
  }
  sort(vec.begin(),vec.end());
  cout << vec[0] << endl;
}