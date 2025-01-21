#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
int bin,i=0,s=0,r;
printf("Enter a binary number : \n");
scanf("%d",&bin);
while(bin!=0)
{
r=bin%10;
s=r*s+pow(2,i);
bin=bin/10;
i++;
}
printf("Equivalent in decimal:%d \n",s);
system("pause");
}