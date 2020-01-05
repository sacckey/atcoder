#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  int n;
  cin >> s >> n;
  int len = s.size();

  for (int i = 0; i < n; i++)
  {
    int l,r;
    cin >> l >> r;
    
    string subc = s.substr(l-1,r-l+1);
    reverse(subc.begin(),subc.end());

    string subl = s.substr(0,l-1);
    string subr = s.substr(r,len-r);
    s = subl + subc + subr;
  }
  cout << s << endl;
}