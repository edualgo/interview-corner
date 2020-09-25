#include <iostream>
using namespace std;

struct Node
{
	char data;
	struct Node *left;
	struct Node *right;
	
	Node(char x){
	    data = x;
	    left = NULL;
	    right = NULL;
	}
};

void preorder(Node *root){
	if(root==NULL)
		return;
	cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right);
}

static int i=0;
Node *convertExpression(string str,int j)
{
	Node * root =new Node(str[i]); 
  
    if(i == str.length()-1) {
    	i=0;
		return root;
	} 
  
    i++; 

    if(str[i]=='?') { 
        i++; 
  
        root->left = convertExpression(str,i); 
          
        i++; 

        root->right = convertExpression(str,i); 

        return root; 
    } 
    else {
		return root;
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		string str;
		cin>>str;
		Node *root = convertExpression(str,0);
		preorder(root);
		cout<<endl;
	}
}
