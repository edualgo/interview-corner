# check if the list contains 1 or more nodes
def getLink(head):
    temp = head
    while temp is not None and temp.next is not None:
        temp = temp.next
    return temp

#initialize the pivot ,newHead and newLink to the partition function
def quickSortRec(head, link):
    if head is None or head == link:
        return head
    newHead = None 
    newLink = None
    pivot, newHead, newLink = partition(head, link, newHead, newLink)
    if newHead != pivot:
        temp = newHead
        while temp.next != pivot:
            temp = temp.next
        temp.next = None
        newHead = quickSortRec(newHead, temp)
        temp = getLink(newHead)
        temp.next = pivot
    pivot.next = quickSortRec(pivot.next, newLink)  
    return newHead
#divide the entire list into two parts
#where the left of the pivot value will have the values less than pivot
# and right of the pivot value will have the vlaues greater than pivot 
def partition(head, Link, newHead, newLink):
    pivot = Link
    prev = None
    curr = head
    end = pivot
    while curr is not pivot:
        if curr.data < pivot.data:
            if newHead is None:
                newHead = curr
            prev = curr
            curr = curr.next
        else:
            if prev:
                prev.next = curr.next
            temp = curr.next
            curr.next = None
            end.next = curr
            end = curr
            curr = temp
    if newHead is None:
        newHead = pivot
    newLink = end
    return pivot, newHead, newLink

#Driver's code

from collections import defaultdict
class Node:
    def __init__(self,data):
        self.data=data
        self.next=None

class Llist:
    def __init__(self):
        self.head=None
    
    def insert(self,data,tail):
        node=Node(data)
        
        if not self.head:
            self.head=node
            return node
        
        tail.next=node
        return node
        
def nodeID(head,dic):
    while head:
        dic[head.data].append(id(head))
        head=head.next
        


def printList(head,dic):
    while head:
        if id(head) not in dic[head.data]:
            print("Do'nt swap data, swap pointer/node")
            return
        print(head.data,end=' ')
        head=head.next
        
if __name__ == '__main__':
    t=int(input())
    
    for i in range(t):
        n=int(input())
        
        arr=[int(x) for x in input().split()]
        
        ll=Llist()
        tail=None
        
        for nodeData in arr:
            tail=ll.insert(nodeData,tail)
            
        dic=defaultdict(list)   # dictonary to keep data and id of node
        nodeID(ll.head,dic)     # putting data and its id
        
        resHead=quickSort(ll.head)
        printList(resHead,dic)  #verifying and printing
        print()
        
