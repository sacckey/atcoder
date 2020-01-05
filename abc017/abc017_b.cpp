#include <bits/stdc++.h>
using namespace std;

int main(){
  string x;
  cin >> x;
  int len = x.size();

  if(x==""){
    puts("YES");
    return 0;
  }
  if(x[len-1]=='c'){
    puts("NO");
    return 0;
  }


  for (int i = 0; i < len; i++)
  {
    if(x[i]=='c' && x[i+1]=='h'){
      i++;
      continue;
    }
    if(!(x[i]=='o' || x[i]=='k' || x[i]=='u')){
      puts("NO");
      return 0;
    }
  }
  puts("YES");  
}