#include <bits/stdc++.h>
using namespace std;

int main(){
  long long x;
  cin >> x;
  long long a=0;
  long long b=0;
  for (long long i = -1000; i < 1000; i++)
  {
    for (long long j = -1000; j < 1000; j++)
    {
      long long ai = i*i*i*i*i;
      long long bj = j*j*j*j*j;
      if(ai-bj==x){
        a = i;
        b = j;
        break;
      }
    }
  }
  cout << a << " " << b << endl;  
}