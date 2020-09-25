# include <iostream>
# include <vector>
# include <ctime>
# include <cstdlib>
# include <cmath>
# include <algorithm>

using namespace std;


class Solution
{
public:

    /// Finding median using normal loop and merge sorted arrays algorithm
    double findMedian(vector<int>& num1,vector<int>& num2)
    {
       vector<int> final_num;
       int i=0,j=0;
       int num1_size = num1.size(),num2_size = num2.size();

       /// Merging the two sorted arrays
       while(i<num1_size && j<num2_size)
       {
           if(num1.at(i) < num2.at(j))
           {
               final_num.push_back(num1.at(i));
               i++;
           }
           else
           {
               final_num.push_back(num2.at(j));
               j++;
           }
       }
       while(j<num2_size)
       {
           final_num.push_back(num2.at(j));
           j++;
       }
       while(i<num1_size)
       {
           final_num.push_back(num1.at(i));
           i++;
       }

       /// Finding the median
       double median;
       int final_size = final_num.size();
       if(final_size%2==0)
       {
           median = (final_num.at(final_size/2) + final_num.at((final_size/2)-1))/2.0;
       }
       else
       {
           median = (final_num.at(final_size/2))*1.0;
       }
       return median;
    }

    /// Optimized solution using built-in sort
    double findMedian_optimized(vector<int>& num1,vector<int>& num2)
    {
        double median;
        int num2_size = num2.size();

        /// appending all array elements to one single array
        for(int i=0;i<num2_size;i++)
        {
            num1.push_back(num2.at(i));
        }

        /// sorting the array elements
        sort(num1.begin(),num1.end());
        int num1_size = num1.size();

        /// Finding the median of the array
        if(num1_size%2==0)
        {
            median = (num1.at(num1_size/2-1)+num1.at(num1_size/2))/2.0;
        }
        else
        {
            median = double(num1.at(num1_size/2));
        }
        return median;
    }
};

int main()
{
    int m,n,key;
    clock_t start,end;
    cin >> m;
    cin >> n;
    vector<int> num1;
    vector<int> num2;
    while(m--)
    {
        cin >> key;
        num1.push_back(key);
    }
    while(n--)
    {
        cin >> key;
        num2.push_back(key);
    }
    Solution sol;

    /// Checking the runtime of the optimized solution
    start = clock();
    cout << sol.findMedian_optimized(num1,num2) << endl;
    end = clock();
    cout << "Runtime(optimized) = " << double(end - start) / double(CLOCKS_PER_SEC) << endl;

    /// Checking the runtime of the normal solution
    start = clock();
    cout << sol.findMedian(num1,num2) << endl;
    end = clock();
    cout << "Runtime(normal) = " << double(end - start) / double(CLOCKS_PER_SEC) << endl;

    return 0;
}
