#include<iostream>
#include<cstring>
#include<string>
using namespace std;
int main()
{
    int n,i=0,a[100],sum=0;
    cin>>n;
    while(n>0)
    {
        a[i]=n%10;
        n=n/10;
        i++;
    }
    for(int k=0;k<i;k++)
    {
        sum+=(a[k]*a[k]);
    }
    cout<<sum;
    return 0;
    
}
