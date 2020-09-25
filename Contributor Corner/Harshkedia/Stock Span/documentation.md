# Documentation

## **Stock Span**

Asked in:  <a><img src= "https://img.shields.io/badge/-DEShaw-red" height="25">&nbsp;&nbsp;
<img src= "https://img.shields.io/badge/-Amazon-yellow" height="25">&nbsp;&nbsp;
<img src= "https://img.shields.io/badge/-Samsung-blue" height="25">&nbsp;&nbsp;
<img src= "https://img.shields.io/badge/-GeekforGeeks-darkgreen">&nbsp;&nbsp;
<img src= "https://img.shields.io/badge/-CPP-brown">&nbsp;&nbsp;


### Problem Statement 

The stock span problem is a financial problem where we have a series of n daily price quotes for a stock and we need to calculate the span of stock’s price for all n days. 
The span Si of the stock’s price on a given day i is defined as the maximum number of consecutive days just before the given day, for which the price of the stock on the current day is less than or equal to its price on the given day.

**Constraints:**
      
       N is the size of the array. The second line contains N input C[i].
      
       1 ≤ N ≤ 200
       
       1 ≤ C[i] ≤ 800

**Example 1 :**

        Input:
                7
                100 80 60 70 60 75 85
         
        Output:  1 1 1 2 1 4 6

**Example 2 :**

        Input:
                6
                10 4 5 90 120 80
                
        Output:  1 1 2 4 5 1
          
           
 >>Time complexity : **O(n)**  & Auxiliary Space : **O(1)**.

***[For Reference](https://practice.geeksforgeeks.org/problems/stock-span-problem/0)***
