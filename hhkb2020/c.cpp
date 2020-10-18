#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;

  vector<int> vec(200010);
  int minv = 0;
  vector<int> anss;
  for (int i = 0; i < n; i++)
  {
    int p;
    cin >> p;
    vec[p]++;
    if(minv == p){
      for (int j = p; j < 200010; j++)
      {
        if(vec[j]==0){
          minv=j;
          break;
        }
      }
    }
    anss.push_back(minv);
  }
  for(int ans:anss) cout << ans << endl;
}