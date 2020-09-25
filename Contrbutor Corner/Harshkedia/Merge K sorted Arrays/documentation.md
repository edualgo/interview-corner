# Documentation

## **Merge K sorted Arrays**

Asked in:  <a><img src= "https://img.shields.io/badge/-Flipkart-red" height="25">&nbsp;&nbsp;
<img src= "https://img.shields.io/badge/-Amazon-yellow" height="25">&nbsp;&nbsp;
<img src= "https://img.shields.io/badge/-Microsoft-blue" height="25">&nbsp;&nbsp;
<img src= "https://img.shields.io/badge/-GeekforGeeks-darkgreen">&nbsp;&nbsp;
<img src= "https://img.shields.io/badge/-CPP-brown">&nbsp;&nbsp;


### Problem Statement 

Given K sorted arrays each with N elements merge them and output the sorted array.

  First line contains 2 space separated integers K and N.
  Next lines contain K*N space separated integers 

**Constraints:**

           Elements of array <= |10^15|
           N <= 10^5
           K <= 10

**Example 1 :**

        Input:
                3 4
                1 3 5 7 2 4 6 8 0 9 10 11
        
        Output: 
                0 1 2 3 4 5 6 7 8 9 10 11
                
        
        Explanation: 
                      If we were to combine all the arrays into one and then sort it , the output would be as above.
                      
        
           
 >>Time complexity : **O(n * k * log k)**  & Auxiliary Space : **O(k)**.

***[For Reference](https://practice.geeksforgeeks.org/problems/merge-k-sorted-arrays/1)***
