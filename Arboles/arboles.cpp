#include <iostream>
using namespace std;

class nodo{
	int dato;
	nodo *der = NULL;
	nodo *izq = NULL;
	int nivel;
public:
	nodo(){
	}
	nodo(int dato){
		this->dato = dato;
		nivel = 1;
	}
	nodo(int dato,int nivel){
		this->dato = dato;
		this->nivel = nivel;
	}
	nodo(nodo &nuevo){
		dato = nuevo.dato;
		nivel = nuevo.nivel;
		der = nuevo.der;
		izq = nuevo.izq;
	}
	void add(int dato){//Agregar un nodo al arbol
		if(dato<this->dato){
			if(izq==NULL){
				nodo *ins = new nodo(dato,nivel+1);
				izq = ins;
				cout<<"add->"<<dato<<endl;
			}
			else{
				izq->add(dato);
			}
		}
		else if(dato>this->dato){
			if(der==NULL){
				nodo *ins = new nodo(dato,nivel+1);
				der = ins;
				cout<<"add->"<<dato<<endl;
			}
			else{
				der->add(dato);
			}
		}
	}
	void Mostrar(){
		if(izq!=NULL){
			izq->Mostrar();
		}
		if(der!=NULL){
			der->Mostrar();
		}
		cout<<dato<<"|"<<nivel<<" ";
	}
	void Mostrar2(){
		if(der!=NULL){
			der->Mostrar2();
		}
		for(int i=0;i<nivel &&nivel !=1;i++){
			cout<<"  ";
		}
		cout<<dato<<endl;//<<"|"<<nivel<<endl;
		if(izq!=NULL){
			izq->Mostrar2();
		}
	}
	int Conteo(){
		if(izq!=NULL){
			izq->Conteo();
		}	
		if(der!=NULL){
			der->Conteo();
		}
		return 1;
	}
	bool Search(int busqueda){
		if(busqueda == dato){
			return 1;
		}
		else if(busqueda > dato && der !=NULL){
			return der->Search(busqueda);
		}
		else if(busqueda < dato && izq != NULL){
			return izq->Search(busqueda);
		}
		return 0;
	}
};

int main(){
	nodo a(6);
	a.add(5);
	a.add(9);
	a.add(4);
	a.add(8);
	a.add(7);
	cout<<endl;
	a.Mostrar2();
	for(int i=0;i<10;i++){
		cout<<a.Search(i)<<"i->"<<i<<endl;
		
	}
	return 0;	
}

