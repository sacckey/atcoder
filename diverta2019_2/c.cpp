#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;

  vector<long long> a;
  vector<long long> b;
  vector<pair<long long,long long>> anss;

  if(n==2){
    long long x,y;
    cin >> x >> y;
    cout << max(x,y)-min(x,y) << endl;
    cout << max(x,y) << " " << min(x,y) << endl; 
    return 0;
  }

  for (int i = 0; i < n; i++)
  {
    long long ab;
    cin >> ab;
    if(ab>=0) a.push_back(ab);
    else b.push_back(ab);
  }
  sort(a.begin(),a.end());
  sort(b.begin(),b.end());

  if(a.size()==0){
    a.push_back(b[b.size()-1]-b[0]);
    anss.push_back(make_pair(b[b.size()-1],b[0]));
    b.erase(b.begin());
    b.erase(b.end()-1);
  }
  if(b.size()==0){
    b.push_back(a[0]-a[a.size()-1]);
    anss.push_back(make_pair(a[0],a[a.size()-1]));
    a.erase(a.begin());
    a.erase(a.end()-1);
  }

  for (int i = 0; i < a.size()-1; i++)
  {
    anss.push_back(make_pair(b[0],a[i]));
    b[0]-=a[i];    
  }

  int maxa=a[a.size()-1];
  int lenb=b.size();
  for (int i = 0; i < lenb; i++)
  {
    anss.push_back(make_pair(maxa,b[i]));
    maxa-=b[i];
  }

  cout << maxa << endl;
  for(auto p:anss){
    cout << p.first << " " << p.second << endl;
  }

}