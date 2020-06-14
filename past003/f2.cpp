#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;

  vector<map<char,int>> cnts(n);
  for (int i = 0; i < n; i++)
  {
    string s;
    cin >> s;
    for (int j = 0; j < n; j++) cnts[i][s[j]]++;
  }

  string front = "";
  string back = "";
  for (int i = 0; i < (n+1)/2; i++)
  {
    for(char c='a'; c<='z'; c++){
      if(cnts[i][c]>=1 && cnts[n-1-i][c]>=1){
        front.push_back(c);
        back.push_back(c);
        break;
      }
      if(c=='z'){
        cout << -1 << endl;
        return 0;
      }
    }
  }
  if(n%2==1){
    front.pop_back();
  }
  reverse(back.begin(),back.end());
  cout << front + back << endl;
}