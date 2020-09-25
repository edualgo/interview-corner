# Documentation

## Print Bracket Number

<a><img src= "https://img.shields.io/badge/-FlipKart-Yellow" height="25">&nbsp;&nbsp;<img src= "https://img.shields.io/badge/-Leetcode-navy" >&nbsp;&nbsp;<img src= "https://img.shields.io/badge/-geeksforgeeks-violet" height="25">
&nbsp;&nbsp;<img src= "https://img.shields.io/badge/-CPP-red">&nbsp;&nbsp;<img src= "https://img.shields.io/badge/-Python-brightgreen"></a>


#### Problem Statement 
Given an expression exp of length n consisting of some brackets. The task is to print the bracket numbers when the expression is being parsed.

    Example 1:
    
    Input: ((()())())
    Output: 1 2 3 3 4 4 2 5 5 1      
    
    Example 2:
    
    Input: (a+b)/(c+d)
    Output:  1 1 2 2 
    

#### Solution
##### Method-1      
###### CPP code
    #include <bits/stdc++.h> 
     using namespace std; 
  
    // function to print the bracket number 
      void printBracketNumber(string exp, int n) 
     { 
    // used to print the bracket number 
    // for the left bracket 
       int left_bnum = 1; 
      
    // used to obtain the bracket number  
    // for the right bracket 
    stack<int> right_bnum; 
      
    // traverse the given expression 'exp' 
    for (int i = 0; i < n; i++) { 
          
        // if current character is a left bracket 
        if (exp[i] == '(') { 
            // print 'left_bnum', 
            cout << left_bnum << " "; 
              
            // push 'left_bum' on to the stack 'right_bnum' 
            right_bnum.push(left_bnum); 
              
            // increment 'left_bnum' by 1 
            left_bnum++; 
        } 
          
        // else if current character is a right bracket 
        else if(exp[i] == ')') { 
  
            // print the top element of stack 'right_bnum' 
            // it will be the right bracket number 
            cout << right_bnum.top() << " "; 
              
            // pop the top element from the stack 
            right_bnum.pop(); 
        } 
    } 
    } 
  
      int main() 
     { 
    string exp = "(a+(b*c))+(d/e)"; 
    int n = exp.size(); 
      
    printBracketNumber(exp, n); 
      
    return 0; 
       } 

##### Method-2
###### Python code
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
  ###### Time Complexity : O(n).
  ###### Auxiliary Space : O(n).
