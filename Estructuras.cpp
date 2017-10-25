#include <iostream>
#include <string>

using namespace std;

struct Nodo {
	
	Nodo *siguiente;

	Nodo *anterior;

        string valor;

	Nodo() {
	}

	Nodo(string str) {
		valor = str;
	}

};

struct ListaDoble {

	Nodo *primerNodo;

	Nodo *ultimoNodo;


	void insertarAlInicio(string dato) {
		if(primerNodo == NULL)
			primerNodo = ultimoNodo = new Nodo(dato);
		else if(primerNodo == ultimoNodo){
			Nodo *nuevo = new Nodo(dato);
			primerNodo->siguiente = nuevo;
			nuevo = ultimoNodo;
		} else {
			Nodo *nuevo = new Nodo(dato);
			nuevo->siguiente = primerNodo;
			primerNodo = nuevo;
			primerNodo->siguiente->anterior = primerNodo;
		}

	}

	void insertarAlFinal(string dato) {
		if(primerNodo == NULL) {
			primerNodo = ultimoNodo = new Nodo(dato);
		} else if(primerNodo == ultimoNodo){
			Nodo *nuevo = new Nodo(dato);
			primerNodo->siguiente = nuevo;
			ultimoNodo = nuevo;
			ultimoNodo->anterior = primerNodo;
		} else {
			Nodo *nuevo = new Nodo(dato);
			nuevo->anterior = ultimoNodo;
			ultimoNodo->siguiente = nuevo;
			ultimoNodo = nuevo;
		}
		ultimoNodo->siguiente = NULL;
	}
	
	void imprimirLista() {
		Nodo *temp = primerNodo;
		while(temp != NULL) {
			cout << temp->valor << " ";
			temp = temp->siguiente;
		}
		cout << endl;
	}

};
