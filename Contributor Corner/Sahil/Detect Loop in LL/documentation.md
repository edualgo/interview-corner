# Documentation

## **Activity Selection Problems**

Asked in:  <a><img src= "https://img.shields.io/badge/-Flipkart-red" height="25">&nbsp;&nbsp;
<img src= "https://img.shields.io/badge/-Amazon-yellow" height="25">&nbsp;&nbsp;
<img src= "https://img.shields.io/badge/-Visa-blue" height="25">&nbsp;&nbsp;
<img src= "https://img.shields.io/badge/-GeekforGeeks-darkgreen">&nbsp;&nbsp;
<img src= "https://img.shields.io/badge/-CPP-brown">&nbsp;&nbsp;


### Problem Statement 

You are given n activities (from 0 to n-1) with their start and finish times. Select the maximum number of activities that can be performed by a single person, assuming that a person can only work on a single activity at a time. 

**Input Format**

The first line consists of an integer N, the number of activities. Then the next N lines contain two integers m and n, the start and end time of each activity.

 
**Constraints:**

         1<=n<=10000
         
         1<=A[i]<=100

**Output Format**

 Find the maximum number of activities that you can do.
       
       
**Example 1 :**

        Input:
                3
               10 20
               12 15
               20 30
       
               
        Output: 
                2
        
        Explanation: 
                     
                   Person can only do 0th and 2nd activities.

                      
        
           
 >>Time complexity : **O(n log n) **  & Auxiliary Space : **O(1).**.
