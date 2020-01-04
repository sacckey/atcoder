#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  cin >> s;
  int n = s.size();
  map<char,int> mp;
  for (int i = 0; i < n; i++) mp[s[i]]++;
  for (char c = 'A'; c <= 'E'; c++) cout << mp[c] << " ";
  cout << mp['F'] << endl;
}