#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <stdio.h>
#include <string>
#include <curses.h>


#include "Input.cpp"
#include "Output.cpp"
#include "Operations.cpp"

using namespace std;

int main()
{

    int option;
    int exit = 1;

    while (exit == 1)
    {
        cout << '\n';
        cout << "Ingrese un numero del 1-13: " << '\n'
             << endl;
        cout << "1) Sumar, restar y multiplicar 3 numeros enteros " << endl;
        cout << "2) Sumar el doble de un numero y el cubo de otro" << endl;
        cout << "3) Sumar cifras de un numero" << endl;
        cout << "4) Calcular la edad de una persona en base a su fecha de nacimiento" << endl;
        cout << "5) Calcular el promedio de las notas de 4 examenes" << endl;
        cout << "6) Calcular Area, Perimetro y el diametro de un circulo en base a su radio" << endl;
        cout << "7) Dada la base y la altura de un rectangulo calcular el area y el perimetro" << endl;
        cout << "8) Segun la cantidad de alumnos desaprobados y aprobados, calcular el porcentaje de cada uno" << endl;
        cout << "9) Calcular teorema de Pitagoras" << endl;
        cout << "10) Calcular el precio de una cantidad dada de cable" << endl;
        cout << "11) Conversor de pesos a Dolares y a Euros" << endl;
        cout << "12) Calcular el monto presupestario que recibira cada una de las areas de una empresa" << endl;
        cout << "13) Calcular la cantidad de revoque para una medida de pared dada" << endl;

        cout << '\n'
             << "0) Salir" << endl;

        cout << '\n'
             << "Su Opcion: ";
        cin >> option;

        switch (option)
        {

        case 1:
        {
            int numero1 = inputNumberPoster();

            int numero2 = inputNumberPoster();

            cout << "El resultado de su suma es: " << suma(numero1, numero2) << '\n';
            cout << "El resultado de su resta es: " << resta(numero1, numero2) << '\n';
            cout << "El resultado de su multiplicaciòn es: " << multiplicar(numero1, numero2) << '\n';
            
            break;
        }

        case 2:
        {
            double num1 = inputNumberPoster();
            double num2 = inputNumberPoster();

            double output = sumDoubleCube(num1, num2);
            double average = averageCube(num1, num2);

            cout << "El resultado de la suma del doble de un numero y el cubo de otro es: " << output << endl;
            cout << "El promedio de sus cubos es: " << average << endl;

            break;
        }

        case 3:
        {
            int number;
            double sum;

            cout << "Ingrese un numero de 4 cifras: ";
            number = inputSimpleNumber();

            sum = sumFigures(number);

            cout << "Este es el resultado de la suma de las cifras del numero ingresado: " << sum << endl;

            break;
        }

        case 4:
        {
            int day, month, year;
            Date age;

            cout << "Ingrese los datos de su fecha de nacimiento: " << endl;

            cout << "Dia: " << '\t';
            day = inputSimpleNumber();

            cout << "Mes: " << '\t';
            month = inputSimpleNumber();

            cout << "Año: " << '\t';
            year = inputSimpleNumber();

            age = calculateAge(day, month, year);

            cout << "Edad: " << endl;
            cout << age.year << " años" << '\n';
            //cout<< age.month << " meses"<< '\n';  //Falta hacer el calculo de los dias y los meses
            //cout<< age.day << " dias"<< '\n';
            break;
        }

        case 5:
        {
            int exam1, exam2, exam3, exam4;

            cout << "Ingrese las notas de los examenes: " << endl;
            cout << '\n'
                 << "Examen n°1:" << '\t';
            exam1 = inputSimpleNumber();
            cout << '\n'
                 << "Examen n°2:" << '\t';
            exam2 = inputSimpleNumber();
            cout << '\n'
                 << "Examen n°3:" << '\t';
            exam3 = inputSimpleNumber();
            cout << '\n'
                 << "Examen n°4:" << '\t';
            exam4 = inputSimpleNumber();

            cout << '\n'
                 << "El promedio total es: " << examsAverage(exam1, exam2, exam3, exam4) << endl;
            break;
        }

        case 6:
        {
            int radio;
            Circle circle;
            cout << "Ingrese la magnitud del radio: " << endl;
            radio = inputSimpleNumber();
            circle = circleOperations(radio);
            clearScreen();

            cout << "Las propiedades del circulo con el radio que ingreso son: " << '\n'
                 << "Diametro: " << circle.diameter << '\n'
                 << "Perimetro: " << circle.perimeter << '\n'
                 << "Area: " << circle.area << '\n';

            break;
        }
        case 7:
        {
            int heitgh, base;

            showPoster("Ingrese el valor de la base: ");
            base = inputSimpleNumber();
            showPoster("Ingrese el valor de la altura: ");
            heitgh = inputSimpleNumber();

            Rectangle rectangle = rectangleOperations(base, heitgh);

            clearScreen();
            cout << "Las propiedades del rectangulo en base a la base y la altura que ingreso son:" << '\n'
                 << "Perimetro: " << rectangle.perimeter << '\n'
                 << "Area: " << rectangle.area << '\n';

            break;
        }

        case 8:
        {
            int totalQuantity = inputNumberWithCustomPoster("Ingrese la cantidad total de alumnos en el curso: ");
            int disapproved = inputNumberWithCustomPoster("Cantidad de alumnos desaprobados: ");
            //int approved = inputNumberWithCustomPoster("Cantidad de alumnos aprobados: ");
            int approved = totalQuantity - disapproved;

            Course course = calculatePercentage(approved, disapproved, totalQuantity); // No esta funcionando

            cout << '\n'
                 << "De un total de " << totalQuantity << '\n'
                 << "Aprobo un " << course.approvedPercentage << "%" << '\n'
                 << "Y desaprobo un " << course.disapprovedPercentage << "%" << '\n';
            break;
        }

        case 9:
        {
            int leg1 = inputNumberWithCustomPoster("Ingrese el valor del cateto 1: ");
            int leg2 = inputNumberWithCustomPoster("Ingrese el valor del cateto 2: ");
            float hypotenuse = pythagorasTheorem(leg1, leg2);

            cout << "El valor de la hipotenusa es: " << hypotenuse << endl;

            break;
        }

        case 10:
        {
            float quantity = inputNumberWithCustomPoster("Ingrese la cantidad de alambre que desea en metros: ");
            float price = priceByQuantity(quantity);

            cout << "El precio para " << quantity << "m de alambre es de: $" << price << endl;

            break;
        }

        case 11:
        {
            float quantity = inputNumberWithCustomPoster("Ingrese la cantidad de dinero en pesos Argentinos para convertir a dolares y Euros:");
            ForeignCoin coin = moneyConversor(quantity);

            cout << '\n'
                 << "$" << coin.pesos << " Equivalen a:" << '\n'
                 << "us$ " << coin.dolar << '\n'
                 << "eu$" << coin.eur << '\n';
            break;
        }

        case 12:
        {
            double budget = inputNumberWithCustomPoster("Ingrese el monto presupestario total de la empresa: ");

            Industry industry = calculateBudget(budget);

            cout << "En base a un monto presupuestario anual de $" << budget << '\n'
                 << "El porcentaje correspondiente de cada area es de: " << '\n'
                 << "$" << industry.ensambleAreaBudget << " Para el area de ensamble," << '\n'
                 << "$" << industry.electricAreaBudget << " Para el area electrica," << '\n'
                 << "$" << industry.paintAreaBudget << " Para el area de pintura." << '\n';

            break;
        }

        case 13:
        {
            double measurements = inputNumberWithCustomPoster("Ingrese las medidas en m² de la pared a revocar: ");
            float sandQuantity = calculateSandQuantity(measurements);
            cout << "La cantidad necesaria de arena para " << measurements << "m² es: " << sandQuantity << " m³" << '\n';
            break;
        }

        case 0:
        {

            char c;
            cout << "¿Esta seguro que desea salir? [S/N]";
            cin >> c;

            if (c == 'S' or c == 's')
            {
                cout << "Saliendo del programa...." << endl;
                exit = 0;
            }

            break;
        }

        default:
        {
            cout << "Seleccione una opcion valida" << endl;

            break;
        }
        }
    }
    return 0;
}
