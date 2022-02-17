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
}

int main(int argc, char** argv)
{
	Cell* root; // dichiaro un puntatore di tipo root
	char tmp;
	cin>> tmp;
	push(root,tmp);
		cin>>  tmp;
	push(root,tmp);
		cin>>  tmp;
	push(root,tmp);
		cin>> tmp;
	push(root,tmp);
	read(root);
	 
	//Cell* root = new Cell;
	cout << root->val;
	

	
}


