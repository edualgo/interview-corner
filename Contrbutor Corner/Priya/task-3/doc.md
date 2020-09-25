<html>
  <head>## Documentation ## </head>
  <body>
  <div>
        <p> <b>**Algorithmic Treasure ** </b></p>
        <p><b>**Project ID: 19**</b></p>
    </div>

<p> <b> All the algorithms are coded in Python Language</b></p>
<p><b> Solution: Question 1 :Union of two arrays </b> </p>
 <p> <b>1.  Optimized Approach:-</b> <br>
         (i) Accept elements in  both the array(s) and store their lenght in two separate variable.<br>
         (ii) Merge the two array using "+" operator and store it in a variable .<br>
         (iii) sort the merged array using "sorted() " function  <br>
         (iv) store the sorted merged array in set [Since set does not contain duplicate elements ]  <br>
         (v)  return the final array.
  </p>
 <p> <b>  2. Time and Space complexity :-</b><br>
         Time Complexity :- O(m+n)<br>
         Space Complexity:- O(m+n)
 </p>
 <p> <b>3. Pseudocode </b> <br>
         def function(arr1, arr2 , M ,N):<br>
            result = arr1 + arr2 <br>
           return sorted(set(result))  <br>     
         
         
          >>  OUTPUT
          Input: M=7 arr1 = [1,2,2,4,5,5,6] 
          Input: N=7 arr2 = [6,6,7,7,8,9,9]
          Output: {1,2,4,5,6,7,8,9}
  </p>
<p><b> Solution: <i>Question 2 </i> : Sort an array of 0s, 1s and 2s  </b> </p>
 <p> <b>1.  Optimized Approach:-</b> <br>
         (i)Count the number of 0s , 1s , 2s in the array .<br>
         (ii) Store all the 0s from the beginning , next store all 1s and then store all the 2s at the end.<br>
  </p>
 <p> <b> 2. Time and Space complexity :- </b><br>
         Time Complexity :- O(n)<br>
         Space Complexity:- O(1)
 </p>
 <p> <b>3. Pseudocode </b><br>
         def sort (arr , n ): <br>
             c0,c1,c2 =0,0,0 <br>
             for i 0 .... n: <br>
                 count the number of 0 ;c0<br>
                  count the number of 1 ;c1<br>
                  count the number of 2 ;c2 <br>
              update the value of i ; i=0  <br>
                  store  all the  0s at the beginning <br>
                  then store all the 1s <br>
                  finally store all the 2s <br>
               display the sorted array
              
     
          >>  OUTPUT
          Input: n=9 arr1 = [2,1,1,0,0,2,1,0,2] 
          Output: [0,0,0,1,1,1,2,2,2]
  </p>
  
<p><b> Solution: <i>Question 3 </i> : Sort a Stack   </b> </p>
 <p> <b>1.  Optimized Approach:-</b> <br>
         (i) create two stack ( s1 , s2 ) and a temporary variable (temp)<br>
         (ii) the original stack (s1) should be greater than 0 <br>
         (iii) assign temp to  the top element of the original stack , then push  temp value  into the another stack s2.<br>
         (iv) Now, again assign temp to the next top element of the original stack <br>
         (v) check if the temp value if greater than the s2 <br>
              &npbs then  push the temp value to original stack s1 <br>
              else push the temp value to s2 <br>
         (vi) return s2 <br>
  
  </p>
 <p> <b>  2. Time and Space complexity :-</b> <br>
         Time Complexity :- O(n*n)<br>
         Space Complexity:- O(1)
 </p>
 <p> <b>3. Pseudocode </b> <br>
         Create a original stack(s1) , temporary stack s2, temporary variable (temp). <br>
         While s1 is NOT empty :  <br>
               Assign temp to the top element of s1  <br>
         while s2 is NOT empty and top(s1) is greater than temp:  <br>
                Assign s1 to the value of s2  <br>
                push the value of temp in s2  <br>
        display s2   <br>
              
     
          >>  OUTPUT
                Input:  10 2 45 3 7
                Output: 45 10 7 3 2 
  
  
  
  
  </p>
  
 <p><b> Solution: <i>Question 4 </i> : Stack using 2 queue   </b> </p>
 <p> <b>1.  Optimized Approach:-</b> <br>
         (i) create two queue (q1 , q2) <br>
         (ii) enqueue the elements to the front of q1.<br>
         (iii) pop operation to dequeue from q1  <br>
         (iv) q2 is used to enqueue at the front of ‘q1’. <br>
          (v) return the popped element  <br>
  

  </p>
 <p><b> 2. Time and Space complexity :-</b><br>
         Time Complexity :- Push() - O(1) ; POP() -  O(N) <br>
         Space Complexity:- PUSH() -O(1) ; POP() - O(1)
 </p>
 <p> <b>3. Pseudocode </b><br>
         Create two queue (q1, q2) <br>
         push(x): [x is the element to be pushed in the stack] <br>
         Enqueue x to q2 <br>
         One by one dequeue everything from q1 and enqueue to q2. <br>
         Swap the names of q1 and q2 <br>
         pop(s): <br>
        Dequeue an item from q1 and  <br>
         return the popped element <br>
              
     
          >>  OUTPUT
          Input: 
                 push(20)
                 push(4)
                 pop()
                 push(7)
                 pop()
          Output: 4 7
 </p>
          
 
 
 
 
 <p><b> Solution: <i>Question 5 </i> : Anagram    </b> </p>
 <p> <b>1.  Optimized Approach:-</b> <br>
         (i) check the length of the both strings  <br>
         (ii) check each alphabet of the both strings <br>
  </p>
  <p><b> 2. Time and Space complexity :-</b><br>
         Time Complexity :- O(n)<br>
         Space Complexity:- O(Number of distinct characters)
 </p>
<p> <b> 3. Pseudocode  </b> <br>
        Accept two strings (a,b) <br>
        check if the lenght (a) != (b) <br>
                 then return False  <br>
           else : sort the array a and store it in a; sort array b and store it in a  <br>
       for i=0 ....len(a) <br>
           if(a[i] == b[i]) <br>
              return True  <br>
               else: return False  <br>
              
     
          >>  OUTPUT
          Input: a = "restful" b = " fluster " 
          Output: True
  </p>
          
  
  </body>
