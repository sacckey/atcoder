#include <bits/stdc++.h>
using namespace std;

int main(){
  vector<int> vec(4);
  for (int i = 0; i < 4; i++)
  {
    vec[i]=i;
  }

  for (auto itr = vec.begin(); itr < vec.end(); itr++)
  {
    cout << *itr << endl;
  }
  
  
}