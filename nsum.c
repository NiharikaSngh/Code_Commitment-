#include<stdio.h>
int main(){
int N,I=1,SUM=0;
printf("Enter an integer");
scanf("%d",&N);
while(I<=N){
SUM=SUM+I;
I=I+1;}
printf("SUM of 1st n natural nos :%d",SUM);
}
