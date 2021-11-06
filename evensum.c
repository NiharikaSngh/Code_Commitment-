#include<stdio.h>
int main(){
int n,sum=0,i=1,num;
printf("How many numbers do u want to enter:");
scanf("%d",&n);
while(i<=n){
if(i==1){
printf("Enter the 1st number");
scanf("%d",&num);}
else if(i==2){
printf("Enter the %dnd number:",i);
scanf("%d",&num);}
else if(i==3){
printf("Enter the %drd number:",i);
scanf("%d",&num);}
else{
printf("Enter the %dth number:",i);
scanf("%d",&num);}
if(num%2==0){
sum=sum+num;}
i=i+1;}
printf("Sum of only the even nos: %d",sum);
return 0;
}


