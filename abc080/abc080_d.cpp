#include <bits/stdc++.h>
using namespace std;

int main(){
  int N,C;
  cin >> N >> C;
  vector<tuple<int,int,int>> tpl(N);
  for (int i = 0; i < N; i++)
  {
    int s,t,c;
    cin >> s >> t >> c;
    s--;
    tpl[i]=make_tuple(c,s,t);
  }
  sort(tpl.begin(),tpl.end());

  vector<vector<pair<int,int>>> p(C+1);
  for (int i = 0; i < N; i++)
  {
    int ch = get<0>(tpl[i]);
    int left = get<1>(tpl[i]);
    int right = get<2>(tpl[i]);
    int j = i+1;

    while(ch==get<0>(tpl[j]) && j<N){
      if(right>=get<1>(tpl[j])){
        right=get<2>(tpl[j]);
        j++;
      }
      else break;
    }
    i=j-1;
    p[ch].push_back(make_pair(left,right));
  }

  vector<int> imos(100010,0);
  for(auto pv:p){
    for(auto s:pv){
      imos[s.first]++;
      imos[s.second]--;
    }
  }

  vector<int> anss(100010,0);
  int tmp = 0;
  for (int i = 0; i <= 100010; i++)
  {
    anss[i] = imos[i] + tmp;
    tmp = anss[i];
  }
  sort(anss.begin(),anss.end());
  reverse(anss.begin(),anss.end());
  
  cout << anss[0] << endl;
}