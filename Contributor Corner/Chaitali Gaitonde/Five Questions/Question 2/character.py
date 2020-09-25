value=int(input())
for i in range(value):
    string1=input()
    string2 =input()
    uncommon1 =[]
    uncommon2=[]
    for c in string1:
        if c not in string2:
            uncommon1.append(c)
    for g in string2:
        if g not in string1:
            uncommon2.append(g)
    uncommon= uncommon1+uncommon2
    if len(uncommon)==0:
        print(-1)
    else:
        print("".join(uncommon))
