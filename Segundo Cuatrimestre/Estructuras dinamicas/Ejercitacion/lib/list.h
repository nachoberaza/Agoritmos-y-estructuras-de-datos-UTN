#include "./IO.h"

/* ******************** Prototipos ******************* */

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
    Node *auxNodeToDelete;

    int cont=0;
    auxNode = firstOfStack;
    auxNodeToDelete = firstOfStack;

    showMessage("Desapilando...", 1);
    while(auxNode!=NULL){
        auxNode=auxNode->next;

        cont++;
    }

    return 0;
};

