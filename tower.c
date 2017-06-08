# include<stdio.h>
void towers(int,char,char,char);
int main(){
int num;
printf("Disks");
scanf("%d",&num);
printf("Tower of hanoi:\n");
towers(num,'n','c','B');
return 0;
}
void towers(int num,char fromabc,char toabc,char auxacb)
{
if(num==1)
{
printf("Move disk 1 from abc %c to abc %c",fromabc,toabc);
return;
}
towers(num-1,fromabc,auxabs,toabc);
printf("Move disk %d from abc %c to %c,num,fromabc,toabc);
towers(num-1,auxabc,toabc,fromabc);
}
