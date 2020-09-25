from collections import defaultdict
test=int(input())
for i in range(test):
    numWords= int(input())
    vectStr =input().split()
    pattern=input()
    count =0
    answer =[]
    dictAns= defaultdict(list)
    for j in vectStr:
        temp_result = "".join([c for c in j if(c.isupper())])
        if((pattern in temp_result) and (pattern[0]==temp_result[0]) and (pattern[-1]==temp_result[len(pattern)-1])):
            dictAns[pattern].append([temp_result,j])
            count=1
    if(count==0):
        print("No match found")
    else:
        result = dictAns[pattern]
        result.sort(key=lambda x:x[0])
        answer = [i[1] for i in result]
        print(" ".join(answer))

