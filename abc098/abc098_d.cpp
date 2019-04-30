#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<int> a(n);

  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  
  long long ans=0;
  int right=0,sum=0;
  for(int left=0;left<n;left++){
    while(right<n && (sum+a[right])==(sum^a[right])){
      sum+=a[right];
      right++;
    }
    ans+=right-left;
    sum-=a[left];
  }
  cout << ans << endl;  
}