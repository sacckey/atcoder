#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,m;
  cin >> n >> m ;
  
  vector<vector<long long>> vec(3,vector<long long>(n));
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      cin >> vec[j][i];
    }
  }

  long long ans=0;
  for (int i = 0; i < 8; i++)
  {
        vector<long long> anslist(n);
        for (int j = 0; j < n; j++)
        {
          long long sum=0;
          for (int k = 0; k < 3; k++)
          {
            if((i/(1<<k))%2==0){
              sum += vec[k][j];
            }
            else{
              sum -= vec[k][j];
            }
          }
          anslist[j]=sum;
        }
        sort(anslist.begin(),anslist.end(),greater<long long>());
        long long res=0;
        for (int v = 0; v < m; v++)
        {
          res+=anslist[v];
        }
        ans=max(res,ans);
  }
  cout << ans << endl;  
}