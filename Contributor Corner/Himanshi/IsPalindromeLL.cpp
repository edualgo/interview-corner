//Question Link
//https://practice.geeksforgeeks.org/problems/check-if-linked-list-is-pallindrome/1

#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;

struct Node{
   int data;
   struct Node *next;
   Node(int x){
      data=x;
      next=Null;
   }
};

Node* reverse(Node* slow)
   {
       Node* curr=slow;
       Node* next;
       Node* prev=NULL;
       while(curr!=NULL)
       {
           next=curr->next;
           curr->next=prev;
           prev=curr;
           curr=next;
           
       }
       return prev;
   }

bool isPalindrome(Node *head)
{
    Node* slow=head;
          Node*  fast=head;
        while(fast!=NULL && fast->next!=NULL)
        {
           slow=slow->next;
            fast=fast->next->next;
        } 
        fast=head;
        slow=reverse(slow);
        
        while(slow!=NULL)
        {
            if(fast->data!=slow->data)
            {
                return false;
            }  
            slow=slow->next;
            fast=fast->next;
        } 
        return true;
}

int main()
{
   int t,i,n,l,firstdata;
   cin >> t;
   while(t--)
   {
      struct Node *head=Null, *tail=Null;
      cin >> n;
      cin>> firstdata;
      head = new Node(firstdata);
      tail=head;
      for(int i=1;i<n;i++)
      {
         cin >> l;
         tail->next= new Node(l);
         tail = tail->next;
       }
      cout << isPalindrome(head) << endl;
    } 
   return 0;
         
}

    



