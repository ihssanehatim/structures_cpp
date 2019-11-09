#include "liste.h"
#include <string.h>
#include <iostream>


int main()
{
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

}
