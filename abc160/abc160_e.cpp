#include <bits/stdc++.h>
using namespace std;

int main(){
  int x,y,a,b,c;
  cin >> x >> y >> a >> b >> c;
  vector<int> p(a),q(b);
  priority_queue<int> r;
  for (int i = 0; i < a; i++) cin >> p[i];
  for (int i = 0; i < b; i++) cin >> q[i];
  for (int i = 0; i < c; i++){
    int ri;
    cin >> ri;
    r.push(ri);
  }

  sort(p.begin(),p.end());
  sort(q.begin(),q.end());
  reverse(p.begin(),p.end());
  reverse(q.begin(),q.end());

  vector<int> anss;
  long long ans = 0;
  for (int i = 0; i < x; i++){
    anss.push_back(p[i]);
    ans+=p[i];
  }
  for (int i = 0; i < y; i++){
    anss.push_back(q[i]);
    ans+=q[i];
  }
  sort(anss.begin(),anss.end());
  
  for (int i = 0; i < x+y; i++)
  {
    if(r.empty()) break;
    int mu = r.top();
    r.pop();
    if(anss[i]<mu){
      ans-=anss[i];
      ans+=mu;
    }
    else break;
  }
  cout << ans << endl;  
}