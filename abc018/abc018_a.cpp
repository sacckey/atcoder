#include <bits/stdc++.h>
using namespace std;

int main(){
  int a,b,c;
  vector<int> vec(3);
  cin >> a >> b >> c;
  vec[0] = a;
  vec[1] = b;
  vec[2] = c;

  sort(vec.begin(),vec.end());
  for(int x:{a,b,c}){
    if(x==vec[0]) cout << 3 << endl;
    if(x==vec[1]) cout << 2 << endl;
    if(x==vec[2]) cout << 1 << endl;
  }  
}