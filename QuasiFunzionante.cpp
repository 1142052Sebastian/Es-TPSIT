#include <iostream>
#include <iostream>

using namespace std;


struct Cell{
	char val;
	Cell *next;

};

// creo ufunzione per push, passo root 
void push(Cell*& root,char c )
{
	Cell* a = new Cell;
	a->val = c;
	a->next = root;
	root=a;
}
void read (Cell* root)
{
		Cell* tmp;
		tmp = root;
	while(tmp != NULL)
	{

		cout<< tmp->val <<  " ";
		tmp = tmp->next;
	}
	cout<<"Fuori da ciclo while";
}
void CLR(Cell *root)
{
		Cell* canc;
		canc = root;
	while(canc != NULL)
	{

		canc = canc->next;
		delete root;
		root=canc;
	}
	cout<< "Pulizia completata";
}
void Counting(Cell *root)
{
	int count = 0;
	Cell* tmp;
	tmp = root;
	while(tmp != NULL)
	{
		count++;
	}
	cout<< "I caratteri sono "<<count;
}
int main(int argc, char** argv)
{
	Cell* root; // dichiaro un puntatore di tipo root
	char c;
	cin>> c;
	push(root,c);
		cin>>  c;
	push(root,c);
		cin>>  c;
	push(root,c);
		cin>> c;
	push(root,c);
	read(root);
	//Cell* root = new Cell;
	cout << root->val;
	CLR(root);
	Counting(root);
}



/* Salve prof, questo progrmama l'ho trovato fatto molto tempo fa ma mai pubblicato, onestamente è quello
che "funziona" meglio ma non riesco a sistemare l'altro, consegno entrambi e procedo con gli altri
esercizi*/


