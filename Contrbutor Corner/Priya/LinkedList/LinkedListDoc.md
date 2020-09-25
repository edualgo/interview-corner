<html>
<head> ##  DOCUMENTATION  ##</head>

<body>
<div>
<p> <b>**Algorithmic Treasure ** </b></p>
<p><b>**Project ID: 19**</b></p>
</div>
<div>


<p> <b> All the algorithms are coded in Python Language</b></p>
<p><b> Solution:Question 1 </b> </p>
 <p> <b> 1.  Optimized Approach:- </b> <br>
    There are three pointers (prev , i , j) which are initially initilized to None , head , head respectively.<br>
    At the beginning the i and j pointer will point the very first node <br>
    check if j pointer and j.next pointer is valid  <br>
    then increase the j pointer to 2 steps ahead  <br>
    store the adress of i in prev pointer and  increase i pointer to 1 step ahead. <br>
    connect the address of prev pointer to the next address after i pointer.
  </p>
 <p><b>  2. Time and Space complexity :- </b><br>
         Time Complexity :- O(n)<br>
         Space Complexity:- O(1)
 </p>
 <p> <b> 3. Pseudocode </b><br>
         prev,i,j= none, head ,head         <br>
         while(j and j.next): <br>
         j =j.next.next <br>
         prev = i <br>
         i  =i.next   <br>
         prev.next = i.next <br>
         return head 
         
          >>  OUTPUT
          Input: [1 -> 2 -> 3-> 4-> 5]  Input: [1 -> 2 -> 3-> 4-> 5 -> 6]    
          Output: [1 ->2 ->4 -> 5 ]        Output : [1 -> 2 -> 3-> 5 -> 6] 
          
  </p>
  <p><b> Solution:Question 2</b> </p>
  <p> <b> 1.  Optimized Approach:- </b> <br>
    a temporary variable Pivot will store the element of the very first node  <br>
    Traverse the loop through the list and store the values to the left side  of the pivot value which are less than pivot <br>
    and store the values to the right side of the pivot value which are greater than pivot   <br>
    Now the value of pivot is located to it desired position  <br>
    Store the value of the pivot  <br>
    Now, sort the elements before the pivot value  and after the pivot value in the same manner as done before by calling the functions. <br>
    Finally print the sorted list  
    </p>
    
     2. Time and Space Complexity 
         Time Complexity : O(n^2) [Worst Case]
                        O(n log n) [ Average case]
         Space Complexity : O(1)
     
     3. Pseudocode </b><br>
          partition(a,lb,il)<br>
           Pivot =a[lb] <br>
           i=lb <br>
           j= ub <br>
           while (i<j): <br>
             while(a[i] <=Pivot ) : <br>
                i++ <br>
             while(a[j]> pivot  ):<br>
                 j--   <br>  <br>
             Swap (a[i],a[j])
            Swap(a[pivot],a[j])
            return end 
            
           QuickSort(a,lb,ub)
            if (lb<ub)
             loc = Partition (a,lb,ub)
          QuickSort(a,lb,loc-1)
          QuickSort(a,loc+1,ub)
         
         OUTPUT
         
          Input: [10 -> 7 -> 11-> 12-> 6]   
          Output:[ 6 -> 7 -> 10-> 11-> 12]  
          
  </div>
  </body>
  </html>

    
