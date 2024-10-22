#include<stdio.h>
#include<stdlib.h>
# define MAX 50
int queue[MAX],front=-1,rear=-1;
void enqueue(){
 int n;
 if(rear==MAX-1)
 {
 printf("queue overflow");
 return;
}
printf("enter the element to be enqueued");
scanf("%d",&n);
if(front==-1)
{
 front=0;
 }
 rear++;
queue[rear]=n;

printf("%d enqueued to the queue\n",n);
}

void dequeue(){
if(front==-1||front>rear)
 {
 printf("queue underflow\n");
 return;
}

printf(" dequeued element:%d\n",queue[front]);
front++;
if(front>rear){
front=rear=-1;
}
}
void display(){
int i;
if(front==-1)
{
  printf("queue underflow \n");
  return;
}
printf("queue elements are");
for(i=front;i<=rear;i++)
{
  printf("%d",queue[i]);
  }
  printf("\n");
  }
  

int main()
{

int ch;
while(1)
{
   printf("Queue menu\n");
   printf("1-enqueue\n");
   printf("2-Dequeue\n");
   printf("3-display\n");
   printf("4-exit\n");
   printf("enter your choice");
   scanf("%d",&ch);
   switch(ch)
   {
   case 1:
   enqueue();
   break;
    case 2:
   dequeue();
   break;
    case 3:
   display();
   break;
    case 4:
   exit(0);
   default:
     printf("invalid choice,please try again");
   }
   }
   }
