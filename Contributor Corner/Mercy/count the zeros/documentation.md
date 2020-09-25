

# Documentation
## Count the Zeros

<a><img src= "https://img.shields.io/badge/-Amazon-blue" height="25">&nbsp;&nbsp;<img src= "https://img.shields.io/badge/-yahoo-green" height="25">&nbsp;&nbsp;<img src= "https://img.shields.io/badge/-geeksforgeeks-violet" height="25">&nbsp;&nbsp;<img src= "https://img.shields.io/badge/-CPP-red">&nbsp;&nbsp;<img src= "https://img.shields.io/badge/-Python-brightgreen"></a>


#### Problem Statement 
Given an array of size N consisting of only 0's and 1's ,which is sorted in such a manner that all the 1's are placed first and then they are followed by all the 0's. You have to find  the count of all the 0's.
 

    Example 1:
    
    Input: arr[] = {1, 1, 1, 1, 0, 0}
    Output: 2

    Example 2:
    
    Input: arr[] = {1, 0, 0, 0, 0}
    Output: 4

#### Solution
     def firstZero(arr, low, high): 
         if (high >= low):
            mid = low + int((high - low) / 2) 
            if (( mid == 0 or arr[mid-1] == 1) and arr[mid] == 0): 
                return mid
            if (arr[mid] == 1):  
                return firstZero(arr, (mid + 1), high) 
            else:  
                return firstZero(arr, low, (mid - 1)) 
         return -1
     def countZeroes(arr, n): 
         first = firstZero(arr, 0, n - 1) 
         if (first == -1): 
             return 0
         return (n - first)
  