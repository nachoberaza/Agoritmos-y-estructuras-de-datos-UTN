#include "./IO.h"

/* Datos de prueba */
template<class type>
int pileAuxData(type *&first);

template<class type>
int listAuxData(type *&first);

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
int removeByCount(type *&firstOfStack, int count, int cont);

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
	while (auxNode != NULL) {
		showMessage(auxNode->alumn.name, 1);
		auxNode = auxNode->next;
	}

	delete auxNode;

	return 0;
}
;

/* Elimina n nodos con recursividad */
template<class type>
int removeByCount(type *&firstOfStack, int count, int cont) {

	if (cont < count) {
		if (firstOfStack->next != NULL) {
			removeByCount(firstOfStack->next, count, cont++);
		}
	}
	delete firstOfStack;
	cout << "el contador: " << cont << endl;
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
}
;

/* Desapila con recursividad */
template<class type>
int removeNodes(type *&first) {
	if (first->next != NULL) {
		removeNodes(first->next());
	}
	delete first;
	return 0;
}
;

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
	int cont=0;
	while(cont<5){
		nodesVector[cont]=new Node;
		cont++;
	}

	cout<<"empezando la carga del vector"<<endl;

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


	/* Carga 2 */
	aux4->next=aux1;
	/* ******* */

	/* Carga 3 */
	aux3->next=aux4;
	/* ******* */

	/* Carga 4 */
	aux2->next=aux3;
	/* ******* */

	/* Carga 4 */
	aux1->next=aux2;
	/* ******* */

	/* Carga 4 */
	aux1->next=aux2;
	first=aux1;
	/* ******* */

	showMessage("Finalizo la carga de datos de prueba", 1);

	return 0;
}
;
