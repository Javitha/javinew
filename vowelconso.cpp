#include<iostream>
#include<cstring>
#include<string>
using namespace std;
int main()
{
    char a;
    cin>>a;
    tolower(a);
    int c=a;
    if((c==97) ||(c== 105 )||(c==101) ||(c== 111) ||(c==117))
        cout<<"Its a Vowel";
    else
        cout<<"Its a consonant";
    return 0;
    
}
