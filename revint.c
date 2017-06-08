#include<stdio.h>
int revdig(int num)
{
int revnum=0;
while(num>0)
{
revnum=revnum*10+num%10;
num=num/10;
}
return revnum;
}
int main()
{
int num=1234;
printf("%d",revdig(num);
getchar();
return 0;
}
