#include<stdion.h>
#include<math.h>
int main()
{
float a,b,h,n,m[20],s[20],sum=o,igtl;
int i=0;
scanf("%f%f%f",&a,&b,&n);
for(i=0;i<=n;i++)
{
scanf("%f",&m[i]);
}
for(i=0;i<=n;i++)
{
scanf("%f",&s[i]);
}
h=(b-a)/n;
a=m[0];
b=m[n];
for(i=0;i<=(n-2);i++)
{
m[i]=m[i]+h;
if(i%2==0)
{
sum=sum+4*s[i];
}
else
{
sum=sum+2*s[i];
}
itgl=sum*(h/3);
printf("%f",igtl);
return 0;
}
