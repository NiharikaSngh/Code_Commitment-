//Implementation of stack using array 
#include<stdio.h>
#define MAX 100 //Using macro to assign maximum value of stack size
//prototyping or declaring the functions
void push();
void pop();
void display();
void SIZE();
//static const MAX=5;
int num,stack[MAX],top=-1;     //variable definition
int main(){
//SIZE();
do{ 
printf("\n***Stack Menu ***");
printf("\n1.Push\n2.Pop\n3.Display\n4.Exit\n5.Change stack_size");
printf("\nChoose an option from 1-4:");
scanf("%d",&num);
switch(num)
{
case 1:push();                        //function is being called
break;
case 2:pop();
break;
case 3:display();
break;
case 4:printf("\n\tExit Point!!");
break;
//case 5:SIZE();
//break;
default:printf("\nWrong choice!!Enter something valid i.e 1/2/3/4");
}
}
while(num!=4); //Infinite loop ends when choice entered is four
return(0);
}
//void SIZE(){
//printf("Enter stack size");
//scanf("%d",MAX);}
void push(){                //function header:datatype void as called func recieves no input from calling                            program and returns any value 
int val;
if(top==MAX-1){             //check whether stack is full
printf("\nStack is full!!");}
else{
printf("\nEnter an element to push:");
scanf("%d",&val);
top=top+1;                   //increment of the top pointer
stack[top]=val;}            //assign input value to array index pointed by top pointer
}
void pop(){
if(top==-1){                  //if top pointer is at index -1 then stack is empty
printf("\nStack is empty!!");}     
else{
printf("\nPopped or deleted element is: %d",stack[top]);  //print topmost element
top=top-1;}                   //decrement of top pointer to that index preceding the popped element
}
void display(){
int i;
if(top==-1){
printf("\nStack is empty!!");}  
else{
for(i=top;i>=-5;--i)    //print elements stored in index -5 to the top
printf("\nStack is stack[%d]:%d\n",i,stack[i]);}
}
