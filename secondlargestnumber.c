#include<stdio.h>
int main()
{
int a[50];
int n,i,small,s_small;
for(i=0;i<n;i++)
{
scanf("%d",&n);
}
small=s_small=a[0];
for(i=1;i<n;i++)
{
s_small=small;
small=a[i];
}
else if(s_small>a[i]&&a[i]!=small)
{
s_small=a[i];
}
}
getch();
}
