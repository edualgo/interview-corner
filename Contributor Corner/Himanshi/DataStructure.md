# Documentation

<a><img src="https://img.shields.io/badge/-Amazon-orange" height="25px">&nbsp;&nbsp;<img src="https://img.shields.io/badge/-Microsoft-blue" height="25">&nbsp;&nbsp;<img src="https://img.shields.io/badge/-Paytm-pink" height="25px">&nbsp;&nbsp;<img src="https://img.shields.io/badge/-Snapdeal-skyblue" height="25px">&nbsp;&nbsp;<img src="https://img.shields.io/badge/-Twitter-green" height="25px">&nbsp;&nbsp;<img src="https://img.shields.io/badge/-Facebook-yellow" height="25px">&nbsp;&nbsp;<img src="https://img.shields.io/badge/-Adobe-violet" height="25px">&nbsp;&nbsp;<img src="https://img.shields.io/badge/-Hike-indigo" height="25px">&nbsp;&nbsp;<img src="https://img.shields.io/badge/-Zoho-brown" height="25">&nbsp;&nbsp;<img src="https://img.shields.io/badge/-Cpp-red"></a> 

### Problem Statement 1)

## Sort an Array of 0s, 1s and 2s

Given an array A of size N containing 0s, 1s, and 2s; you need to sort the array in ascending order.

##### Input:
The first line contains an integer 'T' denoting the total number of test cases. Then T testcases follow. Each testcases contains two lines of input. The first line denotes the size of the array N. The second lines contains the elements of the array A separated by spaces.

##### Output: 
For each testcase, print the sorted array.

Constraints:
1 <= T <= 500
1 <= N <= 106
0 <= Ai <= 2

##### Example:
Input :
2
5
0 2 1 2 0
3
0 1 0

Output:
0 0 1 2 2
0 0 1

##### Explanation:
Testcase 1: After segragating the 0s, 1s and 2s, we have 0 0 1 2 2 which shown in the output.

### Solution
```cpp

int main()
{
	int t;
	cin >> t;
	int index=0;
	for(int i=0;i<t;i++)
	{
		int n;
		cin >> n;
		int A[n],B[n];
		for(int j=0;j<n;j++)
		{
			cin >> A[j];
		}
		for(int j=0;j<n;j++)
		{
			if (A[j]==0)
			{
				B[index]=A[j];
				index++;
			}
		}
		for(int j=0;j<n;j++)
		{
			if (A[j]==1)
			{
				B[index]=A[j];
				index++;
			}
		}
		for(int j=0;j<n;j++)
		{
			if(A[j]==2)
			{
				B[index]=A[j];
				index++;
			}
		}
	}
	for(int j=0;j<n;j++)
	{
		cout << B[j] << " ";
		cout << "\n";
	}
	return 0;

}




### Problem Statement 2)

## Count the Triplets

Given an array of distinct integers. The task is to count all the triplets such that sum of two elements equals the third element.

##### Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case consists of two lines. First line of each test case contains an Integer N denoting size of array and the second line contains N space separated elements.

##### Output:
For each test case, print the count of all triplets, in new line. If no such triplets can form, print "-1".

Constraints:
1 <= T <= 100
3 <= N <= 105
1 <= A[i] <= 106

##### Example:
Input:
2
4
1 5 3 2
3
3 2 7
Output:
2
-1

##### Explanation:
Testcase 1: There are 2 triplets: 1 + 2 = 3 and 3 +2 = 5

### Solution
```cpp

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin >> arr[i];
	    }
	    sort(arr,arr+n);
	    int count = 0;
	    for(int i=n-1; i>=1;i--)
	    {
	        int j=0;
	        int k=i-1;
	        while(j<k)
	        {
	            if(arr[j]+arr[k]==arr[i])
	            {
	                count ++;
	                j++;
	                k--;
	            }
	            else if(arr[j]+arr[k]>arr[i])
	            {
	                k--;
	            }
	            else if(arr[j]+arr[k]<arr[i])
	            {
	                j++;
	            }
	        }
	    }
	    if (count!=0)
	   
	    {   
	        cout << count << endl;
	    }
	    else
	    {
	        cout << -1 << endl;
	    }
	    
	}
	
	return 0;
}




### Problem Statement 3)

## Roman Number to Integer

Given an string in roman no format (s)  your task is to convert it to integer .

##### Input:
The first line of each test case contains the no of test cases T. Then T test cases follow. Each test case contains a string s denoting the roman no.

##### Output:
For each test case in a new line print the integer representation of roman number s. 

Constraints:
1<=T<=100
1<=roman no range<4000

##### Example:
Input
2
V
III 
Output
5
3

### Solution
```cpp
int value(char c)
{
    if(c == 'I')
        return 1;
    else if(c == 'V')
        return 5;
    else if(c == 'X')
        return 10;
    else if(c == 'L')
        return 50;
    else if(c == 'C')
        return 100;
    else if(c == 'D')
        return 500;
    else if(c == 'M')
        return 1000;
    else    
    return -1;
}
int getRoman(string s)
{
    int n = s.length();
    int r = 0, x, y;
    for(int i=0; i<n; i++)
    {
        if(i == n-1)
        {
            x = value(s[i]);
            r += x;
            return r;
        }
        else
        {
            x = value(s[i]);
            y = value(s[i+1]);
            if(x >= y)
                r += x;
            else
                r -= x;
        }
    }
}




### Problem Statement 4)

## Check if Linked List is Palindrome

Given a singly linked list of size N of integers. The task is to check if the given linked list is palindrome or not.
Your Task:
The task is to complete the function isPalindrome() which takes head as reference as the only parameter and returns true or false if linked list is palindrome or not respectively

Constraints:
1 <= N <= 50

##### Example 1:

Input:
N = 3
value[] = {1,2,1}
Output: 1
##### Explanation: The given linked list is
1 2 1 , which is a palindrome and
Hence, the output is 1.

####3 Example 2:

Input:
N = 4
value[] = {1,2,3,4}
Output: 0
##### Explanation: The given linked list
is 1 2 3 4 , which is not a palindrome
and Hence, the output is 0.

### Solution
```cpp
Node* reverse(Node* slow)
   {
       Node* curr=slow;
       Node* next;
       Node* prev=NULL;
       while(curr!=NULL)
       {
           next=curr->next;
           curr->next=prev;
           prev=curr;
           curr=next;
           
       }
       return prev;
   }
bool isPalindrome(Node *head)
{
    Node* slow=head;
          Node*  fast=head;
        while(fast!=NULL && fast->next!=NULL)
        {
           slow=slow->next;
            fast=fast->next->next;
        } 
        fast=head;
        slow=reverse(slow);
        
        while(slow!=NULL)
        {
            if(fast->data!=slow->data)
            {
                return false;
            }  
            slow=slow->next;
            fast=fast->next;
        } 
        return true;
}




### Problem Statement 5)

## Anagram

Given two strings a and b consisting of lowercase characters. The task is to check whether two given strings are anagram of each other or not. An anagram of a string is another string that contains same characters, only the order of characters can be different. For example, “act” and “tac” are anagram of each other.

##### Input:
The first line of input contains an integer T denoting the number of test cases. Each test case consist of two strings in 'lowercase' only, in a single line.

##### Output:
Print "YES" without quotes if the two strings are anagram else print "NO".

Constraints:
1 ≤ T ≤ 300
1 ≤ |s| ≤ 106

##### Example:
Input:
2
geeksforgeeks forgeeksgeeks
allergy allergic

Output:
YES
NO

##### Explanation:
Testcase 1: Both the string have same characters with same frequency. So, both are anagrams.
Testcase 2: Characters in both the strings are not same, so they are not anagrams.  

### Solution
```cpp
int main()
{
	int t;
    cin>>t;
    
    while(t--)
    {
        long long int i,j,n=0;
        string s1,s2;
        cin>>s1>>s2;
        
        
        if(s1.length()==s2.length())
        {
            
            for(i=0;i<s1.length();i++)
            {
                
                for(j=0;j<s2.length();j++)
                {
                    if(s1[i]==s2[j])
                    {
                        n++;
                        break;
                    }
                    
                    
                }
            }
            
            
        }
        
        else 
        {
            n=0;
        }
        
        if(n==s1.length())
            cout<<"YES"<<"\n";
        else
        cout<<"NO"<<"\n";
        
    }
	
	return 0;
        
}



