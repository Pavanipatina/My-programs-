#include <stdio.h>
#include <math.h>
main() {
int n,r,t,v,sum, c = 0 ;
scanf("%d",&n);
t=n;
v=t;
while (n>0)
{
n/=10;
c++;
}
printf("no of digits %d\n",c);
for ( sum = 0 ; t > 0 ; t = t / 10 )
{
r = t%10 ;
sum=sum+pow(r,c);
}
printf("%d\n",sum);
if(sum==v)
{
printf("yes");
}
else
printf("no");
}