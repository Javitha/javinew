#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
int main()
{
    string a;
    getline(cin,a);
    int l;
    l=a.length();
    int count=0;
    for(int i=0;a[i]!='\0';i++)
    {
        
            count++;
            }
 
 cout<<count;   

    return 0;
}
