#include<iostream>
#include<string>
#include<sstream>
#include<cstdio>
#include<cstring>
using namespace std;
using std::string;
int main()
{
 int T,y,a,b,c,d,e,x,o,ok,m,dd,P,y1,odd,i,month;
 scanf("%d-%d-%d",&dd,&month,&y);
 a=y-1;
 b=a%400;
 ok=b/100;//1
 if((ok>=1)&&(ok<2)){o=5;}
 else if((ok>=2)&&(ok<3)){o=3;}
 else if((ok>=3)&&(ok<4)){o=1;}
 else{o=0;}
 c=b%100;
 d=c/4;
 e=c-d;//57
 x=((d*2)+e)%7;
 y1=(o+x)%7;//0
if(y%4==0){m=29;}
else{m=28;}
if(month==1){P=dd;}
else if(month==2){P=(31+dd);}
else if(month==3){P=(31+m+dd);}
else if(month==4){P=(31+m+31+dd);}
else if(month==5){P=(31+m+31+30+dd);}
else if(month==6){P=(31+m+31+30+31+dd);}
else if(month==7){P=(31+m+31+30+31+30+dd);}
else if(month==8){P=(31+m+31+30+31+30+31+dd);}
else if(month==9){P=(31+m+31+30+31+30+31+31+dd);}
else if(month==10){P=(31+m+31+30+31+30+31+31+30+dd);}
else if(month==11){P=(31+m+31+30+31+30+31+31+30+31+dd);}
else if(month==12){P=(31+m+31+30+31+30+31+31+30+31+30+dd);}
else {P=0;}
odd=(P+y1)%7;
if(odd==0){cout<<"\nThe Day is SUNDAY\n";}
else if(odd==1){cout<<"\nThe Day is MONDAY\n";}
else if(odd==2){cout<<"\nThe Day is TUESDAY\n";}
else if(odd==3){cout<<"\nThe Day is WEDNESDAY\n";}
else if(odd==4){cout<<"\nThe Day is THURSDAY\n";}
else if(odd==5){cout<<"\nThe Day is FRIDAY\n";}
else if(odd==6){cout<<"\nThe Day is SATURDAY\n";}
return 0;
}

