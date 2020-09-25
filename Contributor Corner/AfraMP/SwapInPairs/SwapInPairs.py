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
 