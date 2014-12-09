// queue::push/pop
#include "Evaluador.h"
#include "NodoAVL.h"
#include <iostream>
#include "tinyxml2.h"
#include <iostream>
#include <list>
using namespace std;
using namespace tinyxml2;

//Devuelve la cantidad de usuarios que tiene 18 anios o mas dado el nombre de un archivo XML
int contarMayoresDeEdadXML(string nombre_archivo)
{
    XMLDocument doc;
    doc.LoadFile(nombre_archivo.c_str());
    XMLElement* elemento = doc.FirstChildElement("Usuarios");
    int contador=0;
    int edad;
   for(XMLElement* lista = elemento->FirstChildElement("Usuario");
        lista!=NULL;
        lista=lista->NextSiblingElement())
        {
            edad = atoi(lista->Attribute("edad"));
            if(edad>=18)
                {
                    contador++;
                }
        }
    return contador;
}

//Devuelve el numero anterior del nodo raiz de un Arbol dado
int obtenerNumeroAnterior(NodoAVL* raiz)
{
    int temp = 0;
    if(raiz!=NULL)
    {
        temp = raiz->num;
        if(raiz->num < temp)
            cout<<raiz->num<<endl;
    }
    else
        return NULL;


    int menor_izq = obtenerNumeroAnterior(raiz->izq);
    return menor_izq;
}

//Devuelve el numero siguiente del nodo raiz de un Arbol dado
int obtenerNumeroSiguiente(NodoAVL* raiz)
{
    return -1;
}

int main ()
{
    //Funcion evaluadora
    evaluar();
    return 0;
}
