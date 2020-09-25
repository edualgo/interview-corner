# Documentation

<a><img src="https://img.shields.io/badge/-Amazon-blue" height="25px">&nbsp;&nbsp;<img src="https://img.shields.io/badge/-Flipkart-orange" height="25px">&nbsp;&nbsp;<img src="https://img.shields.io/badge/-Adobe-yellow" height="25px">&nbsp;&nbsp;<img src="https://img.shields.io/badge/-Microsoft-red" height="25px">&nbsp;&nbsp;<img src="https://img.shields.io/badge/-Samsung-pink" height="25px">&nbsp;&nbsp;<img src="https://img.shields.io/badge/-Cpp-skyblue"></a>

## problem sttement 1
### Nth Node 

Given a linked list consisting of L nodes and given a number N. The task is to find the Nth node from the end of the linked list.

Your Task:
The task is to complete the function getNthFromLast() which takes two arguments: reference to head and N and you need to return Nth from the end or -1 in case node doesn't exist..

Note:
Try to solve in single traversal.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(1).

Constraints:
1 <= T <= 200
1 <= L <= 103
1 <= N <= 103

##### Example 1:

##### Input:
L = 9, N = 2
value[] = {1,2,3,4,5,6,7,8,9}
##### Output: 8
##### Explanation: In the first example, there
are 9 nodes in linked list and we need
to find 2nd node from end. 2nd node
from end os 8.

##### Example 2:

##### Input:
L = 4, N = 5
value[] = {10,5,100,5}
##### Output: -1
##### Explanation: In the second example, there
are 4 nodes in the linked list and we
need to find 5th from the end. Since 'n'
is more than the number of nodes in the
linked list, the output is -1.


### solution

```cpp
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

## problem statement 2
### Del Mid element

Given a singly linked list, delete middle of the linked list. For example, if given linked list is 1->2->3->4->5 then linked list should be modified to 1->2->4->5.
If there are even nodes, then there would be two middle nodes, we need to delete the second middle element. For example, if given linked list is 1->2->3->4->5->6 then it should be modified to 1->2->3->5->6.
If the input linked list is NULL or has 1 node, then it should return NULL

##### Input:
The first line of input contains the number of test cases T. For each test case, there will be two lines of input, first of which contains the number of nodes in the linked list and next line contains elements in the nodes of the linked list.

##### Output:
For each test case, print the modified linked list in a new line.

User Task:
The task is to complete the function deleteMid() which should delete the middle element from the linked list and return the head of the modified linked list. If the linked list is empty then it should return NULL.
Expected Time Complexity: O(N).
Expected Auxiliary Space: O(1).

Constraints:
1 <= T <= 1000
1 <= N <= 1000
1 <= value <= 1000

##### Example:
##### Input:
2
5
1 2 3 4 5
6
2 4 6 7 5 1

##### Output:
1 2 4 5
2 4 6 5 1

##### Explanation:
Testcase 1: After deleting the middle of the linked list, 3 will be deleted and the list will be as 1, 2, 4, 5.

### solution 

```cpp
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





