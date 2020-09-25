# Documentation

## Wave Array

<img src="https://img.shields.io/badge/Asked in-Google, Adobe, Amazon-blue" alt="Google" />

### Problem Statement

> **Given an array of integers, sort the array into a wave like array and return it,**
> **In other words, arrange the elements into a sequence such that `a1 >= a2 <= a3 >= a4 <= a5 . . . . .`**

**Example**
```
Given [1, 2, 3, 4]

One possible answer : [2, 1, 4, 3]
2     4
 \   / \
  \ /   \
   1     3

Another possible answer : [4, 1, 3, 2]
4     3
 \   / \
  \ /   \
   1     2

```
> `NOTE`: If there are multiple answers possible, return the one thats lexicographically smallest.
> So, in example case, you will return `[2, 1, 4, 3]`

### Approach

We can first sort array and then swap all adjacent array elements so that it forms a wave pattern. This solution will take `O(nlogn)` time if sorting algorithms like Merge Sort are used and time complexity will increase if time costlier algorithms like Insertion Sort are used.

We'd have done only swapping of adjacent elements in `O(n)` time and it would have satisfied first condition of this problem but this solution would fail in second condition i.e., Lexicographically smallest answer which could only be achieved by sorting the array first and then swapping. 

### Pseudo Code

```
This Program sorts the given array in a wave form

function wave ( Arguement givenArray ){
    Sort the givenArray using sort() function from STL
    
    swap Numbers of array in interval of two until last element is reached
    
    return sorted array
}
```

> ### C++ Function Implementation

```cpp
vector<int> wave(vector<int> &A) {
    sort(A.begin(),A.end());
    for(int i=0;i<A.size();i+=2)
        if(i+1<A.size())
            swap(A[i],A[i+1]);
    return A;
}
```
