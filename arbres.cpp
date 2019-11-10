#include "arbres.h"
#include <iostream>

using std::cout;
using std::endl;

tree * arbres::MyaddLeaf(tree* rt, tree* L)
{
	if (!rt)
		return L;
	if (rt->info < L->info)
		rt->right = MyaddLeaf(rt->right, L);
	else if(rt->info > L->info)
		rt->left = MyaddLeaf(rt->left, L);
	return rt;
}

arbres::arbres()
{
	root = 0; /// empty tree;
}

arbres::arbres(double key)
{
	root = new tree;
	root->info = key;
	root->left = 0;
	root->right = 0;
}

void arbres::addLeaf(tree* L)
{
	/// keep things in order
	if (!root)
	{
		//root = new tree;
		root = L;
		return;
	}
	if (root->info > L->info)
	{
		root->right = MyaddLeaf(root->right, L);
	}
	else
		 root->left = MyaddLeaf(root->left, L);

}
void arbres::MyprintPost(tree * L) const
{
	if (!L)
		return;
	MyprintPost(L->left);
	MyprintPost(L->right);
	cout << L->info << endl;
}
void arbres::MyprintInorder(tree* L) const
{
	if (!L)
		return;
	MyprintInorder(L->left);
	cout << L->info << endl;
	MyprintInorder(L->right);
}
void arbres::MyprintPre(tree* L) const
{
	if (!L)
		return;
	cout << L->info << endl;
	MyprintPre(L->left);
	MyprintPre(L->right);
}
void arbres::printPost() const
{
	if (!root)
		return;
	MyprintPost(root);
}

void arbres::printInorder() const
{
	if (!root)
		return;
	MyprintInorder(root);
}

void arbres::printPre() const
{
	if (!root)
		return;
	MyprintPre(root);
}

#define COUNT 10

// Function to print binary tree in 2D  
// It does reverse inorder traversal  
void arbres::print2DUtil(tree* rt, int space) const 
{
	// Base case  
	if (rt == NULL)
		return;

	// Increase distance between levels  
	space += COUNT;

	// Process right child first  
	print2DUtil(rt->right, space);

	// Print current node after space  
	// count  
	cout << endl;
	for (int i = COUNT; i < space; i++)
		cout << " ";
	cout << rt->info << "\n";

	// Process left child  
	print2DUtil(rt->left, space);
}

void arbres::printTree() const
{
	print2DUtil(root, 0);
}

void arbres::remove(double&) const
{
}
