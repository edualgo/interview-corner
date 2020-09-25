# Documentation

## **Nth node from end of linked list**

Asked in:  <a><img src= "https://img.shields.io/badge/-Adobe-red" height="25">&nbsp;&nbsp;
<img src= "https://img.shields.io/badge/-Amazon-yellow" height="25">&nbsp;&nbsp;
<img src= "https://img.shields.io/badge/-Samsung-blue" height="25">&nbsp;&nbsp;
<img src= "https://img.shields.io/badge/-GeekforGeeks-darkgreen">&nbsp;&nbsp;
<img src= "https://img.shields.io/badge/-CPP-brown">&nbsp;&nbsp;


### Problem Statement 
Given a linked list consisting of L nodes and given a number N. The task is to find the Nth node from the end of the linked list.

**Constraints:**

          1 <= T <= 200
          1 <= L <= 103
          1 <= N <= 103


**Example 1 :**

        Input:
                L = 9, N = 2
                value[] = {1,2,3,4,5,6,7,8,9}
                
        Output: 8
        
        Explanation: In the first example, there are 9 nodes in linked list and we need to find 2nd node from end. 
                     2nd node from end os 8.  

**Example 2 :**

        Input:
                  L = 4, N = 5
                  value[] = {10,5,100,5}
                  
        Output:  -1
       
        Explanation: In the second example, there are 4 nodes in the linked list and we need to find 5th from the end.
                     Since 'n' is more than the number of nodes in the linked list, the output is -1.

        
 ### Solution:

**Use length of linked list:**

          1.Calculate the length of Linked List. Let the length be len.
          2.Print the (len – n + 1)th node from the beginning of the Linked List.

**Use two pointers:**
  
          1.Maintain two pointers – reference pointer and main pointer. 
          2.Initialize both reference and main pointers to head.
          3.First, move reference pointer to n nodes from head. 
          4.Now move both pointers one by one until the reference pointer reaches the end.
          5.Now the main pointer will point to nth node from the end. Return the main pointer.


          
           
 >>Time complexity : **O(n)**

***[For Reference](https://practice.geeksforgeeks.org/problems/nth-node-from-end-of-linked-list/1)***
