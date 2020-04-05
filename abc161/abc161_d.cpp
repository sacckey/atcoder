#include <bits/stdc++.h>
using namespace std;

int main(){
  int k;
  cin >> k;

  queue<long long> que;
  for (long long i = 1; i <= 9; i++) que.push(i);

  int count = 0;
  long long ans;
  while(count!=k){
    long long now = que.front();
    que.pop();
    int d = now%10;
    if(d!=0) que.push(now*10+d-1);
    que.push(now*10+d);
    if(d!=9) que.push(now*10+d+1);

    ans = now;
    count++;
  }
  cout << ans << endl;
  
}