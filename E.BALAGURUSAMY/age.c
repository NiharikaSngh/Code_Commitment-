//hard
#include<stdio.h>
int main(){
int D,Y,d,y,day=0,yr,mth,M,m,i,k,cnt=0;
printf("Enter your DOB:");
scanf("%d %d %d",&D,&M,&Y);
//printf("%d %d %d",D,M,Y);
printf("Enter today's date:");
scanf("%d %d %d",&d,&m,&y);
//printf("%d %d %d",d,m,y);
if(m<M &&y>=Y)
yr=y-Y-1;
else
yr=y-Y;
if(m>=M)
mth=yr*12+(m-M-1);
else
mth=yr*12+(12-M)+m;
if(m>M){
i=M+1;
while(i<m){
switch(i){
case 1:day+=31;
       break;
case 2:if(Y%4==0)
         day+=29;
       else
         day+=28;
       break;
case 3:day+=31;
       break;
case 4:day+=30;
       break;
case 5:day+=31;
       break;
case 6:day+=30;
       break;
case 7:day+=31;
       break;
case 8:day+=31;
       break;
case 9:day+=30;
       break;
case 10:day+=31;
       break;
case 11:day+=30;
       break;
case 12:day+=31;
       break;
default:printf("\nThere is some major error...");
       break;
printf("\nd:%d,i:%d",day,i);}
i++;}}
switch(M){
case 1:day+=(31-D);
       break;
case 2:if(Y%4==0)
         day+=(29-D);
       else
         day+=(28-D);
       break;
case 3:day+=(31-D);
       break;
case 4:day+=(30-D);
       break;
case 5:day+=(31-D);
       break;
case 6:day+=(30-D);
       break;
case 7:day+=(31-D);
       break;
case 8:day+=(31-D);
       break;
case 9:day+=(30-D);
       break;
case 10:day+=(31-D);
       break;
case 11:day+=(30-D);
       break;
case 12:day+=(31-D);
       break;
default:printf("\nThere is some major error...");
       break;
printf("\nd:%d,M:%d",day,M);}
day+=yr*365+d;
k=Y+1;
while(k<y){
if(k%4==0){
cnt++;
//printf("\ncnt:%d",cnt);
k++;
}}
if(Y%4==0 && M<2)
cnt+=1;
day+=cnt;
printf("\nYou are %d years, %d months and %d days old",yr,mth,day);
return 0;
}
