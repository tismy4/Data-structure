#include<stdio.h>
#include<stdlib.h>

struct Node{
   int data;
   struct Node* link;
   };
   
struct Node* start=NULL;
struct Node* getnode(){
   int item;
   printf("enter the value insert:");
   scanf("%d",&item);
   
   struct Node* new_node=(struct Node*)malloc(sizeof(struct Node));
   new_node->data=item;
   new_node->link=NULL;
   return new_node;
   }
   
   void push(){
   struct Node* new_node=getnode();
   if(start==NULL){
    start=new_node;
    }else{
    new_node->link=start;
    start=new_node;
    }
   printf("%d is pushed\n",new_node->data);
   }
   
   int pop(){
   if(start==NULL){
   printf("stack is empty,nothing to delete.\n");
   return 0;
   }else{
     struct Node* ptr=start;
     start=start->link;
     free(ptr);
     return 1;
     }
     }
   void traverse(){
   if(start==NULL){
     printf("stack is empty.\n");
     }else{
         printf("stack elements are:");
         struct Node* ptr=start;
         while(ptr!=NULL){
           printf("->%d",ptr->data);
           ptr=ptr->link;
           }
           }
           }
         void freeList(){
           while(start!=NULL){
             pop();
             }
             }
             
             
        int main()
        {
            int choice;
            
            while(1){
             printf("\n...stack Menu...\n");
             printf("1.push\n");
             printf("2.pop\n");
             printf("3.traverse\n");
             printf("4.exit\n");
           printf("enter your choice:");
           scanf("%d",&choice);
           
           switch(choice){
           case 1:
             push();
             break;
             
           case 2:
            pop();
            break;
          case 3:
           traverse();
           break;
           
          case 4:
            printf("exiting program.\n");
            freeList();
            exit(0);
            
           default:
              printf("invalid choice");
         }
         }
         
      return 0;
      }           
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
                    
