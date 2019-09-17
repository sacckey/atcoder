#include <bits/stdc++.h>
using namespace std;

int main(){
  long long H,W;
  cin >> H >> W;

  long long ans = 10000000000;
  for (int i = 0; i < 2; i++)
  {
    for (long long h = 1; h < H; h++)
    {
      long long s1 = max({h*W,(H-h)/2*W,(H-h-(H-h)/2)*W}) - min({h*W,(H-h)/2*W,(H-h-(H-h)/2)*W});
      long long s2 = max({h*W,W/2*(H-h),(H-h)*(W-W/2)}) - min({h*W,(W/2)*(H-h),(H-h)*(W-W/2)});
      ans = min({ans,s1,s2});
    }
    swap(H,W);
  }
  cout << ans << endl;
}