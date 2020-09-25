# Documentation

## Convert Ternary Expression to Binary Tree

<img src="https://img.shields.io/badge/Asked in-Facebook, Nutanix-blue" alt="Companies" />

### Problem Statement

> Given a string that contains ternary expressions. The expressions may be nested. You need to convert the given ternary expression to a binary Tree and return the root.

#### Input

First line of input contains of test case T. The only line of test case consists of String s.

#### Output

Preorder traversal of Tree formed.

#### Constraints
```
1 <= T <= 100
1 <= |String| <= 100
```

#### Sample I/O
```
Input:
2
a?b:c
a?b?c:d:e

Output:
a b c
a b c d e
```
<div >
<img style="display:inline;" src="https://pixan198.github.io/images/treeabc.svg" alt="abc tree image"/>&nbsp;&nbsp;&nbsp;&nbsp;<img style="display:inline;" src="https://pixan198.github.io/images/treeabcde.svg" alt="abcde tree image"/>
</div>


### Approach

A simple approach to this problem can be to make first character as root node of tree and traverse the string one character at a time and:
- If the next character is '?' then we add the character after '?' as left node to its parent node
- If the next character is ':' then we add the character after ':' as right node to its parent node
- If it is last character of string then we return the pointer to root node

#### Pseudo Code

```
Declare a static variable "i" initialize it to 0
Node *convertExpression(string str,int j){ // we are not using variable "j" instead we'll use i
    
    Create a node at ith position and set its data to first character of given string
    
    Check if we're at last character of string
    IF Yes{
      reset "i" to 0 // Because we need to start from first character of new string
      return root of this tree
    }
    
    Increment i
    
    Check if the character is '?'
    IF Yes{
      Increment i
      make a recursive call to this function and store the returned value as root->left
      Increment i
      make a recursive call to this function and store the returned value as root->right
      return root
    }
    IF Not{
      return root
    }
    
}
```

#### C++ Function Implementation

```cpp
static int i=0;

Node *convertExpression(string str,int j)
{
	  Node * root =new Node(str[i]); 
  
    if(i == str.length()-1) {
    	i=0;
		  return root;
	  } 
  
    i++; 

    if(str[i]=='?') { 
        i++; 
  
        root->left = convertExpression(str,i); 
          
        i++; 

        root->right = convertExpression(str,i); 

        return root; 
    } 
    else {
		return root;
	}
}
```
