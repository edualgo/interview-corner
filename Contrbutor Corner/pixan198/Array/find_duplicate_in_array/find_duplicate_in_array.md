# Documentation

## Find Duplicate in Array

<img src="https://img.shields.io/badge/Asked in-Amazon, VMWare, Riverbed-blue" alt="Google" />

### Problem Statement

> **Given a read only array of n + 1 integers between 1 and n, find one number that repeats in linear time using less than O(n) space and traversing the stream sequentially O(1) times**

**Sample I/O**
```
Input: [3, 4, 1, 4, 1]

Output: 1
```

> `NOTE`: If there are multiple possible answers ( like in the sample case above ), output any one.

> If there is no duplicate, output `-1`

### Naive Approach

A naive approach could be to count all elements and store them in an array, and when we encounter any element which is occurring more than one then we return it.
This solution takes O(n) time and O(n) auxiliary space.

#### Pseudo Code

```
This Program returns duplicate element in an array

function repeatedNumber ( Arguement givenArray ){
    
    Define an array "count" of size (givenArray - 1)
    Initialize all elements of count with 0
    
    traverse the givenArray and increase the count of elements of givenArray corresponding to that index number in count array
    
    If(count[iterator] > 1){
        return count[iterator]
    }
    
    return -1
}
```

> #### C++ Function Implementation

```cpp
int repeatedNumber(const vector<int> &A) {
    vector<int> count(A.size()-1, 0);
    
    for(int i=0; i<A.size(); i++)
    {
        count[A[i]-1]++;
        if(ret[A[i]-1]>1) return A[i];
    }
    
    return -1;
}
```

### Optimized Approach (Space Optimization)

Approach uses Floyd's Tortoise and Hare Algorithm

- Form following nested sequence using function `f(x) = A[x]` starting with index `x = 0`
```
A[0], A[A[0]], A[A[A[0]]], A[A[A[A[0]]]],. . . . . . . .
```
- Each member in the sequence is an element of A[]
- This sequence will form a cycle if there is a duplicate element in the array with duplicate element entry point to the cycle

##### Sample Array
<img src="https://pixan198.github.io/images/array.svg" />

##### Cycle formed in array A[ ]
<img src="https://pixan198.github.io/images/cycle.svg" />

traversal starts from `A[0] = 3` and it enters cycle through `A[3] = 4`

The Algorithm has two traversal variables called Hare and Tortoise, Hare being fast and Tortoise slow
```
Hare = A[A[Hare]]

Tortoise = A[Tortoise]
```
- Hare is fast so it enters the cycle first and Tortoise enters later
- Since, Hare is fast so it completes cycle before Tortoise and itersects with it at some point middle in array
- Now, move tortoise to the starting point of sequence and leave Hare within the cycle
- Both move with same speed i.e., `Hare = A[Hare]` and `Tortoise = A[Tortoise]`
- They will intersect at duplicate element
- Stop when they intersect and you have the duplicate element

#### Pseudo Code
```
function repeatedNumber ( Arguement givenArray ){
    
    Initialize Tortoise and Hare Variables with first element of givenArray
    
    Loop until we find the intersection point of Hare and Tortoise
    
        define speed of Hare and Tortoise
    
        Hare = givenArray[givenArray[Hare]]
        Tortoise = givenArray[Tortoise]
    
        Exit Loop when Hare == Tortoise
    
    Move Tortoise to start of givenArray
    
    Loop until Tortoise is not equal to Hare
        Exit Loop when Tortoise == Hare
    
    
    return Tortoise
}
```
#### C++ Function Implementation

```cpp
int repeatedNumberOptimized(int arr[]) 
{ 
    int Tortoise = arr[0]; 
    int Hare = arr[0]; 
    
    while (1) { 
  
        Tortoise = arr[Tortoise]; 
        Hare = arr[arr[Hare]];
        
        if (Tortoise == Hare) 
            break; 
    } 
  
    Tortoise = arr[0]; 
    
    while (Tortoise != Hare) { 
        Tortoise = arr[Tortoise]; 
        Hare = arr[Hare]; 
    } 
   
    return Tortoise; 
} 
```
