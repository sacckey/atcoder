#include <bits/stdc++.h>
using namespace std;

// int main(){
//   string s;
//   cin >> s;
//   int n = s.size();

//   char prev = s[0];
//   string ans = "";
//   int cnt = 1;
//   for (int i = 1; i < n; i++)
//   {
//     if(s[i]==prev){
//       cnt++;
//     }
//     else{
//       ans += prev;
//       ans += to_string(cnt);
//       prev = s[i];
//       cnt = 1;
//     }
//   }
//   ans += prev;
//   ans += to_string(cnt);

//   cout << ans << endl;  
// }

int main(){
  string s;
  cin >> s;
  int n = s.size();
  int seek = 0;
  string ans = "";

  while(seek<n){
    int start = seek;
    while(s[start] == s[seek]) seek++;
    ans+=s[start];
    ans+=to_string(seek-start);
  }
  cout << ans << endl;  
}