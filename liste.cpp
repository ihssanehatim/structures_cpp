#include "liste.h"
#include <stdlib.h>
#include <string.h>
#include <iostream>
using std::cout;
using std::endl;
using std::cin;

void Liste::addItem( Celliste* cel) const
{
	Head->next = cel;
}

void Liste::removeItem_head()
{
	if (Head)
	{
		Celliste* swap;
		swap = Head->next;
		free(Head);
		Head = 0;
		Head = swap;
	}
}

void Liste::removeItem_last()
{
	Celliste* temp = Head;
	if (!temp)
		return;
	while (temp->next)
		temp = temp->next;
	free(temp);
	temp = 0;
}

bool Liste::search(const char* str) const
{
	if(!Head)
		return false;
	Celliste* temp = Head;
	while (temp)
	{
		if (strcmp(str, temp->info) == 0)
			return true;
		temp = temp->next;
	}
	return false;
}

void Liste::print() const
{
	if (!Head)
		return;
	Celliste* temp = Head;
	while (temp)
	{
		cout << temp->info<<endl;
		temp = temp->next;
	}
}

Liste::Liste(const char * str)
{
	Head = new Celliste;
	Head->info = new char[strlen(str) + 1];
	strcpy_s( Head->info ,strlen(str) + 1,str);
	Head->next = 0;
}
Liste::Liste()
{
	Head = 0; /// empty list ;;
}