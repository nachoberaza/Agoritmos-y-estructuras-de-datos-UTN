#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

/* Prototypes */
template<class type>
int clearScreen();

template<class type>
int pause();

template<class type>
int printEndline();

template<class type>
type inputValue();

template <class type>
int inputAlumn(type *&firstOfStack);

template<class type>
int showMessage(type message, int option);

/* ********** */


template<class type>
int showMessage(type message, int option) {
    string output = message;
    char complement;

    switch (option) {
        case 0: {
            complement = ' ';
            break;
        }
            /* Endline */
        case 1: {
            complement = '\n';
            break;
        }

        /* Tab */
        case 2: {
            complement = '\t';
            break;
        }

    }

    cout << message << complement;

    return 0;;
}

template<class type>
int printEndline() {
    cout << '\n';
    return 0;
}

template<class type>
int clearScreen() {
    system("clear");
    return 0;
}

template<class type>
int pause() {
    showMessage("Presione una tecla para continuar...", 1);
    system("read");
    return 0;
}

template<class type>
type inputValue() {
    type value;
    cin >> value;
    return value;
}

template <class type>
int inputAlumn(type *&newNode){

    showMessage("Ingrese los datos del alumno: ",1);

    showMessage("=== Datos personales ===",1);
    showMessage("Nombre: ",2);
    newNode->alumn.name=inputValue<string>();

    showMessage("Apellido: ",2);
    newNode->alumn.lastname=inputValue<string>();

    showMessage("=== Calificaciones ===",1);
    showMessage("Algoritmos y Estructuras de datos: ",2);
    newNode->alumn.califications.Algoritms=inputValue<int>();

    showMessage("Geometria: ",2);
    newNode->alumn.califications.Geometry=inputValue<int>();

    showMessage("Matematica Discreta: ",2);
    newNode->alumn.califications.Discreet_Math=inputValue<int>();

    showMessage("Analisis Matematico: ",2);
    newNode->alumn.califications.Math_Analysis=inputValue<int>();

    return 0;
}

