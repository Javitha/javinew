#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
int main()
{
    long n;
    int a[100];
    cin>>n;
    int i=0;
    while(n>0)
    {
        
        a[i]=n%2;
        n=n/2;
        i++;
    }
    for(int j=0;j<i;j++)
    {
        cout<<a[j];
    }
 return 0;   
}
