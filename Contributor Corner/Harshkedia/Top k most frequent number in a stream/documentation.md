# Documentation

## **Top k most frequent number in a stream**

Asked in:  <a><img src= "https://img.shields.io/badge/-Accolite-red" height="25">&nbsp;&nbsp;
<img src= "https://img.shields.io/badge/-Amazon-yellow" height="25">&nbsp;&nbsp;
<img src= "https://img.shields.io/badge/-GeekforGeeks-darkgreen">&nbsp;&nbsp;
<img src= "https://img.shields.io/badge/-CPP-brown">&nbsp;&nbsp;


### Problem Statement 

Given an array of n numbers. Your task is to read numbers from the array and keep at-most K numbers at the top (according to their decreasing frequency) every time a new number is read. We basically need to print top k numbers sorted by frequency when input stream has included k distinct elements, else need to print all distinct elements sorted by frequency. If frequency of two numbers are same then print them in increasing order.

**Input Format**

First line contains integer t as number of test cases. Each test case contains following input. First line contains integer n and k, n represents the length of the array and next line contains n space separated integers.
 
**Constraints:**

       1 < t < 100 1< n < 100000


**Output Format**

       Print top k running stream.
       
       
**Example 1 :**

        Input:
                1
                5 2
                5 1 3 5 2
       
               
        Output: 
                5 1 5 1 3 5 1 5 1
        
           
 >>Time complexity : **O( n * k ).**  & Auxiliary Space : **O(n)**.
