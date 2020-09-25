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