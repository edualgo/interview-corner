# Documentation

## Print Bracket Number

<a><img src= "https://img.shields.io/badge/-Amazon-navy" height="25" >&nbsp;&nbsp;<img src= "https://img.shields.io/badge/-Adobe-blue" height="25">&nbsp;&nbsp;<img src= "https://img.shields.io/badge/-Oracle-navy" height="25">&nbsp;&nbsp;<img src= "https://img.shields.io/badge/-Paytm-navy" height="25">&nbsp;&nbsp;<img src= "https://img.shields.io/badge/-Microsoft-navy" height="25">&nbsp;&nbsp;<img src= "https://img.shields.io/badge/-Snapdeal-Yellow" height="25">&nbsp;&nbsp;<img src= "https://img.shields.io/badge/-Leetcode-navy" >&nbsp;&nbsp;<img src= "https://img.shields.io/badge/-geeksforgeeks-violet" height="25"><img src= "https://img.shields.io/badge/-Interviewbit-purple" height="25">&nbsp;&nbsp;
&nbsp;&nbsp;<img src= "https://img.shields.io/badge/-CPP-red">&nbsp;&nbsp;<img src= "https://img.shields.io/badge/-Python-brightgreen"></a>


#### Problem Statement 
Given a matrix of m x n elements (m rows, n columns), return all elements of the matrix in spiral order.

    Example 1:
    
    Input: [
            [ 1, 2, 3 ],
            [ 4, 5, 6 ],
            [ 7, 8, 9 ]
           ]
    Output: [1,2,3,6,9,8,7,4,5]      
    
    Example 2:
    
    Input: [
             [1, 2, 3, 4],
             [5, 6, 7, 8],
             [9,10,11,12]
           ]
    Output: [1,2,3,4,8,12,11,10,9,5,6,7]
    

#### Solution
##### Method-1      
###### CPP code
    #include <iostream>
    using namespace std;

    #define M 5
    #define N 5

    void printSpiralOrder(int mat[M][N])
    {
	  int top = 0, bottom = M - 1;
	  int left = 0, right = N - 1;

	while (1)
	{
		if (left > right)
			break;
		// print top row
		for (int i = left; i <= right; i++)
			cout << mat[top][i] << " ";
		top++;

		if (top > bottom)
			break;
		// print right column
		for (int i = top; i <= bottom; i++)
			cout << mat[i][right] << " ";
		right--;

		if (left > right)
			break;
		// print bottom row
		for (int i = right; i >= left; i--)
			cout << mat[bottom][i] << " ";
		bottom--;

		if (top > bottom)
			break;
		// print left column
		for (int i = bottom; i >= top; i--)
			cout << mat[i][left] << " ";
		left++;
	   }
     }

    int main()
    {
	  int mat[M][N] =
	  {
		{ 1,  2,  3,  4, 5},
		{16, 17, 18, 19, 6},
		{15, 24, 25, 20, 7},
		{14, 23, 22, 21, 8},
		{13, 12, 11, 10, 9}
	  };

	printSpiralOrder(mat);

	return 0;
     }

##### Method-2
###### Python code
    def printSpiralOrder(mat):

	top = left = 0
	bottom = len(mat) - 1
	right = len(mat[0]) - 1

	while True:
		if left > right:
			break

		# print top row
		for i in range(left, right + 1):
			print(mat[top][i], end=' ')
		top = top + 1

		if top > bottom:
			break

		# print right column
		for i in range(top, bottom + 1):
			print(mat[i][right], end=' ')
		right = right - 1

		if left > right:
			break

		# print bottom row
		for i in range(right, left - 1, -1):
			print(mat[bottom][i], end=' ')
		bottom = bottom - 1

		if top > bottom:
			break

		# print left column
		for i in range(bottom, top - 1, -1):
			print(mat[i][left], end=' ')
		left = left + 1


    if __name__ == '__main__':

	   mat = [
		[1,  2,  3,  4,  5],
		[16, 17, 18, 19, 6],
		[15, 24, 25, 20, 7],
		[14, 23, 22, 21, 8],
		[13, 12, 11, 10, 9]
	  ]

	printSpiralOrder(mat)

  ###### Time Complexity : O(m*n).
  ###### Auxiliary Space : O(1).
