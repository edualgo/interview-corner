#include<bits/stdc++.h>
using namespace std;

class Node
{
	public:
	int data;
	Node *next;
	Node(int d)// constructor
	{
		data=d;
		next=NULL;

	}
};
void atLast(Node *&head,int d)
{
	Node *temp=head;
	if(head==NULL)
	{

		head=new Node(d);
	}
	else
	{
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=new Node(d);
	}
}

void Print(Node *head)
{
	while(head!=NULL)
	{
		cout<<head->data<<" ";
		head=head->next;
	}
	cout<<endl;
}

void even(Node *&head)
{
	Node *o=NULL;
	Node *e=NULL;
	Node* temp=head;
	while(temp!=NULL)
	{
		int z=temp->data;
		if(z%2==0)
		{
			atLast(e,z);
		}
		else{
			atLast(o,z);
		}
		temp=temp->next;
	}
	if(e==NULL)
	{
		head=o;
		return ;
	}
	head=e;
	while(e->next!=NULL)
	{
		e=e->next;

	}
	e->next=o;
}

int main()
{
	int n;
	cin>>n;
	Node *head=NULL;
	for(int i=0;i<n;i++)
	{
		int d;
		cin>>d;
		atLast(head,d);
	}
	even(head);
	Print(head);
}