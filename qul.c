#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node*link;

};

struct node*start=NULL;
struct node* getnode(){

	int item;
	printf("Enter the number : ");
	scanf("%d",&item);
	struct node*new_node=(struct node*)malloc(sizeof(struct node));
	
	if(new_node == NULL){
		printf("Memory allocation failed!\n");
		exit(1);
	}
	new_node->data=item;
	new_node->link=NULL;
	
	return new_node;

}



void enqueue(){

	struct node*new_node=getnode();
	if(start==NULL)
	{
		start=new_node;

	}
	else
	{
		struct node*ptr=start;
		while(ptr->link!=NULL)
		{
			ptr=ptr->link;
		
		}
		ptr->link=new_node;

	}
	
	printf("%d is enqueued\n",new_node->data);



}

int dequeue(){
	
	if(start==NULL)
	{
		printf("Queue is empty !");
		return 0;
	}
	else
	{
		struct node*ptr=start;
		start=start->link;
		free(ptr);
		return 1;
	}



}



void traverse() {
	if (start == NULL) {
	printf("List is empty.\n");
	} 
	else {
	struct node* ptr = start; 
	while (ptr != NULL) {
	printf("-> %d", ptr->data);
	ptr = ptr->link;
	}
  	}
}


void freeList() {
	while (start != NULL) {
	dequeue();
	}
}

int main() {
int choice;
	while (1) {

	printf("\n--- Menu ---\n");
	printf("1. Enqueue\n");
	printf("2. Dequeue\n");
	printf("3. Traverse\n");
	printf("4. Exit\n");
	printf("Enter your choice: ");
	scanf("%d", &choice);
	
	switch (choice) {
	case 1:
		enqueue(); 
		printf("Node inserted at head.\n");
		break;
	case 2:
		dequeue(); 
		printf("Item dequeued.\n");
		break;
	
	case 3:
		printf("Current List: ");
		traverse(); 
		break;
	case 4:
		printf("Exiting program.\n");freeList(); 
		exit(0);
	default:
		printf("Invalid choice! Please choose a valid option.\n");
	}
	}
return 0;
}





















