#include <iostream>
#include <vector>

using namespace std;


struct Node{
	int data;
	Node* link;
};
int i=1;
Node *start=NULL;

// method to print 
void printList(Node* node)
{
	while(node != NULL){
		printf("%d ", node->data);
		node = node->link;
	}
	printf("\n");
}
void dfs(Node *A,int j)
{
   if(i>j||!start||!A) return;
   if(A->link) A=A->link;
   else return ;
   if(A->link) A=A->link;
   else return ;
   dfs(A,j+2);
   if(start&&i<j+2)
   {
       swap(A->data,start->data);
       i+=2;
       if(start)start=start->link;
       if(start)start=start->link;
       return ;
   }
   return ;
}

Node* evenReverse(Node* A) {
    if(A)
    start=A->link;
    else
    return A;
    i=2;
    dfs(A->link,2);
    return A;
}

// method to insert elements
void insertElement(Node** head_Pointer, int data_elem)
{
	Node* elem = (struct Node*)malloc(sizeof(struct Node));
	elem->data = data_elem;
	elem->link = *head_Pointer;
	*head_Pointer = elem;
}

int main()
{
	int n, i;
	int a[10];
	Node* head = NULL;
	printf("Enter the number of elements:\n");
	scanf("%d", &n);
	printf("Enter the elements\n");
	for(i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	for(i = n-1; i >= 0; i--)
		insertElement(&head, a[i]);
	printf("Linked list before even reverse");
	printList(head);
	evenReverse(head);
	printf("Linked list after even reverse");
	printList(head);
	return 0;
}
	
