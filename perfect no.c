#include <stdio.h>
 main(){
 int sum=0,n,i;
 scanf("%d",&n);
 for(i=1;i<n;i++){
 if(n%i==0)
   sum=sum+i;
  }
 if(sum==n){
  printf("the given number is a perfect number\n");
 }
 else {
 printf("the given number is not a perfect number");}
 }