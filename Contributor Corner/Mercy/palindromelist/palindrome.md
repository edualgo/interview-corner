
# Documentation
## Palindrome List

<a><img src= "https://img.shields.io/badge/-Amazon-blue" height="25">&nbsp;&nbsp;<img src= "https://img.shields.io/badge/-Microsoft-navy" height="25">&nbsp;&nbsp;<img src= "https://img.shields.io/badge/-geeksforgeeks-violet" height="25">&nbsp;&nbsp;<img src= "https://img.shields.io/badge/-Leetcode-navy" height="25">&nbsp;&nbsp;<img src= "https://img.shields.io/badge/-CPP-red">&nbsp;&nbsp;<img src= "https://img.shields.io/badge/-Python-brightgreen"></a>


#### Problem Statement 
Given a singly linked list, determine if its a palindrome. Return 1 or 0 denoting if its a palindrome or not, respectively
 

    Example 1:
    
    Input:List 1-->2-->1 
    Output:is a palindrome.
    

    Example 2:
    
    Input:List 1-->2-->3 
    Output:is not a palindrome.
    
    Example 3:
    Input:RADAR
    Output:is a palindrome
    

#### Solution
     
##### Method-1     
###### CPP code
      #include<bits/stdc++.h> 
      using namespace std;  
  
      class Node { 
       public: 
           int data; 
           Node(int d){ 
            data = d; 
        } 
        Node *ptr; 
        }; 
  
    // Function to check if the linked list  
    // is palindrome or not  
     bool isPalin(Node* head){ 
          
        // Temp pointer  
        Node* slow= head; 
  
        // Declare a stack  
        stack <int> s; 
   
  
        // Push all elements of the list  
        // to the stack  
        while(slow != NULL){ 
                s.push(slow->data); 
  
                // Move ahead  
                slow = slow->ptr; 
        } 
  
        // Iterate in the list again and  
        // check by popping from the stack 
        while(head != NULL ){ 
              
            // Get the top most element  
             int i=s.top(); 
  
             // Pop the element  
             s.pop(); 
  
             // Check if data is not 
             // same as popped element  
            if(head -> data != i){ 
                return false; 
            } 
  
            // Move ahead  
           head=head->ptr; 
        } 
  
          return true; 
       } 
  
     // Driver Code  
     int main(){ 
  
    // Addition of linked list  
    Node one =  Node(1); 
    Node two = Node(2); 
    Node three = Node(3); 
    Node four = Node(2); 
    Node five = Node(1); 
  
    // Initialize the next pointer 
    // of every current pointer  
    five.ptr = NULL; 
    one.ptr = &two; 
    two.ptr = &three; 
    three.ptr = &four; 
    four.ptr = &five; 
    Node* temp = &one; 
  
      
    // Call function to check palindrome or not  
    int result = isPalin(&one); 
    
    if(result == 1) 
            cout<<"isPalindrome is true\n"; 
    else
        cout<<"isPalindrome is true\n"; 
  
     return 0; 
    } 
    
 ##### Method-2
 ###### Python code
        # Data Structure to store a linked list node
        class Node:
           	def __init__(self, data, next=None):
		          self.data = data
		          self.next = next


        # Recursive function to check if linked list is palindrome or not
        def checkPalindrome(left, right):

	       # base case
	       if right is None:
	      	return True, left

	      val, left = checkPalindrome(left, right.next)

	      result = val and (left.data == right.data)
	      left = left.next

      	return result, left


       # Function to check if linked list is palindrome or not
       def checkPalin(head):
	      return checkPalindrome(head, head)[0]


       if __name__ == '__main__':

      	# input keys
      	keys = [1, 3, 5, 3, 1]

	      head = None
	      for i in reversed(range(len(keys))):
	     	head = Node(keys[i], head)

	      if checkPalin(head):
	           	print("Linked list is Palindrome")
      	else:
		           print("Linked list is not Palindrome")

#### Time complexity
     The time complexity is O(n).


 
       
  
