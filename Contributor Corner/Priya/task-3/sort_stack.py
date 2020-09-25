def sorted(s):
    s2 = createStack() 
    while(isEmpty(s) == False): 
          
        # pop out the first element 
        temp = top(s) 
        pop(s) 
  
        # while temporary stack is not 
        # empty and top of stack is 
        # greater than temp 
        while(isEmpty(s2) == False and
             int(top(s2)) < int(temp)): 
              
            # pop from temporary stack and 
            # push it to the input stack 
            push(s,top(s2)) 
            pop(s2) 
  
        # push temp in tempory of stack 
        push(s2,temp) 
      
    return s2 

def createStack(): 
    s = [] 
    return s 
  
# Function to check if  
# the stack is empty 
def isEmpty( s ): 
    return len(s) == 0
  
# Function to push an  
# item to stack 
def push( s, item ): 
    s.append( item ) 
  
# Function to get top  
# item of stack 
def top( s ): 
    a = len(s) 
    return s[a-1] 
  
# Function to pop an  
# item from stack 
def pop( s ): 
  
    # If stack is empty 
    # then error 
    if(isEmpty( s )): 
        print("Stack Underflow ") 
        exit(1) 
  
    return s.pop() 
  
# Function to print the stack 
def display(s): 
    for i in range(len(s)-1, -1, -1): 
        print(s[i], end = ' ') 
    print()


# Driver's Code 
s = createStack() 
push( s, str(4) ) 
push( s, str(7) ) 
push( s, str(10) ) 
push( s, str(9) ) 
push( s, str(1) ) 
push( s, str(11) ) 
  
print("Sorted elements are: ") 
sort_st = sorted ( s ) 
print(sort_st) 
