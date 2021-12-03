#include<stdio.h>
int main(){
int n,sum=0,i=1;
printf("Enter an integer:");
scanf("%d",&n);
while(i<=n){
if(i%2!=0){
sum=sum+i*i;}
i++;}
printf("The sum of squares of 1st %d odd natural nos:%d",n,sum);
return 0;
}
