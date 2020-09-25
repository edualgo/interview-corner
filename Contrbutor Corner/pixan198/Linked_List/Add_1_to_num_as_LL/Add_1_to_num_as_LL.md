# Documentation

## Add 1 to a number represented as Linked List
<img src="https://img.shields.io/badge/Asked in-Amazon-blue" alt="Google" />

### Problem Statement
> A number N is represented in Linked List such that each digit corresponds to a node in linked list. You need to add 1 to it.

Sample I/O
```
Input: 2999
Output: 3000
```

#### Input
> The First line contains the number of test cases, and for each test case a single line of input denotes an big number N.

#### Output
> For each test case, print the resulting number in a new line.

### Naive Approach (Iterative)
We've to add 1 to a number represented as LL and on adding 1 if the number is 9 we'll get a two digit number 1 0, 0 is our sum and 1 will be carry.
The idea is to traverse the LL from leftmost node after reversing the LL, until we reach the number where, on adding carry from previous sum there is no carry generated.
If we reach the end of LL and there is still a carry left then append it to the end of LL.
Before returning the head reverse the LL.


#### Pseudo Code
> 1. Reverse the given linked list
>      - For example, [2]-> [9]-> [9] -> [9] is converted to [9] -> [9] -> [9] -> [2]
> 2. Traverse the LL from leftmost node and add 1 to it:
>      - If there is a carry
>          - move to the next node, Keep moving to the next node while there is a carry
> 3. Reverse the modified LL and return head

#### C++ Function Implementation
```cpp
Node* addOne(Node *head) 
{ 

    head = reverse(head); 
    // reverse() is a function to reverse the linked list and returns the head of modified LL
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
```

### Optimized Approach
This approach focuses on if any of the digits of number is `9` because it is digit 9 which generates a two digit sum i.e., 10 whose carry needs to be passed on to other node and  also it creates all changes, but in case of other numerals ( i.e., 0 to 8 ) we just have to increment it by 1.

We've to find the last node which is not equal to 9, in our discovery there can be three cases:
- There is no node which is not equal to nine i.e., all nodes are 9, in this case we'll have to increase the size of LL by inserting a node at HEAD containing `1` as its data and all other nodes will be converted to 0.
```
HEAD -> [9] -> [9] -> [9] -> [9] -> NULL
                                     ^
                                     |
Insert 1
HEAD -> [1] -> [9] -> [9] -> [9] -> [9] -> NULL
change other to 0
HEAD -> [1] -> [0] -> [0] -> [0] -> [0] -> NULL
```
- If we find last node of LL to be not equal to 9 then just add 1 to it and return
```
HEAD -> [1] -> [2] -> [9] -> [7] -> NULL
                              ^
                              |
Add 1 to last node
HEAD -> [1] -> [2] -> [9] -> [8] -> NULL
```
- If the node we find is not last node but is in-between in LL it means all nodes after it are 9, then add 1 to it and change data of all nodes after it to 0.
```
HEAD -> [1] -> [2] -> [9] -> [9] -> NULL
                ^
                |
Add 1
HEAD -> [1] -> [3] -> [9] -> [9] -> NULL
Change all node after it to 0
HEAD -> [1] -> [3] -> [0] -> [0] -> NULL
```

#### Pseudo Code
> 1. Create two pointer variables of type Node, last and curr
```
Initialize both
last = NULL
curr = HEAD
```
> 2. Traverse the LL to the end
>     - If ( curr->data is not equal to 9) then set last = curr
> 3. If ( curr->data is not equal to 9 ) then add 1 to curr->data and return HEAD
> 4. If ( last is equal to NULL ) then create a new Node and insert it at HEAD of LL
> 5. Set the data of 1st node to `1` and change data of all nodes to 0
> 6. return HEAD

#### C++ Function Implementation
```cpp
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
```
