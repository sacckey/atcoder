#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<int> a1(n);
  vector<int> a2(n);

  for (int i = 0; i < n; i++)
  {
    cin >> a1[i];
  }
  for (int i = 0; i < n; i++)
  {
    cin >> a2[i];
  }

  int maxa=0,cnt=0;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j <= i; j++)
    {
      cnt+=a1[j];   
    }
    for (int k = i; k < n; k++)
    {
      cnt+=a2[k];
    }
    maxa=max(maxa,cnt);
    cnt=0;
  }
  
  cout << maxa << endl;
  
}