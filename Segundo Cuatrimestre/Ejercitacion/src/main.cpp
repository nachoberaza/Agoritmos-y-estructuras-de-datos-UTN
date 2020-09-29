#include "../lib/list.h"

int main(){

	bool exit=false;
	int option;
    Node *stackOfAlumns;
    Node *listOfAlumns;

    showMessage("¡¡¡Bienvenido a la ejercitacion de estructuras dinamicas!!! ", 1);

	while(!exit){
	    clearScreen<int>();
		showMessage("Seleccione el n° ejercicio que desea realizar: ", 1);
		printEndline<int>();

		showMessage("******************** Pilas y Colas ********************",1);
		printEndline<int>();
        showMessage("1) Apilar un alumno",1);
        showMessage("2) Desapilar los alumnos",1);
		showMessage("3) Sacar dos alumnos del tope y reemplazarlos por uno dado",1);

        printEndline<int>();
		showMessage("=== Listas enlazadas ===",1);
		printEndline<int>();

		cout<<"Ingrese su opcion: ";
		cin>>option;

        switch (option) {
            case 0:{
                showMessage("Saliendo...",1);
                exit=true;
                break;
            };
            case 1:{
                pile(stackOfAlumns);
                pause<int>();
                break;
            };
            case 2:{
                unPile(stackOfAlumns);
                pause<int>();
                break;
            }
            case 3:{
                Alumn *alumn;
                alumn=new Alumn;
                inputAlumn(alumn);

                break;
            }
            default:{
                showMessage("Ingrese una opcion valida",1);
                pause<int>();
                break;
            }
        }
	}

	return 0;
}
