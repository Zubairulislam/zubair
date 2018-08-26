#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node
{
  int data;
  struct node * next;
};
create()
{
	char o;
    struct node *head=NULL,*tail=NULL,*ptr;
    do
    {
    	ptr=(struct node*)malloc(sizeof(struct node));
    	if(head==NULL)
    	{
    		head=NULL;
    		tail=NULL;
		}
		else
		{
			head->next=ptr;
			ptr->next=NULL;
			tail=ptr;
		}
		printf("enter the data:");
		scanf("%d",&ptr->data);
		ptr->next=NULL;
		printf("press 'y' to continue:");
		o=getch();
	}while(o='y');
}
dispaly()
{
	struct node* temp;
	temp!=NULL;
	if(temp==NULL)
	{
		printf("list is empty:");
	}
	else
		{
	   while(temp!=NULL)
	   printf("%d",temp->data);
	   temp=temp->next;
       }
}
search()
{
	struct node *temp ,int y;
	printf("enter the element:");
	scanf("%d",&y);
	while(temp!=NULL)
	{
		if(temp->data==y)
		printf("element found:");
	}
	else
	{
		temp=temp->next;
		printf("not found:");
	}
}
int main()
{
	create();
	dispaly();
	search();
}
