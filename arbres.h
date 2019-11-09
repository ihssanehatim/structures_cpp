#pragma once
typedef struct tree{
	struct tree* left, * right;
	char* info;
}tree;
class arbres
{
	tree root;
public :
	arbres();
	arbres(const char *); /// set root information
	addLeaf(tree *) const; /// keep it inorder
	printPost() const;
	printInorder() const;
	printPre() const;
	printTree() const;
};