/* problem link: https://www.interviewbit.com/problems/matrix-median/
Given a matrix of integers A of size N x M in which each row is sorted.

Find an return the overall median of the matrix A.

Note: No extra memory is allowed.

Note: Rows are numbered from top to bottom and columns are numbered from left to right.

Input Format
The first and only argument given is the integer matrix A.

Output Format
print the overall median of the matrix A.
For Example

Input 1:
    A = [   [1, 3, 5],
            [2, 6, 9],
            [3, 6, 9]   ]
Output 1:
    5
Explanation 1:
    A = [1, 2, 3, 3, 5, 6, 6, 9, 9]
    Median is 5. So, we return 5.

Input 2:
    A = [   [5, 17, 100]    ]
Output 2:
    17 

In this program we have to find median without using extra space which makes this code a little tricky*/
/*approach:WE know that meadin will be equal to (1+no of elements in matrix)/2 th smallest element
We will use the fact that each row is sorted.can we find no of elements less than or equal to any element x when rows are sorted.We can easily think of using binary search in this whole matrix.
We can run binary search on each row and find no of elements in each row which are less than or equal to that element.
For this we will find minimum of this matrix and maximum of matrix...obviously minimum will lie of the first column and maximum value will lie on the last column
*/
findMedian(vector<vector<int> > &a) {
    int n=a.size(),m=a[0].size();
    int mi=INT_MAX,ma=INT_MIN;
    for(int i=0;i<n;i++)
    {
        mi=min(mi,a[i][0]);//we are just finding the minimum element of the entire matrix.As
        //we know that minimum element will lie in the first column of the matrix.
    }
    //now we find the maximum element of matrix.We know that maximum element lies on last column of matrix.
    //so finding maximum element in the matrix among the last column elements.
    for(int i=0;i<n;i++)
    {
        //we update maxiumum if we find any element greater than maximum.
        ma=max(ma,a[i][m-1]);
    }
    //now we have a range of elements lying between minimum and maximum .We will find the mid element of this range 
    int ind=((n*m)+1)/2;
    //now we do binary search in the range of minimum to maximum .
    while(mi<ma)
    {
        int mid=mi+(ma-mi)/2;
        int count=0;
        //we find the no of elements less than equal to this middle element.To find this we have used upper_bound function.
        for(int i=0;i<n;i++)
        {
            count=count+upper_bound(a[i].begin(),a[i].end(),mid)-a[i].begin();
        }
        //if this count is less than desired elements our median will lie in right half so our minimum element will be equal to mid+1
         if(count<ind)
             mi=mid+1;
             //else median will lie in the left half so our maximum element will be equal to mid.
           else
             ma=mid;
    }
    //now we have got our median by the time our binary search ends.so we return it.
    return mi;
}
//main function
int main(){
	vector<vector<int> >a;
	cout<<"Enter rows and columns of matrix "<<endl;
	int row,col;
	cin>>row>>col;
	cout<<"Enter the elements of vector"<<endl;
    //we take input of matrix;
	for(int i=0;i<row;i++){
		vector<int>b;
		for(int j=0;j<col;j++){
			int v;
			cin>>v;
			b.push_back(v);
			
		}
		a.push_back(b);
	}
    //findMedian is the function which calculates median of matrix above by binary search algorithm
    int t=findMedian(a);
    cout<<t<<endl;
	
}

