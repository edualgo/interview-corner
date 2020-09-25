# DOCUMENTATION
## Special Stack<br>
<a><img src="https://img.shields.io/badge/-Amazon-blue" height="25">&nbsp;&nbsp;<img src= "https://img.shields.io/badge/-Interview Bit-navy" height="25">
&nbsp;&nbsp;<img src= "https://img.shields.io/badge/-Python-red" height="25">&nbsp;&nbsp;
<a><img src="https://img.shields.io/badge/-IBM-blue" height="25">&nbsp;&nbsp;<img src= "https://img.shields.io/badge/-Zoho-navy" height="25"></a><br>
**Problem Statement**<br>
Given an input string and a dictionary of words, find out if the input string can be segmented into a space-separated sequence of dictionary words. See following examples for more details.

Consider the following dictionary
{ i, like, sam, sung, samsung, mobile, ice,
  cream, icecream, man, go, mango}

Input:  ilike
Output: Yes
The string can be segmented as "i like".

Input:  ilikesamsung
Output: Yes
The string can be segmented as "i like samsung" or "i like sam sung".
```
Example 1

2
12
i like sam sung samsung mobile ice cream icecream man go mango
ilike
12
i like sam sung samsung mobile ice cream icecream man go mango
idontlike
```
> > 1
> > 0
#### Solution<br>
```
class wordBreak:
    
    def solution(self):
        t  = int(input())
        while t>0:
            n = int(input())
            li = [str(i) for i in input().split()]
            s = input()
            z = ""
            st = ""
            for i in range(len(s)):
                z = z+s[i]
                if z in li:
                    st = st+z
                    z = ""
            if len(st) == len(s):
                print('1')
            else:
                print("0")
            t-=1
a = wordBreak()
a.solution()
```