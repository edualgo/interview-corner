def deleteMid(head):
     # check if the list contains 1 or more nodes 
    if head is None or head.next is None:
        return None
    #assign pointers to their respective positions 
    prev, i, j  = None, head, head
    
    while j and j.next:
        j = j.next.next;# j pointer moves 2 nodes ahead 
        
        # update prev pointer , prev holds previous value of i pointer
        prev = i;
        
        # i pointer moves 1 node ahead 
        i = i.next;
        
    
    #  since i pointer was moving at half speed of j pointer , it points at
    # mid node when j pointer reaches the end
    prev.next = i.next; # bypassing mid node
    
    return head;


#Driver's code
class Node:
    def __init__(self,data):
        self.data = data
        self.next = None
        
class Llist:
    def __init__(self):
        self.head = None
        
    def insert(self,data,link):
        node = Node (data)
        
        if not self.head:
            self.head = node 
            return node
        link.next = node
        return node
    
def printList(head):
    while head:
        print(head.data, end=" ")
        head = head.next
    print()
    
if __name__ == "__main__":
    t = int (input())
    
    for x in range(t):
        n = int(input())
        arr1 = [int(y) for y in input().split()]
        L1 = Llist()
        link = None
        for nodeData in arr1:
            link = L1.insert (nodeData, link)
            res = deleteMid(l1.head)
            printList(res)
            
