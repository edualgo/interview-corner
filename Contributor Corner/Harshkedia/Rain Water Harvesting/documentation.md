# Documentation

## Rain Water Harvesting

<a><img src= "https://img.shields.io/badge/-Adobe-orange" height="25">&nbsp;&nbsp;<img src= 
"https://img.shields.io/badge/-Microsoft-blue" height="25">&nbsp;&nbsp;<img src= "https://img.shields.io/badge/-Amazon-violet" >
&nbsp;&nbsp;<img src= "https://img.shields.io/badge/- Patym-brightgreen"></a>

#### Problem Statement

Apoorvaa has created an elevated roof. She wants to know how much water can she save during rain.

Given n non negative integers representing the elevation map where width of every bar is 1, Find the maximum water that she can save. 

First line contains an integer n. Second line contains n space separated integers representing the elevation map.

    Example 1:

     10
     0 2 1 3 0 1 2 1 2 1

> > Should Return as 5

## Approach

To find the highest bar on the left and right, array traversal is needed which reduces the efficiency of the solution. To make this efficient one must pre-compute the highest bar on the left and right of every bar in linear time. Then use these pre-computed values to find the amount of water in every array element.

 Complexity Analysis:

    Time Complexity: O(n).
    Only one traversal of the array is needed, So time Complexity is O(n).
    Space Complexity: O(n).
    Two extra array is needed each of size n.


