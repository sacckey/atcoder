#include <bits/stdc++.h>
using namespace std;

int main(){
  int a,b,c,d,e,f;
  cin >> a >> b >> c >> d >> e >> f;

  int s=0,w=a*100;
  for (int i = 0; 100*a*i <= f; i++)
  {
    for (int j = 0; 100*(a*i+b*j) <= f; j++)
    {
      for (int k = 0; 100*(a*i+b*j) + c*k <= f; k++)
      {
        for (int l = 0; 100*(a*i+b*j) + c*k + d*l <= f; l++)
        {
          int sumw = 100*a*i + 100*b*j;
          int sums = c*k+d*l;

          if(sumw+sums>f || sumw==0) break;
          if((double)sums/(sums+sumw) > (double)s/(s+w)){
            if(sumw*e/100 >= sums){
              s = sums;
              w = sumw;
            }
          }
        }
      }
    }
  }
  cout << s+w << " " << s << endl;
  
}