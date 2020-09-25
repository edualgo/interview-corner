# Documentation

## **Pascal Triangle**

Asked in:  <a><img src= "https://img.shields.io/badge/-Google-red" height="25">&nbsp;&nbsp;
<img src= "https://img.shields.io/badge/-Amazon-yellow" height="25">&nbsp;&nbsp;
<img src= "https://img.shields.io/badge/-InterviewBit-skyblue" >&nbsp;&nbsp;
<img src= "https://img.shields.io/badge/-CPP-green">&nbsp;&nbsp;


### Problem Statement 
Given numRows, generate the first numRows of Pascal’s triangle.

**Pascal’s triangle** : To generate **A[C]** in row **R**, sum up **A’[C] and A’[C-1]** from previous row **R - 1**.

**Example :**
  
      Given numRows = 5,
      
      
      Return: 

        [
             [1],
             [1,1],
             [1,2,1],
             [1,3,3,1],
             [1,4,6,4,1]
        ]

 
 
 ### Solution:

**Bruteforce Approach :**
 
 A simple method is to run two loops and calculate the value of Binomial Coefficient in inner loop.
 The value of ith entry in line number line is **C(line, i)**. 
 The value can be calculated using following formula -

            C(line, i)   = line! / ( (line-i)! * i! )
>>Time complexity of this method is **O(n^3)**.

**Optimised Approach :**
Every entry is sum of the two values above it.
So we can create a 2D array that stores previously generated values. 
To generate a value in a line, we can use the previously stored values from array.
            
         printPascal(int n)
            1)Create arr[n][n]
            2)Loop until n rows
               (a) Loop until n columns  
                    (i) if(i=j or j=0) then  set arr[i][j]=1
                    (ii) else  arr[i][j]=sum(arr[i-1][j],arr[i-1][j-1])
               (b) Print arr[i][j]
                  End of inner loop
            3)End of outer loop
            4)Exit
           
 >>Time complexity : **O(n^2)**  & Space complexity : **O(n^2)**.

***[For Reference](https://www.interviewbit.com/problems/pascal-triangle/)***
