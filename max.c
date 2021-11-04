#include<stdio.h>
int main(){
int A,B,MAX;
printf("Enter 2 numbers");
scanf("%d%d",&A,&B);
if(A>B)
MAX=A;
else
MAX=B;
printf("The max is: %d",MAX);
return 0;
}
