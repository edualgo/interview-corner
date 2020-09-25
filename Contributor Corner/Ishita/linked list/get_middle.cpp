  
#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int data;
	struct node *next;
}node;

int getMiddle(node *head)
{
	int c=0;
	node*b=head;
	while(b!=NULL)
	{	
		c++;
		b=b->next;
	}
	c=c/2;
	while(c--)
	{
	head=head->next;
	}
	return head->data;
}


int main()
{	
	int a,n;
	node *p,*q,*head;
	printf("Enter the number of nodes");
	scanf("%d",&n);
	
	printf("Enter all the nodes \n");
	p = (node*)malloc(sizeof(node));
	scanf("%d",&a);
	p->data = a;
	p->next = NULL;
	head = p; 
		
	for(int i=1;i<n;i++)
	 	{
		 	q = (node*)malloc(sizeof(node));
			scanf("%d",&a);
			q->data = a;
			q->next = NULL;			 	
		 	p->next = q;
		 	p = p->next;		 	
	 	
		}

    int ele=getMiddle(head);
    printf("the middle element is %d",ele);

}
