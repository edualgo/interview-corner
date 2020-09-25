t=int(input())
for k in range(t):
    n=int(input())
    a = list(map(int, input().split()))

    i = 0

    x = len(a)

    if(x % 2 != 0):
        for i in range(0, x-2, i+2):
            if((a[i] > a[i+1] or a[i+2] > a[i+1])):
                if(a[i] > a[i+1]):
                    temp = a[i+1]
                    a[i+1] = a[i]
                    a[i] = temp
                if(a[i+2] > a[i+1]):
                    answer = a[i+2]
                    a[i+2] = a[i+1]
                    a[i+1] = answer
    else:
        for i in range(0, x-3, i+2):
            if((a[i] > a[i+1] or a[i+2] > a[i+1])):
                if(a[i] > a[i+1]):
                    temp = a[i+1]
                    a[i+1] = a[i]
                    a[i] = temp
                if(a[i+2] > a[i+1]):
                    answer = a[i+2]
                    a[i+2] = a[i+1]
                    a[i+1] = answer
        if(a[-1] < a[-2]):
            answer = a[-1]
            a[-1] = a[-2]
            a[-2] = answer
    print(*a)

