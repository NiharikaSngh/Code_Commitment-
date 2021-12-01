#include<stdio.h>
int main(){
int x1,x2,x3,y1,y2,y3;
float m1,m2,m3;
printf("Enter 3 points with x and y coordinates only:");
scanf("%d %d %d %d %d %d",&x1,&y1,&x2,&y2,&x3,&y3);
m1=(y2-y1)/(x2-x1);
m2=(y3-y1)/(x3-x1);
m3=(y3-y2)/(x3-x2);
printf("m1:%.2f,m2:%.2f,m3:%.2f",m1,m2,m3);
if(m1==m2 && m2==m3)
printf("\nYES THE POINTS ARE COLLINEAR.");
else
printf("\nNO THEY ARE NOT COLLINEAR.");
return 0;
}



