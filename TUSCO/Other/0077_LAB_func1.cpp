#include "bits/stdc++.h"
using namespace std;
int sumEven(int);
int main()
{
  int n,s;
  //printf("Enter n :");
  cout << "Enter n:";
  scanf("%d",&n);
  s = sumEven(n);
  cout << "=" << s;
  return 0;
}
int sumEven(int x)
{
  cout << "Enter n:" << x << "\n";
  int i,total,round;
  total = 0;
  round = 0;
  for(i=0;i<x;i++)
  {
    total += round;
    if(i==0) printf("%d",round);
    else printf("+%d",round);
    round+= 2;
  }
  return(total);
}
