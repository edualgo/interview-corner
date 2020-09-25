//Question Link
//https://practice.geeksforgeeks.org/problems/nth-node-from-end-of-linked-list/1

#include<iostream>
#include<stdlib.h>
using namespace std;

struct Node
{
  int data;
  struct Node *next;
  Node(int x)
  {data=x;
   next=Null;
  }
};

int getNthFromLast(struct Node* head, int n);

int main()
{
  int t,l,i,n,k;
  cin >> t;
  while(t--)
  {
    struct Node *head=Null;
    struct Node *tail=Null;
    cin >> n >> k;
    int FirstData;
    cin >> FirstData;
    head=new Node(FirstData);
    tail=head;
    for(int i=0; i<n; i++)
    {
      cin >> l;
      tail->next=new Node(l);
      tail=tail->next;
    }
    cout << getNthFromLast(head,k) << endl;
  }
  return 0;
  
} 
  
  
int getNthFromLast(Node *head, int n)
{  
int length=0,i;

Node *temp=head;
while(temp!=NULL)
{
temp=temp->next;
length++;
}

if(length<n)
{return -1;}
temp=head;
for(i=1;i<length-n+1;i++)
{ temp=temp->next;
}
return temp->data;   
}
