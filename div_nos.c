
    #include <stdio.h>

main() {

int x,y,a,b,i;
printf("the numbers should be in between which numbers");

scanf("%d %d",&x,&y);
printf("the number should be divisible by which numbers");
scanf("%d %d",&a,&b);

for(i=x;i<=y;i++)

{

if(i%a==0&&i%b==0)

printf("%d\n",i);}
}

