#include <iostream>
#include <stdio.h>
#include <cstring>
#include <conio.h>
using namespace std;
class Nodo
{
private:
Nodo*sig;
Nodo*inferior;
Nodo*Primero;
int estado;
string caracter;
string apilo;
string extraer;
public:
friend class Automata;
Nodo(){
sig=NULL;
inferior=NULL;
estado=0;
caracter="";
apilo="";
extraer="";
Primero=NULL;
}
};
