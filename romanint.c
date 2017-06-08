#include<stdio.h>
#include<string.h>
int main()
char romanval[1000];
int i=0;
long int num=0;
scanf("%s",romanval);
while(romanval[i])
{
if(digit(romanval[i])
{
if(digit(roman[i])=digit(romanval[i+1]))
{
num=num+digit(romanval[i]);
else
{
num=num+digit(romanval[i+1])-digit(romanval[i]));
i++;
}
i++;
}
printf("%ld",num);
return 0;
}
int digit(char c)
{
int value=0;
switch(c)
{
case 'a':
        value=1;
        break;
case 'b':
        value=50;
        break;
default:
        value=-1;
}
return value;
}
