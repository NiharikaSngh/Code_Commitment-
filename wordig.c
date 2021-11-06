#include<stdio.h>
int main(){
int n,q,rem;
printf("Enter an integer");
scanf("%d",&n);
while(n!=0){
q=n/10;
rem=n%10;
printf("\nrem :%d",rem);
switch(rem){
case 1:printf("\nThe digits are:one (%d)",rem);
break;
case 2:printf("\nThe digits are:two (%d)",rem);
break;
case 3:printf("\nThe digits are:three (%d)",rem);
break;
case 4:printf("\nThe digits are:four (%d)",rem);
break;
case 5:printf("\nThe digits are:five (%d)",rem);
break;
case 6:printf("\nThe digits are:six (%d)",rem);
break;
case 7:printf("\nThe digits are:seven (%d)",rem);
break;
case 8:printf("\nThe digits are:eight (%d)",rem);
break;
case 9:printf("\nThe digits are:nine (%d)",rem);
break;
case 0:printf("\nThe digits are:zero (%d)",rem);
break;
default:printf("\nThere is some error...");
break;}
n=q;}
return 0;
}

