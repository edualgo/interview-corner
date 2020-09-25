# creating the Node class to frame a single node
class Node:
    def __init__(self,data):
        self.data = data
        self.next = None

# creating a Linked List class to get all the helper functionalities inside
class LinkedList:
    def __init__(self):
        self.head = None
        self.tail = None

    def append(self,data):
        if self.tail is None:
            self.head = Node(data)
            self.tail = self.head

        else:
            self.tail.next = Node(data)
            self.tail = self.tail.next

    def printLL(self):
        temp = self.head
        while(temp):
            print(temp.data, end =" ")
            temp = temp.next

# creating a solution class to implement more methods on the Linked List
class solution:

    def length(self,head):
        temp = head
        count = 0
        while(temp):
            temp = temp.next
            count+=1
        return count

    def is_palindrome(self,head):
        stack = []
        temp = head
        while(temp):
            stack.append(temp.data)
            temp = temp.next
        temp = head
        while(temp):
            if(stack[-1] != temp.data):
                return False
            else:
                stack.pop()
                temp = temp.next
        return True

    def is_palindrome_optimized(self,head):
        len = self.length(head)
        if(len <= 1):
            return True
        count = 0
        head2 = head
        prev = None

        while(count < int(len/2)):
            temp = head2.next
            head2.next = prev
            prev = head2
            head2 = temp
            count+=1

        head = head2
        head2 = prev

        if(len % 2 == 1):
            head = head.next

        while((head2 != None) and (head != None)):
            if(head2.data != head.data):
                return False
            head = head.next
            head2 = head2.next
        return True

if __name__ == '__main__':
    llist = LinkedList()
    llist.head = Node(1)
    arr = list(map(int,input().split()))
    for i in arr:
        llist.append(i)
    llist.printLL()
    sol = solution()
    print(sol.is_palindrome_optimized(llist.head))
