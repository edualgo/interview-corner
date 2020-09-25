def isCircular(head):
    if head is None:
        return True
    node = head.next
    var = 0
    while((node != None)and (node != head)):
        var +=1
        node = node.next
    return(node==head)


class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

class LinkedList:
    
    def __init__(self):
        self.head = None

    
    def push(self, new_data):
        new_node = Node(new_data)
        new_node.next = self.head
        self.head = new_node

    
    def printList(self, node):
        temp = node
        while (temp):
            print(temp.data, end=" ")
            temp = temp.next

    def getHead(self):
        return self.head

    def createLoop(self, n):
        if n == 0:
            return None
        temp = self.head
        ptr = self.head
        cnt = 1
        while (cnt != n):
            ptr = ptr.next
            cnt += 1
        
        while (temp.next):
            temp = temp.next
        temp.next = ptr


if __name__=='__main__':
    t=int(input())
    for i in range(t):
        n,isloop = list(map(int, input().strip().split()))
        arr=list(map(int, input().strip().split()))
        lst=LinkedList()
        for i in arr:
            lst.push(i)
        if(isloop):
            lst.createLoop(1)
        if isCircular(lst.getHead()):
            print(1)
        else:
            print(0)

