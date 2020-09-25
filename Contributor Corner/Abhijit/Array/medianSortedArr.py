class Solution:

    # method to get the median using merge two sorted array algorithm
    def findMedian(self,num1,num2):
        final_num = []
        i = 0
        j = 0
        num1_size = len(num1)
        num2_size = len(num2)

        # merging to sorted arrays
        while(i < num1_size and j < num2_size):
            if(num1[i] < num2[j]):
                final_num.append(num1[i])
                i+=1
            else:
                final_num.append(num2[j])
                j+=1

        while(j < num2_size):
            final_num.append(num2[j])
            j+=1

        while(i < num1_size):
            final_num.append(num1[i])
            i+=1

        # computing the median
        final_size = len(final_num)
        if(final_size%2==0):
            median = (final_num[int(final_size/2)]+final_num[int(final_size/2)-1])/2
        else:
            median = final_num[int(final_size/2)]
        return median

    # method to get the median using an optimized method
    def findMedian_optimized(self,num1,num2):
        num2_size = len(num2)

        # appending both arrays into one
        for i in range(num2_size):
            num1.append(num2[i])

        # sorting the appended array
        num1.sort()

        # computing the median
        final_size = len(num1)

        if(final_size%2==0):
            median = (num1[int(final_size/2)]+num1[int(final_size/2)-1])/2
        else:
            median = num1[int(final_size/2)]
        return float(median)



num1 = list(map(int,input().split()))
num2 = list(map(int,input().split()))

# creating a solution object
sol = Solution()
print(sol.findMedian_optimized(num1, num2))
print(sol.findMedian(num1,num2))
