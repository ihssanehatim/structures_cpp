#include "liste.h"
#include <string.h>
#include <iostream>

#include "arbres.h"

int main()
{/*
	Liste tete("ihssane");
	Celliste* cell = new Celliste;
	char toadd[] = "hatim";
	cell->next = 0;
	cell->info = new char[strlen(toadd) + 1];
	strcpy_s(cell->info,strlen(toadd)+1,toadd);
	tete.addItem(cell);
	tete.print();
	bool res = tete.search("ihssane ");
	if (res)
		std::cout << "yes it does";
	else
		std::cout << "nope";
		*/
	arbres root(14.2);
	tree* leaf = new tree;
	leaf->newLeaf(15);
	tree* leaf3 = new tree;
		leaf3->newLeaf(16.3);
	tree* leaf2 = new tree;
		leaf2->newLeaf(17.4);
	root.addLeaf(leaf);
	root.addLeaf(leaf2);
	root.addLeaf(leaf3);
	root.printInorder();
	root.printTree();
}
