#include<stdio.h>
void main()
{

int num, pos,op, count=0;
printf("Enter a number:\n");
scanf("%d",&num);

L1:
printf("Enter the bit position:\n");
scanf("%d",&pos);

if(pos>=0 && pos<=31)
{

printf("Menu\n1)set\n2)clear\n3)complement\n");
printf("choose an option:\n");
scanf("%d",&op);

if(op==1)
{
num=num|1<<pos;
printf("%d\n",num);

}
else if(op==2)
{
num=num&~(1<<pos);
printf("%d\n",num);

}
else if(op==3)
{
num=num^1<<pos;
printf("%d\n",num);

}
else
printf("Enter vallid option...\n");
}
else
{
printf("Enter valid bit position...\n");
count++;
if(count<=2)
goto L1;

}






}
