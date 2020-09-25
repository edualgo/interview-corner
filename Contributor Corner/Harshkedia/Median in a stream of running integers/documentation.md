# Documentation

## **Median in a stream of running integers**

Asked in:  <a><img src= "https://img.shields.io/badge/-Flipkart-red" height="25">&nbsp;&nbsp;
<img src= "https://img.shields.io/badge/-Amazon-yellow" height="25">&nbsp;&nbsp;
<img src= "https://img.shields.io/badge/-GeekforGeeks-darkgreen">&nbsp;&nbsp;
<img src= "https://img.shields.io/badge/-CPP-brown">&nbsp;&nbsp;


### Problem Statement 

You are given a running data stream of n integers. You read all integers from that running data stream and find effective median of elements read so far in efficient way. All numbers are unique in the datastream. Print only the integer part of the median.

**Input Format**

First line contains integer t as number of test cases. Each test case contains following input. First line contains integer n which represents the length of the data stream and next line contains n space separated integers.
 
**Constraints:**

        Print the effective median of running data stream..


**Output Format**

 Find the maximum number of activities that you can do.
       
       
**Example 1 :**

        Input:
              1
              6
              5 15 1 3 2 8
       
               
        Output: 
                5 10 5 4 3 4
        
        Explanation: 
                     
                    Iteration 1 :
                    Array = {5}
                    Median = 5

                    Iteration 2 :
                    Array = {5,15}
                    Median = (5+15)/2 = 10

                    Iteration 3 :
                    Array = {1,5,15}
                    Median = 5
 
                    Iteration 4 :
                    Array = {1,3,5,15}
                    Median = (3+5)/2 = 4
                    Iteration 5 :
                    Array = {1,2,3,5,15}
                    Median = 3

                    Iteration 6 :
                    Array = {1,2,3,5,8,15}
                    Median = (3+5)/2 = 4

                      
        
          
 >>Time complexity : **O(n log n) **
