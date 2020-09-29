#include "./IO.h"

/* ******************** Prototipos ******************* */

/* Structs */
template<typename Node>
struct type;
template<typename Alumn>
struct type;
template<typename Califications>
struct type;

/* Listas */
template<class type>
int addAtTheEnd(type *&first);

template<class type>
int addAtTheStart(type *&first);

/* Pilas */
template<class type>
int pile(type *&firstOfStack);

template<class type>
int unPile(type *&firstOfStack);

template<class type>
int unPileByCount(type *&firstOfStack, int count);

/* ******************* ----------- ******************* */


struct Califications {
    unsigned Algoritms;
    unsigned Math_Analysis;
    unsigned Geometry;
    unsigned Discreet_Math;
};

struct Alumn {
    string name;
    string lastname;
    Califications califications;
};

struct Node {
    Alumn alumn;
    Node *next;
};

template<class type>
int pile(type *&firstOfStack) {
    Node *newNode;
    newNode = new Node;

    inputAlumn(newNode);

    newNode->next = firstOfStack;

    firstOfStack = newNode;
    showMessage("Alumno apilado correctamente", 1);
    return 0;
}


template<class type>
int unPile(type *&firstOfStack) {
    Node *auxNode;
    auxNode = firstOfStack;

    showMessage("Desapilando...", 1);
    while (auxNode != NULL) {
        showMessage(auxNode->alumn.name, 1);
        auxNode = auxNode->next;
    }

    delete auxNode;

    return 0;
};

template<class type>
int unPileByCount(type *&firstOfStack, int count) {
    Node *auxNode;
    auxNode = firstOfStack;
    showMessage("Desapilando...", 1);
    while(auxNode!=NULL){
    //Seguir desde aca
    }
};
