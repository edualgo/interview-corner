# -*- coding: utf-8 -*-
"""
Created on Thu Jul 30 23:10:00 2020

@author: user
"""
'''sort 0s,1s and 2s '''
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