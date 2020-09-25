#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data; 
        node = node->next; 
    }  
    cout<<"\n";
} 

// Naive Iterative Approach
Node *reverse(Node *head) 
{ 
    Node * prev = NULL; 
    Node * current = head; 
    Node * next; 
    while (current != NULL) 
    { 
        next = current->next; 
        current->next = prev; 
        prev = current; 
        current = next; 
    } 
    return prev; 
} 

Node* addOne(Node *head) 
{ 
    head = reverse(head); 
    
    Node* res = head; 
    Node *temp, *prev = NULL; 

    int carry = 1, sum; 

    while (head != NULL) 
    { 
        sum = carry + head->data; 

        carry = (sum >= 10)? 1 : 0; 
 
        sum = sum % 10; 

        head->data = sum; 

        temp = head; 
        head = head->next; 
    } 

    if (carry > 0) {
    	temp->next = new Node(carry);
    }
    
    head = res; 

    return reverse(head); 
} 


// Recursive Approach
/*
int addWithCarryRecur(Node *head)
{
    if (head == NULL)
        return 1;

    int res = head->data + addWithCarryRecur(head->next);

    head->data = (res) % 10;
    return (res) / 10;
}

Node* addOneRecur(Node *head)
{
    int carry = addWithCarryRecur(head);

    if (carry)
    {
        Node *newNode = new Node;
        newNode->data = carry;
        newNode->next = head;
        return newNode; 
    }

    return head;
}
*/
// Optimized Approach
Node* addOneOptimized(Node* head)
{
    Node* last = NULL;
    Node* cur = head;

    while (cur->next != NULL) {

        if (cur->data != 9) {
            last = cur;
        }
        cur = cur->next;
    }

    if (cur->data != 9) {
        cur->data++;
        return head;
    }

    if (last == NULL) {
        last = new Node(0);
        last->data = 0;
        last->next = head;
        head = last;
    }

    last->data++;
    last = last->next;

    while (last != NULL) {
        last->data = 0;
        last = last->next;
    }

    return head;
}

int main(void) 
{ 
	  clock_t start, end;
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        
        Node* head = new Node( s[0]-'0' );
        Node* tail = head;
        for(int i=1; i<s.size(); i++)
        {
            tail->next = new Node( s[i]-'0' );
            tail = tail->next;
        }
        
        start = clock();
		    head = addOne(head); 
    	  printList(head); 
    	  end = clock();
    	  cout << "Runtime(normal) = " << double(end - start) / double(CLOCKS_PER_SEC) << endl;
	
		    // Recursive Approach
    	  /*
		    start = clock();
		    head = addOneRecur(head); 
    	  printList(head); 
      	end = clock();
      	cout << "Runtime(Recursive normal) = " << double(end - start) / double(CLOCKS_PER_SEC) << endl;
      	*/
    
      	start = clock();
		    head = addOneOptimized(head); 
    	  printList(head); 
    	  end = clock();
    	  cout << "Runtime(Optimized) = " << double(end - start) / double(CLOCKS_PER_SEC) << endl;
    }
    return 0; 
} 
