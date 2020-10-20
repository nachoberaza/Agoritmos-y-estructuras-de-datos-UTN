#include "./IO.h"

/* Datos de prueba */
template<class type>
int pileAuxData(type *&first);

template<class type>
int listAuxData(type *&first);

/* ******************** Prototipos ******************* */

template<class type>
int showDinamicStruct(type *&first);

template<class type>
int addAtTheEnd(type *&first);

template<class type>
int addAtTheStart(type *&first);

template<class type>
int removeNodesByRecursivity(type *&first,int cont);

template<class type>
int removeNodesByIterations(type *&first);

template<class type>
int removeSince(type *&first);

template<class type>
int pile(type *&firstOfStack);

template<class type>
int unPile(type *&firstOfStack);

template<class type>
int removeByCountByRecursivity(type *&firstOfStack,type *&aux, int index);

template<class type>
int removeByCountByIterations(type *&node,int index);
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

/* Muestra la estructura dinamica */
template<class type>
int showDinamicStruct(type *&first){
	Node *index;
	index=first;
	int c=1;
	while(index!=NULL){
		showMessage(index->alumn.name,2);
		printNumber(c,1);
		index=index->next;
		c++;		
	}
	delete index;
	return 0;
}
;

/* Desapila por recursividad */
template<class type>
int unPile(type *&firstOfStack) {

	if(firstOfStack!=NULL){
		showMessage(firstOfStack->alumn.name,1);
		unPile(firstOfStack->next);
	}else{
		showMessage("Pila vacia",1);
	}
	delete firstOfStack;
	firstOfStack=NULL;
	return 0;
}
;

/* Elimina n nodos con recursividad */
template<class type>
int removeByCountByRecursivity(type *&node, type *&aux, int index) {

	if(index > 0 and node != NULL){
		showMessage(node->alumn.name,2);
		cout<<node->next<<'\t'<<index<<endl;
		index--;
		removeByCountByRecursivity(node->next,index);
		aux=node;
		delete node;
	}
	cout<<"El nodo: "<<node<<" Y su siguiente: "<<node->next<<endl;
	
	node->next=aux;
	return 0;
}
;

/* Elimina n nodos con iteraciones */
template<class type>
int removeByCountByIterations(type *&node,int index){	
	Node *aux;
	aux=node;

	while( index>0 and node!=NULL ){
		showMessage(aux->alumn.name,2);
		printNumber(index,1);
		aux=aux->next;
		node=aux;
		index--;
	}
	return 0;
}

/* Remueve con recursividad */
template<class type>
int removeNodesByRecursivity(type *&first,int cont) {
	if (first != NULL) {
		cont++;
		showMessage(first->alumn.name,2);
		cout<<first->next<<endl;
		cout<<cont<<endl;
		removeNodesByRecursivity(first->next,cont);
	}else{
		printEndline<int>();
		showMessage("---- Lista Vacia ----",1);
	}
	delete first;
	return 0;
}
;

/* Remueve con iteraciones */
template<class type>
int removeNodesByIterations(type *&first){
	type *aux;
	aux=new type;
	int cont=1;
	while(first!=NULL){
		showMessage(first->alumn.name,2);
		cout<<cont<<endl;
		aux=first;
		first=aux->next;
		delete aux;
		cont++;
	}
	first=NULL;
	return 0;
};


/* Carga de datos de prueba */
template<class type>
int pileAuxData(type *&first) {

	Node *nodesVector[5], *aux1, *aux2, *aux3, *aux4, *aux5;
	aux1 = new Node;
	aux2 = new Node;
	aux3 = new Node;
	aux4 = new Node;
	aux5 = new Node;

	aux1->next = NULL;
	aux2->next = NULL;
	aux3->next = NULL;
	aux4->next = NULL;
	aux5->next = NULL;

	Alumn alumn;
	int cont = 0;
	while (cont < 5) {
		nodesVector[cont] = new Node;
		cont++;
	}

	cout << "empezando la carga del vector" << endl;

	/* Alumno 1 */
	alumn.name = "Nacho";
	alumn.lastname = "Martinez";
	nodesVector[0]->alumn = alumn;
	aux1 = nodesVector[0];
	/* ******** */

	/* Alumno 2 */
	alumn.name = "Exe";
	alumn.lastname = "Beraza";
	nodesVector[1]->alumn = alumn;
	aux2 = nodesVector[1];
	/* ******** */

	/* Alumno 2 */
	alumn.name = "Bauti";
	alumn.lastname = "Cabral";
	nodesVector[2]->alumn = alumn;
	aux3 = nodesVector[2];
	/* ******** */

	/* Alumno 2 */
	alumn.name = "Juan";
	alumn.lastname = "Cuelli";
	nodesVector[3]->alumn = alumn;
	aux4 = nodesVector[3];
	/* ******** */

	/* Alumno 2 */
	alumn.name = "Bernardo";
	alumn.lastname = "Martinez";
	nodesVector[4]->alumn = alumn;
	aux5 = nodesVector[4];
	/* ******** */

	cout << "termino de cargar el vector intermedio" << endl << endl;

	/* Carga 1 */
	aux5->next = NULL;
	/* ******* */

	/* Carga 2 */
	aux4->next = aux5;
	/* ******* */

	/* Carga 3 */
	aux3->next = aux4;
	/* ******* */

	/* Carga 4 */
	aux2->next = aux3;
	/* ******* */

	/* Carga 5 */
	aux1->next = aux2;
	first = aux1;
	/* ******* */

	showMessage("Finalizo la carga de datos de prueba", 1);

	return 0;
}
;
