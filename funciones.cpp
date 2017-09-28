#include <iostream>
#include <stdio.h>
#include <cstring>
#include <conio.h>
#include "automata.h"
using namespace std;
class Automata
{
private:
Nodo *PrimerEstado;
public:
Automata(){
PrimerEstado=NULL;
}
void InsertarEstado(int estado){
Nodo *nuevo;
nuevo=new Nodo;
nuevo->info=estado;
if(PrimerEstado==NULL){
PrimerEstado=nuevo;
}else{
Nodo *aux;
aux=PrimerEstado;
while(aux->sig!=NULL){
aux=aux->sig;
}
aux->sig=nuevo;
}
}
void InsertarCaracter(int estado2, string caracter){
if(PrimerEstado!=NULL){
Nodo*aux;
aux=PrimerEstado;
while(aux->info!=estado2 && aux->sig!=NULL){
aux=aux->sig;
}
if(aux->info==estado2){
Nodo*nuevo;
nuevo=new Nodo;
nuevo->info=caracter;
if(aux->inferior==NULL){
aux->inferior=nuevo;
aux->Primero=nuevo;
}else{
Nodo *aux2;
aux2=aux->Primero;
while(aux2->sig!=NULL){
aux2=aux2->sig;
}
aux2->sig=nuevo;
}
}else{
cout<<"No existe el estado!!"<<endl;
}
}else{
cout<<"Ingrese el estado, antes del caracter a leer"<<endl;
}
}


