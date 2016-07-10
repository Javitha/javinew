#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
int main()
{
  int a,b,c,res,fin;
  cin>>a>>b>>c;
  res=(a<b)?b:a;
  fin=(res<c)?c:res;
  cout<<fin;
  return 0;
}
