# Documentation

## Heap Sort 

<a><img src= "https://img.shields.io/badge/-Amazon-blue" height="25">&nbsp;&nbsp;<img src= "https://img.shields.io/badge/-Oracle-navy" height="25">&nbsp;&nbsp;<img src= "https://img.shields.io/badge/-Samsung-blue" height="25">&nbsp;&nbsp;<img src= "https://img.shields.io/badge/-Leetcode-navy" >&nbsp;&nbsp;<img src= "https://img.shields.io/badge/-Interviewbit-pink" >&nbsp;&nbsp;<img src= "https://img.shields.io/badge/-geeksforgeeks-violet" height="25">
&nbsp;&nbsp;<img src= "https://img.shields.io/badge/-CPP-red">&nbsp;&nbsp;<img src= "https://img.shields.io/badge/-Python-brightgreen"></a>


#### Problem Statement 
Given an array of size N. The task is to sort the array elements by completing functions heapify() and buildHeap() which are used to implement Heap Sort.

    Example 1:
    
    Input: N = 5
          arr[] = {4,10,3,5,1}
    Output: 1 3 4 5 10      
    
    Example 2:
    
    Input: N = 10
          arr[] = {10,9,8,7,6,5,4,3,2,1}
    Output: 1 2 3 4 5 6 7 8 9 10 
    

#### Solution
Heapify procedure can be applied to a node only if its children nodes are heapified. So the heapification must be performed in the bottom up order.

    Lets understand with the help of an example:
    Input data: 4, 10, 3, 5, 1
            4(0)
            /   \
         10(1)   3(2)
         /   \
       5(3)    1(4)

    The numbers in bracket represent the indices in the array 
     representation of data.

    Applying heapify procedure to index 1:
            4(0)
           /   \
        10(1)    3(2)
        /   \
     5(3)    1(4)

    Applying heapify procedure to index 0:
            10(0)
            /  \
          5(1)  3(2)
         /   \
       4(3)    1(4)
    The heapify procedure calls itself recursively to build heap
    in top down manner.


##### Method-1      
###### CPP code
    #include <iostream>
    using namespace std;
  
     void heapify(int arr[], int n, int i) {
        // Find largest among root, left child and right child
         int largest = i;
         int left = 2 * i + 1;
         int right = 2 * i + 2;
  
    if (left < n && arr[left] > arr[largest])
      largest = left;
  
    if (right < n && arr[right] > arr[largest])
      largest = right;
  
    // Swap and continue heapifying if root is not largest
    if (largest != i) {
      swap(arr[i], arr[largest]);
      heapify(arr, n, largest);
     }
    }
  
     // main function to do heap sort
     void heapSort(int arr[], int n) {
        // Build max heap
        for (int i = n / 2 - 1; i >= 0; i--)
         heapify(arr, n, i);
  
     // Heap sort
    for (int i = n - 1; i >= 0; i--) {
      swap(arr[0], arr[i]);
  
      // Heapify root element to get highest element at root again
      heapify(arr, i, 0);
    }
    }
  
      // Print an array
       void printArray(int arr[], int n) {
             for (int i = 0; i < n; ++i)
             cout << arr[i] << " ";
             cout << "\n";
         }
  
       int main() {
          int arr[] = {1, 12, 9, 5, 6, 10};
          int n = sizeof(arr) / sizeof(arr[0]);
          heapSort(arr, n);
  
          cout << "Sorted array is \n";
          printArray(arr, n);
       }

##### Method-2
###### Python code
     def heapify(arr, n, i):
      # Find largest among root and children
      largest = i
      l = 2 * i + 1
      r = 2 * i + 2
  
      if l < n and arr[i] < arr[l]:
          largest = l
  
      if r < n and arr[largest] < arr[r]:
          largest = r
  
      # If root is not largest, swap with largest and continue heapifying
      if largest != i:
          arr[i], arr[largest] = arr[largest], arr[i]
          heapify(arr, n, largest)
  
  
      def heapSort(arr):
         n = len(arr)
  
      # Build max heap
      for i in range(n//2, -1, -1):
          heapify(arr, n, i)
  
      for i in range(n-1, 0, -1):
          # Swap
          arr[i], arr[0] = arr[0], arr[i]
  
          # Heapify root element
          heapify(arr, i, 0)
  
  
          arr = [1, 12, 9, 5, 6, 10]
          heapSort(arr)
          n = len(arr)
          print("Sorted array is")
          for i in range(n):
             print("%d " % arr[i], end='')
 
  ######  Complexity Analysis of Heap Sort
        Worst Case Time Complexity: O(n*log n)

        Best Case Time Complexity: O(n*log n)

        Average Time Complexity: O(n*log n)

        Space Complexity : O(1)
