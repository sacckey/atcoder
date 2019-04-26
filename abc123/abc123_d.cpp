#include <bits/stdc++.h>
using namespace std;

int main(){
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