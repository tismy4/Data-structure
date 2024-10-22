#include<stdio.h>
#include<stdlib.h>
#define MAX 50
int stack[MAX],top=-1;
void push()
{
int n;
if(top==MAX-1)
{
  printf("stack overflow");
  return;
  }
  printf("enter the element to be pushed\n");
  scanf("%d",&n);
  top++;
  stack[top]=n;
  printf("%d pushed to the stack\n",n);
}

void pop(){
 if(top==-1){
 printf("stack underflow");
 return;
 }
 printf("popped element:%d\n",stack[top]);
 top--;
 }
 
void display(){
int i;
if(top==-1)
{
printf("stack empty");
}
printf("stack elements are\n");
for(i=top;i>=0;i--)
{
printf("%d",stack[i]); 

}
}

int main(){
int ch;
while(1){
printf("stack menu\n");
printf("1-push\n");
printf("2-pop\n");
printf("3-display\n");
printf("4-exit\n");
printf("enter your choice\n-");
scanf("%d",&ch);
switch(ch){
case 1:
 push();
 break;
case 2:
 pop();
 break;
case 3:
 display();
 break;
case 4:
 exit(0);
 default:
  printf("wrong choice plz enter again");   
}
}
return 0;
}


