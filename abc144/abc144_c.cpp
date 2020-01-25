#include <bits/stdc++.h>
using namespace std;

int main(){
  long long n;
  cin >> n;

  int sqn = sqrt(n);
  long long sum = 1e15;
  for (int i = 1; i <= sqn; i++)
  {
    if(n%i == 0){
      long long sumi = i + n/(long long)i;
      sum = min(sum,sumi);
    }
  }
  cout << sum - 2 << endl;  
}