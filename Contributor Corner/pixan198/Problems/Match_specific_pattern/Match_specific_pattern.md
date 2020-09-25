# Documentation

## Match Specfic Pattern

<img src="https://img.shields.io/badge/Asked in-Amazon, Microsoft, MakeMyTrip-blue" alt="Companies" />

### Problem Statement

> Given a dictionary of words and a pattern. Every character in the pattern is uniquely mapped to a character in the dictionary. Find all such words in the dictionary that match the given pattern.

#### Input

The First line contains the number(N) of words in dictionary, following line contains N strings and last line contains the pattern.

#### Output

All strings (seperated by spaces) in dictionary that match the given pattern.

#### Sample I/O
```
Input:
4
abb abc xyz xyy
foo

Output:
abb xyy
```
> **Explanation:** xyy and abb have the same character at index 1 and 2 like the pattern.

### Approach

We will use hash map to map every character of pattern to its corresponding character in string.
- If the current character is not been mapped, then map it to its corresponding character in given string
- If the current character has been mapped before then check if the corresponding character is same with current corresponding value or not
- If there are no contradictions then add this word to the match string array

<img src="https://pixan198.github.io/images/match_word.svg" alt="example" />

#### Pseudo Code

```
Traverse the dictionary and for every string in dictionary:
    Create a Character array of 128 and initialize all with NULL
    
    IF length of string and pattern match then:
        Check if the character has been mapped before
            IF Yes:
                Check if the corresponding character is same with the current one
            IF No:
                Map it to corresponding character
    On each successful traversal add the word to the array to be returned

Finally return the array of matched strings
```

#### C++ Function Implementation

```cpp

bool check(string pattern, string word) 
{ 
    if (pattern.length() != word.length()) 
        return false; 
  
    char ch[128] = { 0 }; 
  
    int len = word.length(); 
  
    for (int i = 0; i < len; i++) { 
        if (ch[pattern[i]] == 0) 
            ch[pattern[i]] = word[i]; 
        else if (ch[pattern[i]] != word[i]) 
            return false; 
    } 
  
    return true; 
} 

vector<string> findMatchedWords2(vector<string> dict, string pattern) 
{
    vector<string> match;
    int len = pattern.length(); 
  
    for (int i=0; i < dict.size();i++) { 
        
		if (check(pattern, dict[i])){
            match.push_back(dict[i]);
		} 
    
	}
    return match;
}
```
