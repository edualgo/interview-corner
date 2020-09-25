class Solution:

    def maxArr(self, a):
        n = len(a)
        ap = [a[i] + i in range(n)]
        am = [a[i] - i for i in range(n)]
        return max(max(ap)-min(ap), max(am)-min(am))
