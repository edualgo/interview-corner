
def union (a,b,m,n):
    #add both the array 
    result = a+b
    #return the sorted array
    # set() does not contain any duplicate elements
    return sorted(set(result))

#Driver's code 
a=[2,2,3,4,5]
b=[1,1,2,3,4]
m= len(a)
n= len(b)
print(union(a,b,m,n))
