#include "./IO.h"

/* ******************** Prototipos ******************* */

/* Listas */
template<class type>
int addAtTheEnd(type *&first);

template<class type>
int addAtTheStart(type *&first);

template<class type>
int removeNodes(type *&first);

template<class type>
int removeSince(type *&first);

/* Pilas */
template<class type>
int pile(type *&firstOfStack);

template<class type>
int unPile(type *&firstOfStack);

template<class type>
int removeByCount(type *&firstOfStack, int count,int cont);

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

    printEndline<int>();
    showMessage("Desapilando...", 1);
    while (auxNode!=NULL) {
        showMessage(auxNode->alumn.name, 1);
        auxNode = auxNode->next;
    }

    delete auxNode;

    return 0;
};

/* Elimina n nodos con recursividad */
template<class type>
int removeByCount(type *&firstOfStack, int count,int cont) {

	if(cont<count){
		if(firstOfStack->next != NULL){
			removeByCount(firstOfStack->next,count,cont++);
		}
	}
	delete firstOfStack;
	cout<<"el contador: "<<cont<<endl;
	/*
	Node *auxNode;
    Node *auxNodeToDelete;
    bool exit=false;
    int cont=0;
    auxNode = firstOfStack;
    auxNodeToDelete = firstOfStack;

    while(!exit){
    	if( (auxNode != NULL) and (cont<count) ){
    		auxNode=auxNode->next;
    		cout<<"Desapile"<<endl;
    		cont++;
    	}else{
    		exit=true;
    	}
    }

    */

    return 0;
};

/* Desapila con recursividad */
template<class type>
int removeNodes(type *&first){
	if(first->next != NULL){
		removeNodes(first->next());
	}
	delete first;
	return 0;
};

