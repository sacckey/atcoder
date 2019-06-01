#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<tuple<string,int,int>> vec;

  for (int i = 0; i < n; i++)
  {
    string s;
    int p;
    cin >> s >> p;    
    vec.push_back(make_tuple(s,-p,i+1));
  }

  sort(vec.begin(),vec.end());

  for(auto v:vec){
    cout << get<2>(v) << endl;
  }
}