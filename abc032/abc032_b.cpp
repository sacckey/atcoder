#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  int k;
  cin >> s >> k;
  int n = s.size();
  set<string> st;

  for (int i = 0; i <= n-k; i++)
  {
    st.insert(s.substr(i,k));
  }
  cout << st.size() << endl;  
}