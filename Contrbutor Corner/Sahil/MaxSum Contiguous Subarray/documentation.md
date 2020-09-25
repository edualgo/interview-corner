# Documentation

## **Max Sum Contiguous Subarray**

Asked in:  <a><img src= "https://img.shields.io/badge/-Goldman Sachs-orange" height="25">&nbsp;&nbsp;
<img src= "https://img.shields.io/badge/-Facebook-blue" height="25">&nbsp;&nbsp;
<img src= "https://img.shields.io/badge/-PayTm-skyblue" height="25">&nbsp;&nbsp;
<img src= "https://img.shields.io/badge/-Paypal-navy" height="25">&nbsp;&nbsp;
<img src= "https://img.shields.io/badge/-Yahoo-purple" height="25">&nbsp;&nbsp;
<img src= "https://img.shields.io/badge/-Microsoft-yellow" height="25">&nbsp;&nbsp;
<img src= "https://img.shields.io/badge/-LinkedIn-red" height="25">&nbsp;&nbsp;
<img src= "https://img.shields.io/badge/-Amazon-black" height="25">&nbsp;&nbsp;
<img src= "https://img.shields.io/badge/-InterviewBit-skyblue" >&nbsp;&nbsp;
<img src= "https://img.shields.io/badge/-CPP-red">&nbsp;&nbsp;


### Problem Statement 
Find the contiguous subarray within an array, A of length N which has the largest sum.


 **Input Format:**
   
     The first and the only argument contains an integer array,A.
 
 **Output Format:**
   
     Return an integer representing the maximum possible sum of the contiguous subarray.

**Constraints:**

     1 <= N <= 1e6

    -1000 <= A[i] <= 1000

**For example:**

    Input 1:
        A = [1, 2, 3, 4, -10]

    Output 1:
         10

>> ***Explanation 1:***
The subarray [1, 2, 3, 4] has the **maximum possible sum of 10**.

    Input 2:
        A = [-2, 1, -3, 4, -1, 2, 1, -5, 4]

    Output 2:
         6

>>***Explanation 2:***
 The subarray [4,-1,2,1] has the **maximum possible sum of 6**.
 
 
 
 ## Solution:-
 
**Bruteforce Approach :**  Using 3 loops.
        
        1) for loop from 0 to n-1:
           (a) for loop from i to n-1:
               (i) set sum =0
               (ii) for loop from i to j:
                     sum+=A[k]
                     if(sum>max) then max=sum
        2) End of all loops.
        3) return max
      
>>**Time complexity :** *O(n^3)*

**Cumulative Sum Approach:** 
We can replace the innermost loop in bruteforce algorithm with array of sum such as:
         
         Sum=TotalSum[j]-TotalSum[i]+a[i]
         
         where, 
               TotalSum is the sum of all subarray with same size as of input array.
               TotalSum[i]=TotalSum[i-1]+a[i]
               
>>**Time complexity :** *O(n^2)*         

**Kadane’s Algorithm :**
 
       MaxSum(a[],size)
         1) Initialize:
               max = a[0]
               sum = a[0]
         2) Loop for each element of the array except 0th element
              (a)sum = MAX(a[i],sum+a[i])
              (b)max = MAX(max,sum)
         3) return max
         
>>**Time Complexity:** *O(n)* 


>>**Algorithmic Paradigm:** *Dynamic Programming*

***[For Reference](https://www.interviewbit.com/problems/max-sum-contiguous-subarray/)***
