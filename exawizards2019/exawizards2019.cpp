#include <bits/stdc++.h>
using namespace std;

void solveA(){
  int a,b,c;
  cin >> a >> b >> c;

  if (a==b && b == c){
    cout << "Yes" << endl;
  }
  else{
    cout << "No" << endl;
  }
}
void solveB(){
  int n;
  string s;
  int r=0,b=0;
  cin >> n >> s;

  for(int i = 0; i< n ; i++){
    if(s[i]=='R'){
      r++;
    }
    else{
      b++;
    }
  }

  if (r>b){
    cout << "Yes" << endl;
  }
  else{
    cout << "No" << endl;
  }
  
}
int n,q;
string s;
vector<char> t(1000000);
vector<char> d(1000000);

int fun(int k){
  for(int i=0;i<q;i++){
    if (k==-1 || k==n){
      break;
    }
    if(t[i]==s[k]){
      if(d[i]=='L'){
	k--;
      }
      else{
	k++;
      }
    }
  }
  return k;
}

void solveC(){
  cin >> n >> q >> s;

  for(int i=0;i<q;i++){
    cin >> t[i];
    cin >> d[i];
  }

  int left = -1;
  int right = n;
  while(right-left > 1){
    int center = (left+right)/2;
    if(fun(center)==-1){
      left = center;
    }
    else{
      right = center;
    }
  }
  int aleft = right;

  left = -1;
  right = n;
  while(right-left > 1){
    int center = (left+right)/2;
    if(fun(center)==n){
      right = center;
    }
    else{
      left = center;
    }
  }
  int aright = left;

  int ans = aright - aleft + 1;
  cout << ans << endl;
  
}

int main(){
  solveC();
}
