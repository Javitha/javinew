#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
int i=0;
if(s[i]== '-')
    cout<<"NEGATIVE NUMBER"<<endl;
else if(s[i]=='0')
    cout<<"ZERO"<<endl;
else //if((s[i]!="0"")"&&(s[i]!="-"))
    cout<<"POSITIVE NUMBER";
    
    return 0;
}
