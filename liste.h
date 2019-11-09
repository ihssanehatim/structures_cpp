#pragma once
typedef struct Celliste
{
	char *info;
	struct  Celliste* next;
}Celliste;

class Liste
{
	Celliste *Head = 0; /// pointe sur la tete de la liste
public :
	Liste(const char *); /// initialiser la tete
	Liste();
	void addItem(Celliste*) const; /// pour ajouter un element ;;
	void removeItem_head(); /// remove the head of Liste ;;;
	void removeItem_last(); /// remove the last one ;;
	bool search(const char*) const; /// looking for a string
	void print() const;
};