#include <bits/stdc++.h>
using namespace std;

void solveA(){
  int a,b,c,d,e,k;
  cin >> a >> b >> c >> d >> e >> k;

  if(e-a > k){
    cout << ":(" << endl;
  }
  else{
    cout << "Yay!" << endl;
  }
}
void solveB(){
  int a[5];
  cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4];

  int min = 9;
  int minad = 0;

  for(int i=0;i<5;i++){
    if(a[i]%10 < min && a[i]%10 != 0){
      min = a[i]%10;
      minad = i;
    }
  }
  int ans = 0;
  for(int i=0;i<5;i++){
    if(i==minad || a[i]%10==0){
      ans += a[i];
    }
    else{
      ans = ans + 10-a[i]%10 + a[i];
    }
  }
  
  cout << ans << endl;

}
void solveC(){
  long long n;
  vector<long long> a(5);
  cin >> n >> a[0] >> a[1] >> a[2] >> a[3] >> a[4];

  sort(a.begin(),a.end());

  cout << (n+a[0]-1)/a[0] + 4 << endl;

}

void solveD(){
  long long x,y,z,k;
    cin >> x >> y >> z >> k;
    vector<long long> a(x),b(y),c(z),ans;

    for(long long i = 0; i < x; i++) cin >> a[i];
    for(long long i = 0; i < y; i++) cin >> b[i];
    for(long long i = 0; i < z; i++) cin >> c[i];
    
    sort(a.begin(),a.end(),greater<long long>());
    sort(b.begin(),b.end(),greater<long long>());
    sort(c.begin(),c.end(),greater<long long>());

    for(long long i = 0; i < x; i++)
    {
        for(long long j = 0; j < y; j++)
        {
            if ((i+1)*(j+1)>k) break;
            for(long long l = 0; l < z; l++)
            {
                if ((i+1)*(j+1)*(l+1)>k) break;
                ans.push_back(a[i]+b[j]+c[l]);
            }     
        }       
    }
    
    sort(ans.begin(),ans.end(),greater<>());

    for(long long i = 0; i < k; i++)
    {
        cout << ans[i] << endl;
    }
}

int main(){
  solveC();
}
