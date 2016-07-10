#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
int main()
{
  int a,b;
  cin>>a;
  cin>>b;
  cout<<"Before Swapping:"<<a<<"\t"<<b<<endl;
  a=a^b;
  b=a^b;
  a=a^b;
  cout<<"After Swapping:"<<a<<"\t"<<b<<endl;
  return 0;
}
