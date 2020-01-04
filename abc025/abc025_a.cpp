#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  int n;
  cin >> s >> n;

  sort(s.begin(),s.end());
  n--;
  cout << s[n/5] << s[n%5] << endl;
}