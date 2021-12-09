#include <iostream>
#include <iostream>

using namespace std;


// Da svolgere SOLO in linguaggio C++ COMMENTANDO adeguatamente il codice.


// 0. Definire un nuovo tipo di dato Cell da utilizzare nei punti successivi.  = Stuct

// 1. Implementare uno Stack tramite struct e puntatori, con le seguenti funzioni:
// Inserimento di un carattere
// Rimozione di un carattere
// Eliminazione di tutti i caratteri
// Visualizzazione di tutti i caratteri
// Conteggio dei caratteri

// 2. Implementare una Queue tramite struct e puntatori, con le stesse funzioni del punto 1.

// 3. Riportare i risultati di Visualizzazione e Conteggio inserendo il proprio Nome e Cognome.


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct Cell{
	char val;
	Cell *next;
};


int main(int argc, char** argv)
{
	// Crea un nuovo Cell con variabile a e un puntatore che punta ad a
	// In output a.val == *p.val -> Entrambi puntano alla stessa memoria 
	Cell Root;
	Cout<< "Inserisci un carattere da mettere in coda, altrimenti inserisci 1 - ";
	Cin >> int se;
	if(se != 1)
	{
		Cell a;	
		Cell Root.next = Cell
	}

	cin>> a.val;
	cout<< a.val;
	Cell *p = &a;
	cin>> (*p).val;
	cout<< p->val;
	cout<< a.val;
	
	// Ora invece creao un nuovo tipo di Cell che però memorizza in Heap e non in Strack
	
	Cell b;
	cin>> b.val;
	cout<< b.val;
	Cell *q = new Cell;
	cin>> q->val;
	cout<< q->val;
	delete q; // Elimina la prima cella
	delete []q; // Elimina tutte le celle di memoria
	
	Cell b;
	
	Cell a.next = b;
	
	cout>>
	
	
}


