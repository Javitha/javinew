#include<iostream>
#include<cstring>
#include<string>
using namespace std;
int main()
{
    int n,i,a[100],sum=0;
    while(n>0)
    {
        a[i]=n%10;
        n=n/10;
    }
    for(int k=0;k<i;k++)
    {
        if(a[k]%2!=0)
        {
            sum+=a[k];
        }
    }
    if(sum==0)
        cout<<"-1";
    else
        cout<<"1";
    return 0;
    
}
