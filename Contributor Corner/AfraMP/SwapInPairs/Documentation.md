# DOCUMENTATION
## Swap List Nodes In Pairs<br>
<a><img src= "https://img.shields.io/badge/-Microsoft-orange" height="25">&nbsp;&nbsp;<img src="https://img.shields.io/badge/-Amazon-blue" height="25">&nbsp;&nbsp;<img src= "https://img.shields.io/badge/-Interview Bit-navy" height="25">
&nbsp;&nbsp;<img src= "https://img.shields.io/badge/-Python-red" height="25"></a>

 **Problem Statement**<br>
Given a linked list, swap every two adjacent nodes and return its head.

For example,
Given 1->2->3->4, you should return the list as 2->1->4->3.
```
Example 1
 
1 2 3 4
```
> > 2 1 4 3
```
Example 2

2 4 6 3 1 5
```
> > 4 2 3 6 5 1<br>
#### Solution<br>
Time complexity for this problem is O(n).
```
# A linked list node
class Node:
    def __init__(self, data=None, next=None):
        self.data = data
        self.next = next
 
 
# Helper function to print given linked list
def printList(head):
 
    ptr = head
    while ptr:
        print(ptr.data, end=" ")
        ptr = ptr.next
 
    print("")
 
 
# Function to pairwise swap adjacent nodes of a linked list
def rearrange(head):
 
    # if list is empty or contains just one node
    if head is None or head.next is None:
        return head
 
    curr = head
    prev = None
 
    # consider two nodes at a time and swap their links
    while curr and curr.next:
 
        temp = curr.next
        curr.next = temp.next
        temp.next = curr
 
        if prev is None:
            head = temp
        else:
            prev.next = temp
 
        prev = curr
        curr = curr.next
 
    return head
 
 
if __name__ == '__main__':
 
    head = None
    a = list(map(int, input().split()))
    for i in reversed(a):
        head = Node(i, head)
    head = rearrange(head)
    printList(head)
 
```
