#include "input-output functions/input-output.cpp"
#include "operations/operators.cpp"

int main()
{

    int option;
    bool exit = false;

    while (!exit)
    {
        clearScreen();
        printCustomPosterWithEndLine("Ingrese un numero para realizar una opcion: ");
        printEndLine();

        printCustomPosterWithEndLine("1) Calcular el minimo entre dos valores ");
        printCustomPosterWithEndLine("2) Saber la paridad de un numero ");
        printCustomPosterWithEndLine("3) Ingresar dos numeros y mostrar su suma o su resta ");
        printCustomPosterWithEndLine("4) Calcular el area de un triangulo ");
        printCustomPosterWithEndLine("5) Calcular el mayor numero ingresado ");
        printCustomPosterWithEndLine("6) Calcular la fecha mas reciente ");

        printCustomPosterWithEndLine("0) Salir");

        option = inputValue("Su opcion: ");
        clearScreen();
        switch (option)
        {
        case 1:
        {
            /*---Calcular el minimo entre dos valores ingresados---*/
            float value1, value2;

            value1 = inputValue("Ingrese el primer valor: ");
            value2 = inputValue("Ingrese el segundo valor: ");
            printEndLine();

            float smaller = whichIsSmaller(value1, value2);
            if (smaller) //Aca se pregunta si es null por si los dos numeros son iguales
            {
                printCustomPoster("El numero menor de los ingresados es: ");
                printNumberWithEndl(smaller);
            }
            pauseScreen();

            break;
        }

        case 2:
        {
            int number = inputValue("Ingrese un numero para saber su paridad: ");

            if (isPar(number))
            {
                printCustomPosterWithEndLine("El numero ingresado es par");
            }
            else
            {
                printCustomPosterWithEndLine("El numero ingresado es impar");
            }
            pauseScreen();

            break;
        }

        case 3:
        {
            float number1, number2;

            number1 = inputValue("Ingrese el primer numero: ");
            number2 = inputValue("Ingrese el segundo numero: ");

            Operation operation = multiOperation(number1, number2);

            if (operation.result != NULL)
            {
                if (operation.operationSelected)
                {
                    printCustomPoster("SUMA: ");
                    printNumber(operation.result);
                }
                else
                {
                    printCustomPoster("RESTA: ");
                    printNumber(operation.result);
                }
            }
            else
            {
                printCustomPosterWithEndLine("Los numeros ingresados son 					iguales");
            }
            pauseScreen();

            break;
        }

        case 4:
        {
            float number1, number2;

            number1 = inputValue("Ingrese la base expresada en cm: ");
            number2 = inputValue("Ingrese la altura expresada en cm: ");

            float area = calculateArea(number1, number2);

            printCustomPoster("El area del triangulo es: ");
            if (area < 100)
            {
                area = area * 100;
                printNumber(area);
                printCustomPoster(" mm²");
                printEndLine();
                pauseScreen();
            }
            else
            {
                area = area / 100;
                printNumber(area);
                printCustomPoster(" m²");
                printEndLine();
                pauseScreen();
            }
            break;
        }

        case 5:
        {
            int cont=inputValue("Indique la cantidad de valores que desea ingresar: ");
            float values[cont];
            float highValue;

            inputVector(values,cont);
            highValue=calculateHighestValue(values,cont);
            printCustomPoster("El numero mayor es: ");
            printNumberWithEndl(highValue);
            pauseScreen();
            break;          
        }

        case 6:
        {
            Date date1,date2;

            printCustomPosterWithEndLine("Ingrese la primer fecha: ");
            date1.day=inputValue("Dia: ");
            date1.month=inputValue("Mes: ");
            date1.year=inputValue("Anio: ");

            printEndLine();
            printCustomPosterWithEndLine("Ingrese la segunda fecha: ");
            date2.day=inputValue("Dia: ");
            date2.month=inputValue("Mes: ");
            date2.year=inputValue("Anio: ");
            
            calculateMoreRecentDate(date1,date2);
            pauseScreen();
            
            break;
        }

        case 0:
        {
            printCustomPosterWithEndLine("Saliendo del programa...");
            exit = true;
            break;
        }

        default:
        {
            printCustomPosterWithEndLine("Ingrese un valor valido");
            break;
        }
        }
    }
    return 0;
}
