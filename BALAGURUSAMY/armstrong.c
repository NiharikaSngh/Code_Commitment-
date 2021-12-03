#include<stdio.h>
int main(){
printf("Enter an integer:");
int n,q,rem,arm=0,num;
scanf("%d",&num);
n=num;
while(n!=0){
q=n/10;
rem=n%10;
arm=arm+rem*rem*rem;
n=q;}
if(arm==num)
printf("The number is an Armstrong number.");
else
printf("The number is not an Armstrong number.");
}
