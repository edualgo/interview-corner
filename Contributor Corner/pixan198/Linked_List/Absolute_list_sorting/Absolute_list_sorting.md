# Documentation

## Absolute List Sorting
<img src="https://img.shields.io/badge/Asked in-Amazon, OYO-blue" alt="Amazon" />

### Problem Statement
> Given a linked list L of N nodes, sorted in ascending order based on the absolute values of its data. Sort the linked list according to the actual values.

Sample I/O
  ```
    Input : [1] -> [-2] -> [-3] -> [4] -> [-5]
    Output: [-5] -> [-3] -> [-2] -> [1] -> [4]
  ```
#### Input
> The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case consists of two lines. The first line of each test case contains a positive integer N denoting the size of linked list. The second line of each test case contains N space separated integers denoting the values of N nodes.

#### Output
> Corresponding to each test case, the expected output will be space separated values of the sorted linked list.

### Naive Approach

A naive approach could be to sort the linked list using any sorting algorithm, for example: Insertion Sort, Selection Sort, Merge Sort,etc. By this method the best time complexity you can achieve is O(nlogn).

#### Pseudo Code

> MergeSort(headRef)
> 1. Check for HEAD if its NULL then return
> 2. Check if there is only one element in the Linked List then return
> 3. Else divide the linked list into two halves
> 4. Sort the two halves A and B 
     [ MergeSort(A); MergeSort(B); ]
> 5. Merge the sorted A and B and update the HEAD pointer

### Time Optimized Approach

As you can see the sample I/O input list is sorted on absolute values but if you see closely all positive numbers are sorted in ascending order but negative numbers in descending order, we can take advantage of this fact.
What we'll do is, we will traverse the LL and whenever we find a negative number or any number which is out of order, we will remove it from that position and insert it at the beginning of LL.

#### Pseudo Code

> sortList(Node** head)
> 1. Define two variables prev and curr
>     - set prev to head pointer and curr next to head pointer
> 2. Traverse the list to the end
>     - If( curr < prev ) then remove curr from linked list and insert it at beginning

#### C++ Function Implementation
```cpp
void sortList(Node** head)
{
    Node* prev = (*head); 
    Node* curr = (*head)->next; 
  
    while (curr != NULL) {
    
        if (curr->data < prev->data) { 
            prev->next = curr->next; 
   
            curr->next = (*head); 
            (*head) = curr; 
   
            curr = prev; 
        } 
        else{
            prev = curr; 
        }
        
        curr = curr->next; 
    }
}
```
