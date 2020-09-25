# DOCUMENTATION
## COUNT THE REVERSAL<br>
<a><img src="https://img.shields.io/badge/-Amazon-blue" height="25">&nbsp;&nbsp;<img src= "https://img.shields.io/badge/-Interview Bit-navy" height="25">
&nbsp;&nbsp;<img src= "https://img.shields.io/badge/-Python-red" height="25"></a><br>
**Problem Statement**<br>
Given a string S consisting only of opening and closing curly brackets '{' and '}' find out the minimum number of reversals required to make a balanced expression.
```
Example 1

4
}{{}}{{{
{{}}}}
{{}{{{}{{}}{{
{{{{}}}}
```
> > 3
> > 1
> > -1
> > 0
#### Solution<br>
```
def minReverse(exp):
    if len(exp)%2!=0:
        return -1
    c=0
    op=0

    for e in exp:
        if e=='}' and op==0:
            op=1
            c+=1
        elif e=='}':
            op-=1
        else:
            op+=1

    if op%2!=0:
        return -1
    else:
        return c+op//2




if __name__ == '__main__':
    tcs=int(input())

    for _ in range(tcs):
        exp=input()
        print(minReverse(exp))