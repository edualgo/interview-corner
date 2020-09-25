#include <bits/stdc++.h> 
using namespace std; 
  
// Node Structure
struct Node 
{ 
    Node* next; 
    int data; 
}; 
// Optimized Approach
void sortList(Node** head) 
{ 
    Node* prev = (*head); 
    Node* curr = (*head)->next; 
  
    while (curr != NULL) 
    { 
        if (curr->data < prev->data) 
        { 
            prev->next = curr->next; 
   
            curr->next = (*head); 
            (*head) = curr; 
   
            curr = prev; 
        } 
  
        else
            prev = curr; 
  
        curr = curr->next; 
    }
} 

// Naive Approach
Node* SortedMerge(Node* a, Node* b) 
{ 
    Node* result = NULL; 
  
    if (a == NULL) 
        return (b); 
    else if (b == NULL) 
        return (a); 
  
    if (a->data <= b->data) { 
        result = a; 
        result->next = SortedMerge(a->next, b); 
    } 
    else { 
        result = b; 
        result->next = SortedMerge(a, b->next); 
    } 
    return (result); 
} 
void FrontBackSplit(Node* source, Node** frontRef, Node** backRef) 
{ 
    Node* fast; 
    Node* slow; 
    slow = source; 
    fast = source->next; 
  
    while (fast != NULL) { 
        fast = fast->next; 
        if (fast != NULL) { 
            slow = slow->next; 
            fast = fast->next; 
        } 
    } 
  
    *frontRef = source; 
    *backRef = slow->next; 
    slow->next = NULL; 
}
void MergeSort(Node** headRef) 
{ 
    Node* head = *headRef; 
    Node* a; 
    Node* b; 
  
    if ((head == NULL) || (head->next == NULL)) { 
        return; 
    } 
  
    FrontBackSplit(head, &a, &b); 
  
    MergeSort(&a); 
    MergeSort(&b); 
  
    *headRef = SortedMerge(a, b); 
} 
// Function to Add Node to LL
void push(Node** head, int data) 
{ 
    Node* newNode = new Node; 
    newNode->next = (*head); 
    newNode->data = data; 
    (*head) = newNode; 
}
Function to Print LL
void printList(Node* head) 
{ 
    while (head != NULL) 
    { 
        cout << head->data; 
        if (head->next != NULL) 
            cout << " -> "; 
        head = head->next; 
    } 
    cout<<endl; 
} 
int main() 
{ 
    Node* head = NULL;
    int t,n,temp;
    cin >> t;
    cin >> n;
    for(int i = 0; i < n; i++){
    	cin >> temp;
		push(&head, temp); 	
	}
   
    sortList(&head);
//	MergeSort(&head);
/*Uncomment MergeSort() to use Naive Approach*/

    printList(head); 
  
    return 0; 
}
