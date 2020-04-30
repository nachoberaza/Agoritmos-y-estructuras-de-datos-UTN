#ifdef _WIN32
#include <windows.h>
#include <stdio.h>
#include <tchar.h>
#define DIV 1048576
#define WIDTH 7
#endif

#ifdef linux
#include <iostream>
#include <string>
#include "string.h"
#include <sstream>
#include "stdio.h"
#include <cstdlib>
#endif

using namespace std;

/*----Output----*/

//Esta funcion limpia la pantalla
void clearScreen()
{
    #ifdef _WIN32
    system("cls");
    #endif
    #ifdef linux
    system("clear");
    #endif 
}

void printCustomPoster(string poster)
{
    cout << poster;
}

void printCustomPosterWithEndLine(string poster)
{
    cout << poster << '\n';
}

void printEndLine()
{
    cout << '\n';
}

//En esta funcion se convierte un float en string, usando la libreria sstream
void printNumber(float number)
{
    ostringstream ss;
    ss << number;
    string s(ss.str());
    cout << s << '\n';
}

//Esta funcion pausa la consola
void pauseScreen()  //Falta agregar que muestre un cartel con la indicacion que presione enter
{
    #ifdef _WIN32
        system("pause");
    #endif
    #ifdef linux
        system("read");
    #endif 
}


/*----Input-----*/

int inputValue(string poster)
{
    int value;
    printCustomPoster(poster);
    cin >> value;
    return value;
}
