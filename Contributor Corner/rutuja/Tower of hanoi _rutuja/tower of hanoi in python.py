#Recursion

def towerofhanoi(n,s,a,d):
    #Base case
    if n==0:
        return 0
    if n==1 :
        print(s,d)
        return
    towerofhanoi(n-1,s,d,a)
    print(s,d)
    towerofhanoi(n-1,a,s,d)


n=int(input())
towerofhanoi(n,'a','b','c')
