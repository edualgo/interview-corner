def minReverse(exp):
    if len(exp)%2!=0:
        return -1
    c=0
    op=0

    for e in exp:
        if e=='}' and op==0:
            op=1
            c+=1
        elif e=='}':
            op-=1
        else:
            op+=1

    if op%2!=0:
        return -1
    else:
        return c+op//2




if __name__ == '__main__':
    tcs=int(input())

    for _ in range(tcs):
        exp=input()
        print(minReverse(exp))