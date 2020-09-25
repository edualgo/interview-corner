def repeat( arr, size): 
    for i in range(size): 
        if arr[abs(arr[i])-1] > 0: 
            arr[abs(arr[i])-1] = -arr[abs(arr[i])-1] 
        else: 
            print(abs(arr[i]),end=" ") 
              
    for i in range(size): 
        if arr[i]>0: 
            print(i + 1) 
test=int(input())
while test:
    n=int(input())
    arr = input().split()
    for i in range(len(arr)):
        arr[i] = int(arr[i])
    repeat(arr, n) 
    test-=1
