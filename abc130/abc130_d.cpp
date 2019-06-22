#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  long long k;
  cin >> n >> k;

  vector<long long> a(n);
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  long long tmp=0;
  int left=0,right=0;
  long long ans = 0;  
  for(int i = 0; i < n; i++)
  {
    while(right<n && tmp<k){
        tmp+=a[right];
        right++;
    }
    if(tmp>=k) ans += n-right+1;
    tmp-=a[i];
  } 
  cout << ans << endl;

}