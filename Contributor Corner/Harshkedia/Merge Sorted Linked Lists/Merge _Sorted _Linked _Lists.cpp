#include<bits/stdc++.h>
using namespace std;
#define ll long long int 

class Node
{
	public:
	ll data;
	Node *next;
	Node(ll d)// constructor
	{
		data=d;
		next=NULL;

	}
};
void atLast(Node *&head,ll d)// inserting node at last 
{
	Node *temp=head;// dummy node 
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

void Print(Node *head)// print the linked list 
{
	while(head!=NULL)
	{
		cout<<head->data<<" ";
		head=head->next;
	}
	cout<<endl;
}

Node* merge(Node *A,Node* B)// function to merge two linked list 
{
	if(A==NULL)
	{
		return B;
	}
	if(B==NULL)
	{
		return A;
	}

	Node *temp1;
	Node *temp;
	if(A->data<B->data)
	{
		temp=A;
		A=A->next;
		temp->next=NULL;
	}
	else{
		temp=B;
		B=B->next;
		temp->next=NULL;

	}
	temp1=temp;
	while(A!=NULL&&B!=NULL)
	{
			if(A->data<B->data)
			{
				temp->next=A;
				temp=A;
				A=A->next;
			}
			else{
				temp->next=B;
				temp=B;
				B=B->next;
			}
	}
	if(A!=NULL)
	{
		temp->next=A;
	}
	else{
		temp->next=B;
	}
	return temp1;
}

int main()
{
	ll n1;
	cin>>n1;
	Node *head1=NULL;
	for(ll i=0;i<n1;i++)// appending of node 
	{
		ll d;
		cin>>d;
		atLast(head1,d);
	}
		ll n2;
	cin>>n2;
	Node *head2=NULL;
	for(ll i=0;i<n2;i++)
	{
		ll d;
		cin>>d;
		atLast(head2,d);
	}
	head1=merge(head1,head2);
	Print(head1);
}