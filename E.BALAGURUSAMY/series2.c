#include<stdio.h>
int main(){

int n,i=1,sumven=0,sum,sumod=0,m=1,mul=1;
printf("Enter an integer\n");
scanf("%d",&n);


while(i<=n){
if(i%2!=0){
while(m<=i){
mul=mul*m;
m++;}
sumod=sumod+mul;}
i++;}

i=2;
while(i<=n){
sumven=sumven+i;
i=i+2;
}

printf("The result of this 1!+2+3!+4+5!+6+...+N terms series for the given value of n is:%d",sum=sumven+sumod);

}
