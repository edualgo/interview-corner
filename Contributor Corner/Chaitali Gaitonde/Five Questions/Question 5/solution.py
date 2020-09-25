test=int(input())
for i in range(test):
    size=int(input())
    arr=list(map(int,input().split()))
    left=0
    right=size-1
    sum,minsum=0,10**9
    arr.sort()
    while(left<right):
        sum=arr[left]+arr[right]
        if(abs(sum)<abs(minsum)):
            minsum=sum
        if(sum<0):
            left+=1
        else:
            right-=1
    print(minsum)
    
    
  
