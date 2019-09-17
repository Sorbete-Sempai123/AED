#ifndef NODO_H
#define NODO_H
#include<iostream>
#include<string>
#include "VideoType.h"
using namespace std;


class Nodo
{
public:
    VideoType dato;
    Nodo *siguiente;
    Nodo *anterior;
    Nodo(VideoType dato);
;};

Nodo::Nodo(VideoType dato)
{
    this->dato = dato;
}
#endif // NODO_H
