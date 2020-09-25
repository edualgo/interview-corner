def isAnagram(a,b):
    #check the length of the both strings 
    if len (a)!=len (b):
        return False
    #sort the both strings    
    a= sorted(a)
    b=sorted(b)
    
    #check each letter is equal or not 
    for i in range(0,len(a)):
        if a[i]!= b[i]:
            return False
    return True

print(isAnagram("restful" , "fluster"))
