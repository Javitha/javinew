#include<iostream>
#include<cstring>
#include<string>
using namespace std;
int main()
{
    string a;
    getline(cin,a);
    int count=0;
    
    for(int i=0;a[i]!='\0';i++)
    {
        a[i]=tolower(a[i]);
    if((a[i]==97) ||(a[i]== 105 )||(a[i]==101) ||(a[i]== 111) ||(a[i]==117))
        count++;
    }
    cout<<"NUMBER OF VOWELS:"<<count<<endl;
    return 0;
    
}
