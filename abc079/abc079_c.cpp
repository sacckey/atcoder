#include <bits/stdc++.h>
using namespace std;

int main(){
  string n;
  cin >> n;

  vector<int> a(4);
  a[0]=n[0]-'0';
  a[1]=n[1]-'0';
  a[2]=n[2]-'0';
  a[3]=n[3]-'0';

  vector<int> op(3);
  for (int bit = 0; bit < (1<<3); bit++)
  {
    int ans=a[0];
    for (int i = 0; i < 3; i++)
    {
      if((1<<i)&bit){
        ans+=a[i+1];
        op[i]=1;
      }
      else {
        ans-=a[i+1];
        op[i]=0;
      }
    }
    if(ans==7) break;    
  }

  for (int i = 0; i < 3; i++)
  {
    cout << a[i];
    if(op[i]) cout << '+';
    else cout << '-';
  }
  cout << a[3] << "=7" << endl;
}