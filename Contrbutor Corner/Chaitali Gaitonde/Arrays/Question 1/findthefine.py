t = int(input())

for c in range(t):
    n,d=input().split()
    car_num=[int(x) for x in input().split( )]
    fine =[int(y) for y in input().split( )]
    amount=0
    if (int(d)%2==0):
        for i in range(len(car_num)):
            if (car_num[i]%2!=0):
                amount+=fine[i]
                
    else:
        for i in range(len(car_num)):
            if(car_num[i]%2==0):
                amount+=fine[i]
    print(amount)            
    

        
