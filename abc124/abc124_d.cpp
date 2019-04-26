#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  int k;
  string s;
  cin >> n >> k >> s;

  vector<int> nums;

  int now = 1;
  int cnt=0;
  for(int i = 0; i < n; i++)
  {
      if(s[i]-'0'==now){
          cnt++;
      }
      else {
          nums.push_back(cnt);
          now=1-now;
          cnt=1;
      }
  }
  nums.push_back(cnt);
  if(nums.size()%2==0) nums.push_back(0);

  int tmp=0;
  int left=0,right=0;
  int ans = 0;  
  for(int i = 0; i < (int)nums.size(); i+=2)
  {
      int nextleft=i;
      while(left<nextleft){
          tmp-=nums[left];
          left++;
      }

      int nextright=min(i+2*k+1,(int)nums.size());
      while(right<nextright){
          tmp+=nums[right];
          right++;
      }
      ans = max(tmp,ans);
  } 

  cout << ans << endl;
}