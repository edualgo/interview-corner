def mergeSort(head):
    if head is None or head.next is None:
        return head
    list1,list2 = divlists(head)
    list1=mergeSort(list1)
    list2 =mergeSort(list2)
    head = mergeLists(list1,list2)
    return head

def mergeLists(list1,list2):
    var = None
    if list1 is None:
        return list2
    elif list2 is None:
        return list1
    elif list1.data  <= list2.data:
        var = list1
        var.next =mergeLists(list1.next,list2)
    else:
        var = list2
        var.next = mergeLists(list2.next,list1)
    return  var

def divlists(head):
    w = head
    t =head
    if t:
        t =t.next
    while t:
        t = t.next
        if t:
            t =t.next
            w=w.next
    m = w.next
    w.next =None
    return head, m
    
    
    





import atexit
import io
import sys




class Node:
    def __init__(self, data):  
        self.data = data
        self.next = None


class LinkedList:
    def __init__(self):
        self.head = None
        self.tail = None

    
    def append(self, new_value):
        new_node = Node(new_value)
        if self.head is None:
            self.head = new_node
            self.tail = new_node    
            return
        self.tail.next = new_node
        self.tail = new_node


def printList(head):
    if head is None:
        print(' ')
        return
    curr_node = head
    while curr_node:
        print(curr_node.data,end=" ")
        curr_node=curr_node.next
    print(' ')


if __name__ == '__main__':
    t=int(input())
    for cases in range(t):
        n = int(input())
        p = LinkedList() 
        nodes_p = list(map(int, input().strip().split()))
        for x in nodes_p:
            p.append(x)  

        printList(mergeSort(p.head))
