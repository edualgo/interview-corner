class wordBreak:
    
    def solution(self):
        t  = int(input())
        while t>0:
            n = int(input())
            li = [str(i) for i in input().split()]
            s = input()
            z = ""
            st = ""
            for i in range(len(s)):
                z = z+s[i]
                if z in li:
                    st = st+z
                    z = ""
            if len(st) == len(s):
                print('1')
            else:
                print("0")
            t-=1
a = wordBreak()
a.solution()