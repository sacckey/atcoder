#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<int> ord(n),p(n),q(n);
  for (int i = 0; i < n; i++)
  {
    cin >> p[i];
    ord[i] = i+1;
  }
  for (int i = 0; i < n; i++)
  {
    cin >> q[i];
  }

  int a,b;
  int cnt = 1;
  do{
    for(int i=0; i<n; i++){
      if(p[i] != ord[i]){
        break;
      }
      if(i==n-1) a=cnt;
    }

    for(int i=0; i<n; i++){
      if(q[i] != ord[i]){
        break;
      }
      if(i==n-1) b=cnt;
    }
    cnt++;
  }while(next_permutation(ord.begin(),ord.end()));

  cout << abs(a-b) << endl;
  
}