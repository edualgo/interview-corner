# Documentation

## Reverse Words in the given String

<img src="https://img.shields.io/badge/Asked in-Accolite | Adobe | Amazon | Cisco | Goldman Sachs | MakeMyTrip | Microsoft | Paytm | Samsung | SAP Labs-blue" alt="Google" />

### Problem Statement

> Given a String S, reverse the string without reversing its individual words. Words are separated by dots.

#### Input

The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.

First Line of each test case contains a string whose words are seperated by dots.

#### Output

Reversed string without reversing the words

#### Sample I/O
```
Input:
2
i.like.this.program.very.much
pqr.mno

Output:
much.very.program.this.like.i
mno.pqr

```

### Approach

We will first reverse all individual words in string and when all words are reversed we will reverse whole string at once so that we get required output.

<img src="https://pixan198.github.io/images/reverse_word.svg" alt="example" />

#### Pseudo Code
```
Create two variables start and end and initialize start = 0 and end = 0

Traverse the string taking end as iterator:
  If you find '.':
    reverse the string from start to end
    update start = end + 1

Reverse the last word from start to end 
// this is done because there is no '.' between last word and end of string

Reverse whole string at once
```

#### C++ Function Implementation

```cpp
string reverseWords(string s) 
{ 
    int start = 0; 
	
	for (int end = 0; end < s.length(); end++) { 
	
		if (s[end] == '.') { 
			reverse(s.begin() + start, s.begin() + end); 
			start = end + 1; 
		} 
	
	} 
	
	reverse(s.begin() + start, s.end()); 
	
	reverse(s.begin(), s.end());
	 
	return s;
}
```
