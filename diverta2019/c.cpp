#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;

  int ans = 0;
  int ba = 0;
  int b = 0;
  int a = 0;
  for (int i = 0; i < n; i++)
  {
    string s;
    cin >> s;
    for (int j = 0; j < s.size()-1; j++)
    {
      if(s[j]=='A'&&s[j+1]=='B') ans++;
    }

    if(s[0]=='B'&&s[s.size()-1]=='A') ba++;
    else if (s[0]=='B') b++;
    else if (s[s.size()-1]=='A') a++;    
  }

  if(ba==0){
    ans+=min(a,b);
  }
  else{
    if(a+b>0){
      ans+=ba+min(a,b);
    }
    else{
      ans+=ba-1;
    }
  }
  cout << ans << endl;
}