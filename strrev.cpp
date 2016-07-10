#include<iostream>
#include<cstring>
#include<string>
using namespace std;
int main()
{
    string a;
    getline(cin,a);
    int l=a.length();
    for(int i=l-1;i>=0;i--)
        cout<<a[i];
    
    return 0;
    
}
