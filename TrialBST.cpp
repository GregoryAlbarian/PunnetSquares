#include "BST.h"
#include <iostream>

using namespace std;
int main()
{
	//cout<<"hello world";
	BinarySearchTree<int> *tree1 = new BinarySearchTree<int>;
	tree1->insert(5);
	tree1->insert(6);
	//tree1->print_preorder();
	cout<<tree1->root->data;
	cout<<tree1->root->right->data;
	
	/*only pointers can be checked if they are null
	if (tree1->root->left/*->data*/ == NULL)//can't print NULL values
	//	cout<<"NULL";
	
	cout<<endl;
	return 0;
}