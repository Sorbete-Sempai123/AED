#ifndef LISTADOBLE_H
#define LISTADOBLE_H
#include "nodo.h"
#include<thread>

class ListaDoble
{
private:
    int tam;
    Nodo* cabeza;
    Nodo* cola;
public:
    ListaDoble(){tam=0; cabeza=NULL; cola=NULL;};
    void insertar_Valor(VideoType dato1);
    void insetar_ini(VideoType dato);
    void insetar_fin(VideoType dato);
    void Buscar_valor(VideoType dato);
    void Borrar_valor(VideoType& dato);
    void Eliminar_todo();
    void mostrar();
    int get_tam(){return tam;}
    VideoType get_dato(VideoType dato);
};
#endif // LISTADOBLE_H
