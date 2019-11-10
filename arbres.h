#pragma once
typedef struct tree{
	struct tree* left, * right;
	double info;
	void newLeaf(double data)
	{
		this->info = data;
		this->left = this->right = 0;
	}
}tree;
class arbres
{
	tree *root;
	void MyprintPost(tree* L) const;
	void MyprintInorder(tree* L) const;
	void MyprintPre(tree* L) const;
	tree* MyaddLeaf(tree*, tree*);
	void print2DUtil(tree* rt, int space) const;
public :
	arbres();
	arbres(double ); /// set root information
	void addLeaf(tree *) ; /// keep it inorder
	void printPost() const;
	void printInorder() const;
	void printPre() const;
	void printTree() const;
	void remove(double&) const;
	
};
