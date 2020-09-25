# Documentation

## Add One To Number

<a><img src= "https://img.shields.io/badge/-Google-orange" height="25">&nbsp;&nbsp;<img src= 
"https://img.shields.io/badge/-Microsoft-blue" height="25">&nbsp;&nbsp;<img src= "https://img.shields.io/badge/-InterviewBit-violet" >
&nbsp;&nbsp;<img src= "https://img.shields.io/badge/-Python-brightgreen"></a>

#### Problem Statement

Given a non-negative number represented as an array of digits,

add 1 to the number ( increment the number represented by the digits ).

The digits are stored such that the most significant digit is at the head of the list.

    Example 1:

    If the vector has [1, 2, 3]
    the returned vector should be [1, 2, 4]

> > Should Return as 123 + 1 = 124

## Approach

Reverse the digits of the number to make your life easier.

Maintain a carry which is initialized to 1 ( Denoting that we need to add one to the number ).
Run a loop on the digit array ( which is now reversed ), and add carry to the current digit. If the digit D exceeds 10 on doing so, store the last digit in current position ( D % 10 ), and make carry = rest of the digits ( D / 10 ). Continue the process till you have covered all the digits.
Now if at the end, carry = 0, we are done, and we can return the array.

If not, we need to add one more digit, with carry in it.

#### Solution

To be added soon ... .. ...
