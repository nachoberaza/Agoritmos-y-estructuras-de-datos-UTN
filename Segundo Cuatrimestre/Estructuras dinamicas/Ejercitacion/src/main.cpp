#include "../lib/list.h"

int main() {

	bool exit = false;
	int option = 0;
	Node *stackOfAlumns;
	stackOfAlumns = NULL;

	/*
	 Node *listOfAlumns;
	 listOfAlumns=NULL;
	 */

	showMessage(
			"¡¡¡Bienvenido a la ejercitacion de estructuras dinamicas!!! ",
			1);

	while (!exit) {
		clearScreen<int>();
		showMessage("Seleccione el n° ejercicio que desea realizar: ", 1);
		printEndline<int>();

		showMessage("******************** Pilas y Colas ********************",
				1);
		printEndline<int>();
		showMessage("1) Apilar un alumno", 1);
		showMessage("2) Desapilar los alumnos mostrando", 1);
		showMessage(
				"3) Sacar dos alumnos del tope y reemplazarlos por uno dado",
				1);
		showMessage("10) Cargar los datos auxiliares", 1);

		printEndline<int>();
		showMessage("=== Listas enlazadas ===", 1);
		printEndline<int>();

		cout << "Ingrese su opcion: ";
		cin >> option;

		clearScreen<int>();

		switch (option) {
		case 0: {
			showMessage("Saliendo...", 1);
			exit = true;
			break;
		}
			;
		case 1: {
			pile(stackOfAlumns);
			pause<int>();
			break;
		}
			;
		case 2: {
			showMessage("Desapilando...",1);
			unPile(stackOfAlumns);
			pause<int>();
			break;
		}
		case 3: {
			removeByCount(stackOfAlumns, 2, 0);
			pause<int>();
			break;
		}
		case 10: {
			showMessage("Apilando datos de prueba...", 1);
			printEndline<int>();
			pileAuxData(stackOfAlumns);
			pause<int>();
			break;
		}
		default: {
			showMessage("Ingrese una opcion valida", 1);
			break;
		}
		}
	}

	return 0;
}
