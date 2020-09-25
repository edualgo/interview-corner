# Documentation

##  Form Biggest Number

<a><img src= 
"https://img.shields.io/badge/-Amazon-blue" height="25">&nbsp;<img src= "https://img.shields.io/badge/-Microsoft-violet" >
&nbsp;&nbsp;<img src= "https://img.shields.io/badge/-Patym-brightgreen"></a>

#### Problem Statement

Given a list of non negative integers, arrange them in such a manner that they form the largest number possible.The result is going to be very large, hence return the result in the form of a string.

Input Format

First line contains integer t which is number of test case.
For each test case, you are given a single integer n in the first line which is the size of array A[] and next line contains n space separated integers denoting the elements of the array A .

    Example 1:
    1
    4
    54 546 548 60

> > Return as **6054854654**

Upon rearranging the elements of the array , 6054854654 is the largest possible number that can be generated.

## Approach

In the used sorting algorithm, instead of using the default comparison, write a comparison function compare() and use it to sort numbers.

Given two numbers X and Y, how should compare() decide which number to put first – we compare two numbers XY (Y appended at the end of X) and YX (X appended at the end of Y). If XY is larger, then X should come before Y in output, else Y should come before. 

