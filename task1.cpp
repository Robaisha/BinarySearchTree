#include<iostream>
using namespace std;
class node{
	public:
		int data;
		node *left;
		node *right;
		node(){
			left=NULL;
			right=NULL;
			data=0;
		}
		node(int d){
			left=NULL;
			right=NULL;
			data=d;
		}
		int isBST(node* node)
		{
			return(isBSTUtil(node, INT_MIN, INT_MAX));
		}
		int isBSTUtil(node* node, int min, int max)
		{
			if(node==NULL)
			   return 1;
			if (node->data < min || node->data > max)
			return 0;
			
			return 
			isBSTUtil(node->left, min, node->data-1) && isBSTUtil(node->right, node->data+1, max);
		}
	
};
int main(){
	node obj;
	node *root = new node(40);
    root->left = new node(9);
    root->right = new node(50);
    root->left->left = new node(1);
    root->left->right = new node(30);
     
    if(obj.isBST(root)){
    	cout<<"Is BST" << endl;
        cout << "10 Marks Assigned";
	}
    else{
    	cout<<"Not a BST" << endl;
        cout << "0 Marks Assigned";
	}
	
	return 0;
}
