# Documentation

## Median Of Two Sorted Arrays

<a><img src= "https://img.shields.io/badge/-Google-orange" height="25">&nbsp;&nbsp;<img src= 
"https://img.shields.io/badge/-Amazon-blue" height="25">&nbsp;&nbsp;<img src= "https://img.shields.io/badge/-PayTm-green" height="25">&nbsp;&nbsp;<img src= "https://img.shields.io/badge/-Leetcode-violet" >
&nbsp;&nbsp;<img src= "https://img.shields.io/badge/-CPP-red">&nbsp;&nbsp;<img src= "https://img.shields.io/badge/-Python-brightgreen"></a>


### Problem Statement 
There are two sorted arrays **num1** and **num2** of size m and n respectively. 

Find the median of the two sorted arrays. The overall run time complexity should be **O(log (m+n))**.
You may assume **num1** and **num2** cannot be both empty.

    Example 1:

    nums1 = [1, 3]
    nums2 = [2]

>> The median is 2.0

    Example 2:

    nums1 = [1, 2]
    nums2 = [3, 4]

>> The median is (2 + 3)/2 = 2.5

### Solution

#### Method -1 

```cpp
double findMedian(vector<int>& num1,vector<int>& num2)
{
   vector<int> final_num;
   int i=0,j=0;
   int num1_size = num1.size(),num2_size = num2.size();

   /// Merging the two sorted arrays
   while(i<num1_size && j<num2_size)
   {
       if(num1.at(i) < num2.at(j))
       {
           final_num.push_back(num1.at(i));
           i++;
       }
       else
       {
           final_num.push_back(num2.at(j));
           j++;
       }
   }
   while(j<num2_size)
   {
       final_num.push_back(num2.at(j));
       j++;
   }
   while(i<num1_size)
   {
       final_num.push_back(num1.at(i));
       i++;
   }

   /// Finding the median
   double median;
   int final_size = final_num.size();
   if(final_size%2==0)
   {
       median = (final_num.at(final_size/2) + final_num.at((final_size/2)-1))/2.0;
   }
   else
   {
       median = (final_num.at(final_size/2))*1.0;
   }
   return median;
}
```

##### Approach

* Create an array named **final_num**, that will hold the sorted value (space complexity O(m+n), where m is the size of num1 and n is the size of num2)
* Take two iterator variable **i** and **j** to iterate over two arrays **num1** and **num2** respectively.
* During each iterattions find the lowest value and place that in the array (Worst case Time complexity- O(m+n), Average Case Time Complexity - O(n), Hence the total time complexity is O(n))
* It is possible that one array is of small size and other one is of large size, hence need two more loops.
* Finally find the median.

#### Method - 2

```cpp
/// Optimized solution using built-in sort
double findMedian_optimized(vector<int>& num1,vector<int>& num2)
{
    double median;
    int num2_size = num2.size();

    /// appending all array elements to one single array
    for(int i=0;i<num2_size;i++)
    {
        num1.push_back(num2.at(i));
    }

    /// sorting the array elements
    sort(num1.begin(),num1.end());
    int num1_size = num1.size();

    /// Finding the median of the array
    if(num1_size%2==0)
    {
        median = (num1.at(num1_size/2-1)+num1.at(num1_size/2))/2.0;
    }
    else
    {
        median = double(num1.at(num1_size/2));
    }
    return median;
}
```
##### Approach

* Append all the elements of num2 to num1, Space Complexity = O(n), Time complexity = O(n) where n is the size of num2
* sort num1, using the built-in-sort, Time complexity, O(logn) which is less than O(n) in the above point.
* find median using the normal method
* return the median 

#### The Python Approach 

###### Method -1 

```python
    # method to get the median using merge two sorted array algorithm
    def findMedian(self,num1,num2):
        final_num = []
        i = 0
        j = 0
        num1_size = len(num1)
        num2_size = len(num2)

        # merging to sorted arrays
        while(i < num1_size and j < num2_size):
            if(num1[i] < num2[j]):
                final_num.append(num1[i])
                i+=1
            else:
                final_num.append(num2[j])
                j+=1

        while(j < num2_size):
            final_num.append(num2[j])
            j+=1

        while(i < num1_size):
            final_num.append(num1[i])
            i+=1

        # computing the median
        final_size = len(final_num)
        if(final_size%2==0):
            median = (final_num[int(final_size/2)]+final_num[int(final_size/2)-1])/2
        else:
            median = final_num[int(final_size/2)]
        return median

```

###### Method -2

```python
    # method to get the median using an optimized method
    def findMedian_optimized(self,num1,num2):
        num2_size = len(num2)

        # appending both arrays into one
        for i in range(num2_size):
            num1.append(num2[i])

        # sorting the appended array
        num1.sort()

        # computing the median
        final_size = len(num1)

        if(final_size%2==0):
            median = (num1[int(final_size/2)]+num1[int(final_size/2)-1])/2
        else:
            median = num1[int(final_size/2)]
        return float(median)
```










