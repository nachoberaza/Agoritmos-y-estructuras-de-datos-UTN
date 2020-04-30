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

        printCustomPosterWithEndLine("1) Calcular el minimo entre dos valores: ");
        
        printCustomPosterWithEndLine("0) Salir");

        option = inputValue("Su opcion: ");

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
                printNumber(smaller);
            }
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
}