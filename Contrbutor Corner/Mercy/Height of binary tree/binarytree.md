# Documentation
## Height of Binary Tree

<a><img src= "https://img.shields.io/badge/-Amazon-blue" height="25">&nbsp;&nbsp;<img src= "https://img.shields.io/badge/-VM Ware-navy" height="25">&nbsp;&nbsp;<img src= "https://img.shields.io/badge/-Snapdeal-Orange" height="25">&nbsp;&nbsp;<img src= "https://img.shields.io/badge/-geeksforgeeks-violet" height="25">&nbsp;&nbsp;<img src= "https://img.shields.io/badge/-Leetcode-navy" height="25">&nbsp;&nbsp;<img src= "https://img.shields.io/badge/-CPP-red">&nbsp;&nbsp;<img src= "https://img.shields.io/badge/-Python-brightgreen"></a>


#### Problem Statement 
Given a binary tree, find its height.
 

    Example 1:
    
    Input:
           1
          /  \
         2    3
    Output: 2
    

    Example 2:
    
    Input:
              2
               \
                1
               /
              3
    Output: 3  
    
#### Solution
     
##### Method-1     
###### CPP code
      #include <iostream>
      using namespace std;

       // Data structure to store a Binary Tree node
      struct Node
       {
	int key;
	Node *left, *right;

	Node(int key)
	{
		this->key = key;
		this->left = this->right = nullptr;
	}
     };

     // Recursive function to calculate height of given binary tree
    int height(Node* root)
     {
	// Base case: empty tree has height 0
	if (root == nullptr)
		return 0;

	// recur for left and right subtree and consider maximum depth
	return 1 + max(height(root->left), height(root->right));
     }

      int main()
       {
	Node* root = nullptr;

	root = new Node(15);
	root->left = new Node(10);
	root->right = new Node(20);
	root->left->left = new Node(8);
	root->left->right = new Node(12);
	root->right->left = new Node(16);
	root->right->right = new Node(25);

	cout << "The height of the binary tree is " << height(root);

	return 0;
         }
   
  
       
    
 ##### Method-2
 ###### Python code
        # Data structure to store a Binary Tree node
       class Node:
	     def __init__(self, key=None, left=None, right=None):
		self.key = key
		self.left = left
		self.right = right


         # Recursive function to calculate height of given binary tree
          def height(root):

	      # Base case: empty tree has height 0
	   if root is None:
		return 0

	     # recur for left and right subtree and consider maximum depth
	      return 1 + max(height(root.left), height(root.right))


           if __name__ == '__main__':

	   root = Node(15)
	   root.left = Node(10)
	   root.right = Node(20)
	   root.left.left = Node(8)
	   root.left.right = Node(12)
	   root.right.left = Node(16)
	   root.right.right = Node(25)

	    print("The height of the binary tree is", height(root))



 
       
  
