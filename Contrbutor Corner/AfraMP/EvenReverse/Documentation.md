# DOCUMENTATION
## Even Reverse<br>
<a><img src="https://img.shields.io/badge/-Amazon-blue" height="25">&nbsp;&nbsp;<img src= "https://img.shields.io/badge/-Interview Bit-navy" height="25">
&nbsp;&nbsp;<img src= "https://img.shields.io/badge/-Python-red" height="25"></a><br>
**Problem Statement**<br>
Given a linked list A , reverse the order of all nodes at even positions.<br>
Return the head of the new linked list.

```
Example 1

1 3 5 7 9 2 4 6 8 0
```
> > 1 0 5 6 9 2 4 7 8 3
```
Example 2

1 2 7 6
```
> > 1 6 7 2
#### Solution<br>
```
# Creating A Node
class Node:  
    def __init__(self, next = None, data = None):  
        self.next = next
        self.data = data  
  
# Function to create a new node 
def newNode( d): 
  
    newnode = Node() 
    newnode.data = d 
    newnode.next = None
    return newnode 
  
# Function to even reverse the given input
def reverse(head, prev): 
  
    # Base case 
    if (head == None): 
        return None
  
    temp = None
    curr = None
    curr = head 
  
    # Reversing nodes until curr node's value 
    # turn odd or Linked list is fully traversed 
    while (curr != None and curr.data % 2 == 0) : 
        temp = curr.next
        curr.next = prev 
        prev = curr 
        curr = temp 
  
    # If elements were reversed then head 
    # pointer needs to be changed 
    if (curr != head) : 
        head.next = curr 
  
        # Recur for the remaining linked list 
        curr = reverse(curr, None) 
        return prev 
      
    # Simply iterate over the odd value nodes 
    else: 
      
        head.next = reverse(head.next, head) 
        return head 
      
# Function to print the contents of the linked list 
def printLinkedList(head): 
  
    while (head != None): 
      
        print(head.data ,end= " ") 
        head = head.next
def solve(head):
    odd=[]
    even=[]
    i=0
    while(head):
        if i%2==0:
            odd.append(head.data)
        else:
            even.append(head.data)
        head=head.next
        i+=1
        l=[]
    even=even[::-1]
    for i in range(len(odd)+len(even)):
        if i%2==0:
            l.append(odd[0])
            odd=odd[1:]
        else:
            l.append(even[0])
            even=even[1:]
    head=newNode(l[0])
    curr=head
    for i in range(1,len(l)):
        curr.next=newNode(l[i])
        curr=curr.next
    return head

arr = list(map(int, input().split()))
n = len(arr) 
      
head = None
p = Node() 
      
i = 0
# Constructing linked list 
while ( i < n ): 
      
    if (head == None): 
          
        p = newNode(arr[i]) 
        head = p 
    else: 
        p.next = newNode(arr[i]) 
        p = p.next
    i = i + 1; 
  
# Update linked list
head = solve(head) 
  
# Printing the even reversed linked list 
printLinkedList(head) 
```