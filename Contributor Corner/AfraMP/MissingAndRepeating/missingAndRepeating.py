class solution:
    
    # method to find the missing and repeating number 
    def missing_and_repeat(self, T):   
        
        for _ in range(T):
            # number of integers in the array
            n=int(input())
            Arr=(int(i) for i in input().split())
            T=[0] * (n + 1)
            for i in Arr:
                if(T[i] >= 0):
                    T[i] = -1
                else:
                    B = i
            for i in range(1, n+1):
                if(T[i] == 0):
                    A = i
                    break
            print(B, A)

# Creating object of solution class
sol = solution()
sol.missing_and_repeat(int(input()))