#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,l;
  cin >> n >> l;
  int sum=0;
  int mini=500;
  for (int i = 1; i < n+1; i++)
  {
    sum+=i+l-1;
    if(abs(mini)>abs(i+l-1)) mini=i+l-1;
  }
  cout << sum-mini << endl;
  
}