# DOCUMENTATION
## Special Stack<br>
<a><img src="https://img.shields.io/badge/-Amazon-blue" height="25">&nbsp;&nbsp;<img src= "https://img.shields.io/badge/-Interview Bit-navy" height="25">
&nbsp;&nbsp;<img src= "https://img.shields.io/badge/-Python-red" height="25">&nbsp;&nbsp;
<a><img src="https://img.shields.io/badge/-Paytm-blue" height="25"></a><br>
**Problem Statement**<br>
Design a data-structure SpecialStack that supports all the stack operations like push(), pop(), isEmpty(), isFull() and an additional operation getMin() which should return minimum element from the SpecialStack. Your task is to complete all the functions, using stack data-Structure.
```
Example 1

1
5
18 19 29 15 16
```
> > 15
#### Solution<br>
```
class SpecialStack:

    def __init__(self, n):
        self.n = n
    
    # function should append an element on to the stack
    def push(self, arr, ele):
        if len(arr) < self.n:
            arr.append(ele)
        else:
            print("Stack full")
    
    # Function to pop an element from stack
    def pop(self, arr):
        if(len(arr)==0):
            return int("-1")
    
        return arr.pop()
    
    # Function to check if stack is full
    def isFull(self, arr):
        if (len(arr) == self.n):
            return True
        return False
    
    # Function to check if stack is empty
    def isEmpty(self, arr):
        if arr == None:
            return True
        else:
            return False
    
    # function should return minimum element from the stack
    def getMin(self, arr):
        if(len(arr)==0):
            return int("-1")
        return min(arr)
T = int(input())
a = []
for i in range(T):
    N = int(input())
    for _ in range(0, N):
        a.append(input().split())
    s = SpecialStack(N)
    s.push(a, 15)
    print(s.pop(a))
    print(s.isFull(a))
    print(s.isEmpty(a))
    print(s.getMin(a))
```

        
        
