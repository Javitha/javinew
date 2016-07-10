#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main()
{
    int sum=0,odd=0;
    for(int i=1;i<=15;i++)
        sum+=i;
    for(int i=15;i<=45;i+=2)
        odd+=i;
    cout<<"Sumfrom 1-15:"<<sum<<endl;
    cout<<"Odd sum:"<<odd<<endl;
    return 0;
}
