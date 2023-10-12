#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;

};
struct node *head=NULL;

void deleteatfront()
{
	struct node *temp;
	temp=head;
	if(temp!=NULL)
	{	
		head=temp->next;
		printf("%d has been deleted",temp->data);
		free(temp);
		
	}
	else
		printf("linked list is empty");
	
	return;
}

void insertatfront()
{
	int data;
	printf("enter the element: ");
	scanf("%d",&data);
	struct node *newnode = (struct node *)malloc(sizeof(struct node));
	newnode->data = data;
	newnode->next = head;
	head = newnode;
	return;
}
void display()
{
	node *temp = head;
	while(temp!=NULL)
	{
		printf("%d  ",temp->data);
		temp = temp->next;
	}
	printf("\n");
}

int main()
{
	int ch;
	do
	{
		printf("\n 1. insertion \n 2. deletion \n 3. display \n 4. exit\n ");
		printf("enter your choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
	 	 case 1:
			insertatfront();
			break;
		 case 2:
		 	deleteatfront();
		 	break;
		 case 3:	
			display();
			break;
		 case 4:
			exit(0);
		default: 
			printf("wrong option");
			
		}
	}while(1);
	
	
	
	
	
	
	
	return 0;
}
