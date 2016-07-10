#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
int main()
{
  int n;
  int sum=0;
  cin>>n;
  for(int i=1;i<=n;i++)
  {
      sum+=i;
  }
 cout<<"Sum of Natural numbers upto %d:"<<n<<"\t"<<sum<<endl;
  return 0;
}
