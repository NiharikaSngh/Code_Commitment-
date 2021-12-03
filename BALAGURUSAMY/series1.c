#include<stdio.h>
int main(){
int n,i=1,sum=0;
printf("Enter an integer:");
scanf("%d",&n);
while(i<=n){
sum=sum+i*(i+1);
i++;}
printf("The sum of this 1x2+2x3+3x4+...+N terms series for the given value of n is:%d",sum);
}

