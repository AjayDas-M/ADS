#include<stdio.h>
#include<stdlib.h>

int q[10],front=-1,rear=-1,n=0;

void insert()
{
	int item;
	if(front==-1 && rear==-1)
		printf("queue overflow");
	else
	{
		printf(("Enter the element : ");
		scanf("%d",&item);
		if(rear==-1 && front==-1)
		{
			rear=front=0;
			q[rear]=item;
		}
		else if(front!=0 && rear==n-1)
		{
			rear=0;
			q[rear]=item;
		{
		else
		{
			rear++;
			q[rear]=item;
		}
		printf("%d item inserted",item);
	}
}

void delete()
{
	int item;
	if((rear==-1 && front==-1)|| front>rear)
		printf("Queue underFlow");
	else
	{
		if(front=rear)
		{
			
			front=rear=-1;
			
		}
		else if(front=n-1)
		{
			item=q[front];
			front=0;
			printf("%d element is deleted",item);
		}
		else{	
			item=q[front];
			front++;
			printf("%d element is deleted",item);
		}
		
	}
}

void search()
{
	int item,flag=0;
	if(front==-1)
		printf("Queue is empty!!!!");
	else
	{
		printf("Enter the item to search : ");
		scanf("%d",&item);
		for(i=front;i<=rear;i++)
		{
			if(q[i]==item)
				flag=1;
				break;
		}	
		if(flag==1)
			printf("item found at %dth position",i+1);
			
		
	}
	return;
}

void display()
{
	if(front==-1)
		printf("Queue is empty!!!!");
	else
	{
		for(i=front;i<=rear;i++)
			printf("%d ",q[i]);
			
	}
}

int main()
{
  int ch;
  printf("enter the size of the queue : ");
  scanf("%d",&n);
  do
  {
  	printf("\n 1.insertion \n 2.Deletion \n 4.Search \n 5.display \n 6.Exit \n");
  	scanf("%d",&ch);
  	switch(ch)
  	{
  		case 1:
  			insert(q[n]);
  			break;
  		case 2:
  			delete(q[n]);
  			break;
  		case 3:
  			search(q[n]);
  			break;
  		case 4:
  			display(q[n]);
  			break;
  		case 5:
  			exit(0);
  		default:
  			printf("Wrong Choice!!!");
  			
  	}
  }while(1);
  return 0;
}
