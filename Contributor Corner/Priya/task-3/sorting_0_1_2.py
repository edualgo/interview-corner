
# Function to sort the array of 0s, 1s and 2s 
def sortArr(arr, n): 
    c0,c1,c2 = 0,0,0
      
    # Count the number of 0s, 1s and 2s in the array 
    for i in range(n): 
        if arr[i] == 0: 
            c0+=1
          
        elif arr[i] == 1: 
            c1+=1
              
        elif arr[i] == 2: 
            c2+=1
      
    # Update the array 
    i = 0
      
    # Store the 0s in the beginning 
    while (c0 > 0): 
        arr[i] = 0
        i+=1
        c0-=1
      
    # store all the 1s 
    while (c1 > 0): 
        arr[i] = 1
        i+=1
        c1-=1
      
    # store all the 2s 
    while (c2 > 0): 
        arr[i] = 2
        i+=1
        c2-=1
      
    return arr
  
  
# Driver's code 
  
arr = [0,1,2,0,1,1,0,0,2,1,0,2] 
n = len(arr) 
  
print(sortArr(arr, n)) 
