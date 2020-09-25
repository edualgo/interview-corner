<html>
<head> ## DOCUMENTATION  ##</head>

<body>
<div>
<p> <b>**Algorithmic Treasure ** </b></p>
<p><b>**Project ID: 19**</b></p>
</div>
<div>


<p> <b> All the algorithms are coded in Python Language</b></p>
<p><b> Solution:Question 1 </b> </p>
 <p> 1.  Optimized Approach:- <br>
    The program is solved using function <br>
    remove_duplicate function is declared with two arguments( arr : a array which stores  the elements , n: size of the array) <br>
    the whole logic behind the program is that : <br>
    a loop will transverse through the array <br>
    if the current element  is not equal to the next element of the array then , store the element in a temporary list  <br>
    store the temporary assigned list to the original array and print the unique elements
  </p>
 <p> 2. Time and Space complexity :-<br>
         Time Complexity :- O(n)<br>
         Space Complexity:- O(1)
 </p>
 <p> 3. Pseudocode <br>
         y=0          <br>
         for x in 0...len(arr): <br>
         if(arr[x] !=arr[y]: <br>
         arr[x] = arr[y]; <br>
         x++              <br>
         return x+1  
         
          >>  OUTPUT
          Input: [1,2,2,4,5,5,6] 
          Output: [1,2,4,5,6]
  </p>
  

  <p><b> Solution:Question 2</b> </p>
  <p> 1.  Optimized Approach:- <br>
    The program is solved using function <br>
    remove_duplicate function is declared with two arguments( arr : a array which stores  the elements , n: size of the array) <br>
    the whole logic behind the program is that : <br>
    Min is initialized to its minimum value (-1) <br>
    a dictionary is declared <br>
    a loop will transverse through the array from right to left  <br>
    if the element is  present in the dictionary then <br>
    update the min <br>
    and if the element is not present ,then add the element in the dictionary<br>
    print the element with its index number.<br>
    <p> 2. Time and Space complexity  <br>
         Time Complexity: O(n)  <br>
         Space Comlexity:O(1)  <br>
       </p>
       <p> 3. Pseudocode <br>
          Min =-1 <br>
          newset=dict()   <br>
          for x in n-1..-1..-1:  <br>
          if arr[x] in newset.keys():   <br>
            Min = x   <br>
           else:   <br>
            myset[arr[x]] = 1   <br>
            print(arr[min], min)  <br>
            
          >>  OUTPUT 
           Input: [1,2,3,4,3,1,6]  
           Output: element: 3 ; index: 2 
                     
          
  </div>
  </body>
  </html>
