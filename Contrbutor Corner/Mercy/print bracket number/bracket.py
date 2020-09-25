def printBracketNumber(exp, n): 
  
    # used to print the bracket number 
    # for the left bracket 
    left_bnum = 1
  
    # used to obtain the bracket number 
    # for the right bracket 
    right_bnum = list() 
  
    # traverse the given expression 'exp' 
    for i in range(n): 
  
        # if current character is a left bracket 
        if exp[i] == '(': 
  
            # print 'left_bnum', 
            print(left_bnum, end = " ") 
  
            # push 'left_bum' on to the stack 'right_bnum' 
            right_bnum.append(left_bnum) 
  
            # increment 'left_bnum' by 1 
            left_bnum += 1
  
        # else if current character is a right bracket 
        elif exp[i] == ')': 
  
            # print the top element of stack 'right_bnum' 
            # it will be the right bracket number 
            print(right_bnum[-1], end = " ") 
  
            # pop the top element from the stack 
            right_bnum.pop() 
  

if __name__ == "__main__": 
    exp = "(a+(b*c))+(d/e)"
    n = len(exp) 
  
    printBracketNumber(exp, n) 