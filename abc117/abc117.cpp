#include <bits/stdc++.h>
using namespace std;

void solveA(){
  double t,x;
  cin >> t >> x;
  printf("%.10lf\n",t/x);
}
void solveB(){
  int n;
  cin >> n;
  int l[n];
  int sum = 0;
  

  for(int i=0;i<n;i++){
    cin >> l[i];
    sum += l[i];
  }

  sort(l,l+n);
  int maxl = l[n-1];

  if (maxl < sum - maxl){
    cout << "Yes" << endl;
  }
  else{
    cout << "No" << endl;
  }

  
}

void solveC(){
  int n,m,s;
  cin >> n >> m;
  vector<int> vec;

  for(int i=0;i<n;i++){
    cin >> s;
    vec.push_back(s);
  }

  sort(vec,vec+n);

  for(int i=0;i<m;i++){
    if(vec[1]-vec[0] >= vec[vec.size()-1]-vec[vec.size()-2]){
      remove(vec,0);
    }
  }
  
  if (maxl < sum - maxl){
    cout << "Yes" << endl;
  }
  else{
    cout << "No" << endl;
  }
}
void solveD(){
}

int main(){
  solveB();
}
