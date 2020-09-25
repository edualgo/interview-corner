# Documentation

## Sort an array of 0s, 1s and 2s

<a><img src= "https://img.shields.io/badge/-Microsoft-orange" height="25">&nbsp;&nbsp;<img src= 
"https://img.shields.io/badge/-Amazon-blue" height="25">&nbsp;&nbsp;<img src= "https://img.shields.io/badge/-Adobe-green" height="25">&nbsp;&nbsp;<img src= "https://img.shields.io/badge/-Paytm-navy" >&nbsp;&nbsp;<img src= "https://img.shields.io/badge/-geeksforgeeks-violet" height="25">
&nbsp;&nbsp;<img src= "https://img.shields.io/badge/-CPP-red">&nbsp;&nbsp;<img src= "https://img.shields.io/badge/-Python-brightgreen"></a>


#### Problem Statement 
Given an array A[] consisting 0s, 1s and 2s. The task is to write a function that sorts the given array. The functions should put all 0s first, then all 1s and all 2s in last.

    Example 1:

    Input: {0, 1, 2, 0, 1, 2}
    Output: {0, 0, 1, 1, 2, 2}
    
    Example 2:
    
    Input: {0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1}
    Output: {0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 2, 2}

#### Solution
    def sort012( a, arr_size): 
        lo = 0
        hi = arr_size - 1
        mid = 0
        while mid <= hi: 
           if a[mid] == 0: 
               a[lo], a[mid] = a[mid], a[lo] 
               lo = lo + 1
               mid = mid + 1
           elif a[mid] == 1: 
              mid = mid + 1
           else: 
               a[mid], a[hi] = a[hi], a[mid]  
               hi = hi - 1  
    return a
    def printArray( a): 
        for k in a: 
            print(k)
            
## Complexity Analysis:
       Time Complexity: O(n). 
       Only one traversal of the array is needed.
       Space Complexity: O(1). 
       No extra space is required.

## Algorithm:<br>
      1. Keep three indices low = 1, mid = 1 and high = N and there are four ranges, 1 to low (the range containing 0), low to mid (the range containing 1), mid to high (the range containing unknown elements) and high to N (the range containing 2).<br>
      2. Traverse the array from start to end and mid is less than high. (Loop counter is i)<br>
      3. If the element is 0 then swap the element with the element at index low and update low = low + 1 and mid = mid + 1<br>      
      4. If the element is 1 then update mid = mid + 1<br>
      5. If the element is 2 then swap the element with the element at index high and update high = high – 1 and update i = i – 1. As the swapped element is not processed<br>
      6. Print the output array.<br>