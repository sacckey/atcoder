#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  int k;
  cin >> s >> k;

  vector<string> vec;
  set<string> st;
  for (int i = 0; i < s.size(); i++)
  {
    for (int j = 1; j <= 5; j++)
    {
      if(i+j>s.size()) break;
      st.insert(s.substr(i,j));
    }
  }
  for(auto x:st){
    vec.push_back(x);
  }
  sort(vec.begin(),vec.end());

  cout << vec[k-1] << endl;
}
