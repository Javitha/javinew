#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
int main()
{
  int n,i=0;
  int a[50];
  cin>>n;
  while(n>0)
  {
      a[i]=n%10;
      n=n/10;
      i++;
  }
   cout<<"Number of Digits:"<<i<<endl;
  return 0;
}
