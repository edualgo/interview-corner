//Question Link
//https://practice.geeksforgeeks.org/problems/delete-middle-of-linked-list/1

#include<bits/stdc++.h>
using namespace std;

struct Node
{
 int data;
 struct Node* next;
  
 Node(int x)
 {data=x;
  next=Null;
 }
  
};

struct Node *deleteMid(struct Node *head);
Void printList(Node *node)
{
  while(node!=Null)
  { cout << node->data << " ";
    node =  node->next;
  }
  cout << "/n" ;
}

int main()
{
  int t;
  cin >> t;
  while(t--)
  { 
    int n;
    cin >> n;
    int data;
    cin >> data;
    struct Node *head=new Node(data);
    struct Node *tail=head;
    for(int i=0;i<n-1;++i)
    {
      cin >> data;
      tail->next=new Node(data);
      tail=tail->next;
    }
    head=deleteMid(head);
    printList(head);
  } 
      
   return 0;   
  
}

Node* deleteMid(Node* head)
{

struct Node *ptr=head;
int count=0;
while(ptr!=NULL)
{
count++;
ptr=ptr->next;
}
ptr=head;
struct Node *preptr;


for(int k=0;k!=count/2;k++)
{
preptr=ptr;
ptr=ptr->next;
}

preptr->next=ptr->next;
free(ptr);

return head;

}
