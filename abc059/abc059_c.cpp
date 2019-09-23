#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) cin >> a[i];
  
  long long sum = 0;
  long long ans1 = 0;
  for (int i = 0; i < n; i++)
  {
    sum+=a[i];
    if(i%2==0){
      if(sum>=0){
        ans1+=sum+1;
        sum=-1;
      }
    }
    else{
      if(sum<=0){
        ans1+=1-sum;
        sum=1;
      }
    }
  }

  sum = 0;
  long long ans2 = 0;
  for (int i = 0; i < n; i++)
  {
    sum+=a[i];
    if(i%2==0){
      if(sum<=0){
        ans2+=1-sum;
        sum=1;
      }
    }
    else{
      if(sum>=0){
        ans2+=sum+1;
        sum=-1;
      }
    }
  }
  cout << min(ans1,ans2) << endl;  
}