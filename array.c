#include<stdio.h>
#include<stdlib.h>
int a[30];
 int n,i;
 void display()
{
  if(n==0)
  {
    printf("array empty");
    }
    else
    {
    printf("the array is");
    for(int i=0;i<n;i++)
    {
     printf("%d\t",a[i]);
     }
     }
     }
 void create()
 {
   printf("enter limt");
   scanf("%d",&n);
   printf("enter the elements of array");
   for(i=0;i<n;i++)
   {
      scanf("%d",&a[i]);
      }
  }
void insert()
{
  int i,pos,elem;
  if(n>=50){
  printf("array is full,cannot insert more elements.\n");
  return;
  }
  printf("enter the position(0 to %d) where you want to insert and the value:",n);
  scanf("%d%d",&pos,&elem);
  if(pos<0||pos>n)
  {
  printf("invalid position\n");
  return;
  }
  n++;
  for(i=n-2;i>=pos;i--)
  {
  a[i+1]=a[i];
  }
  a[pos]=elem;
  printf("array after insertion:\n");
  display();
  }
void delete()
{
   int i,pos;
   if(n==0)
   {
    printf("array is empty,nothing to delete.\n");
    return;
    }
   printf("enter the position(0 to %d) of the element to be deleted: ",n-1);
   scanf("%d",&pos);
   if(pos<0||pos>=n){
   printf("invalid position\n");
   }
   int elem =a[pos];
   for(i=pos;i<n-1;i++)
   {
    a[i]=a[i+1];
    }
    n--;
    printf("deleted element:%d\n",elem);
    printf("array after deletion:\n");
    display();
    } 
     
void main()
{

   int c;
   create();
   while(1)
   {
    printf("\n 1.insert"); 
    printf("\n 2.delete"); 
    printf("\n 3.display"); 
    printf("\n 4.exit"); 
    printf("\nenter a choice");  
    scanf("%d",&c);
 switch(c)
 {
   case 1:insert();break; 
   case 2:delete();break; 
   case 3:display();break; 
   case 4:exit(0); 
   default:printf("invalid choice");
   }
   }
   }                   
