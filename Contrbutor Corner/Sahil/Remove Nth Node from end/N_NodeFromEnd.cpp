
#include<iostream>
using namespace std;

/* Link list Node */
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};


/* Function to get the nth node from the last of a linked list*/
int getNthFromLast(struct Node* head, int n);



int main()
{
  int T,i,n,l,k;

    cin>>T;

    while(T--){
    struct Node *head = NULL,  *tail = NULL;

        cin>>n>>k;
        int firstdata;
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        for(i=1;i<n;i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }

    cout<<getNthFromLast(head, k)<<endl;
    }
    return 0;
}


/* Function to find n'th node from the end of linked list .
  head: head of the linked list
  n: nth node from end to find
*/


int getNthFromLast(Node *head, int n)
{ 
  Node* ref=head;
  Node* main =head;
  int count=0;
  if(head!=NULL)
  {
    while(count<n)
    { 
     if(ref==NULL)
        return -1;
      ref=ref->next;
      count++;
    }

   while(ref!=NULL)
    {
      ref=ref->next;
      main=main->next;
    }
    return main->data;
  }
  
  return -1;
      
}

