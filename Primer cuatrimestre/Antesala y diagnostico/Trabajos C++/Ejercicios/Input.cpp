#include <iostream>
#include <string>
using namespace std;

double inputNumberPoster()
{
    double numero;

    cout << "Ingrese un numero:" << endl;
    cin >> numero;

    return numero;
}

double inputSimpleNumber()
{
    double numero;

    cin >> numero;

    return numero;
}

int inputNumberWithCustomPoster(string poster)
{
    int numero;

    cout << poster << endl;
    cin >> numero;

    return numero;
}