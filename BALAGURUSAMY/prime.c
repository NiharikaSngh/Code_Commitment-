#include<stdio.h>
int main(){
int i=1;
while(i<=200){
int n=2,cnt=0;
while(n<i){
if(i%n==0){
cnt++;
}
n++; }
if(cnt==0 && i!=1)
printf("%d\n",i);
i++;}
return 0;
}

/*prime /*numbers */ 
