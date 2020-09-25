# -*- coding: utf-8 -*-
"""
Created on Thu Jul 30 23:22:59 2020

@author: user
"""
'''
 count the 0's in the array. 
 
'''
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

