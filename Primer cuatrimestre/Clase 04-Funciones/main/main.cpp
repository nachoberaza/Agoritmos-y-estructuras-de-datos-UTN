#include "operations/operations.cpp"

int main() {
    int option=0;
    bool exit=false;

    while(!exit) {
        clearScreen();
        printCustomPosterWithEndLine("Ejercicios de funciones");
        printEndLine();
        printCustomPosterWithEndLine("Seleccione una opcion: ");
        printCustomPosterWithEndLine("1) Obtener el maximo comun divisor de dos numeros enteros");
        printCustomPosterWithEndLine("2) Obtener el factorial de un numero ingresado");
        printCustomPosterWithEndLine("3) Saber si es verdadero que un numero es multiplo de otro. Siendo ambos ingresados por el usuario");
        printCustomPosterWithEndLine("4) Dados numeros ingresados repetidamente, mostrar sus estadisticas. Para salir ingresar 0");
        printCustomPosterWithEndLine("5) Dados dos numeros ingresados informar su combinatorio ");
        printCustomPosterWithEndLine("6) Dados dos numeros ingresados, informar el porcentaje que representa uno sobre el otros ");
        printCustomPosterWithEndLine("7) Ingresar una edad y en base a la misma, retornar un numero");
        printCustomPosterWithEndLine("8) Dada una fecha valida ingresada, devolverla en formato AAAAMMDD");
        printCustomPosterWithEndLine("9) Dada una fecha ingresada en formato AAAAMMDD devolver el dia, mes y anio");
        printCustomPosterWithEndLine("0) Salir");

        option=inputValue("su opcion: ");

        switch (option) {
            case 0:{
                exit=!exit;
                clearScreen();
                printCustomPosterWithEndLine("Saliendo del programa...");
                break;
            }
            case 1:{
                int a,b;
                a=inputValue("Ingrese el primer numero: ");
                b=inputValue("Ingrese el segundo numero: ");

                printCustomPoster("El maximo comun divisor es: ");
                printNumberWithEndl(getGreatestCommonDivisor(a,b));

                break;
            }
            case 2:{
                int number=inputValue("Numero del cual quiere saber el factorial: ");
                printCustomPoster("El factorial es: ");
                printNumberWithEndl(factorial(number));
                break;
            }
            case 3:{
                int a=inputValue("Ingrese un numero: ");
                int b=inputValue("Ingrese otro numero: ");
                isMultiple(a,b);
                break;
            }
            case 4:{
                getStaticsByInputNumbers();
                break;
            }
            case 5:{
                int a,b;
                a=inputValue("Ingrese el primer numero: ");
                b=inputValue("Ingrese el segundo numero: ");

                printCustomPoster("La combinatoria de ");
                printNumber(a);
                printCustomPoster(" elementos tomados de a ");
                printNumber(b);
                printCustomPoster(" elementos es: ");

                printNumberWithEndl(combinatorial(a,b));

                break;
            }
            case 6:{
                int a,b;
                a=inputValue("Ingrese el primer numero: ");
                b=inputValue("Ingrese el segundo numero: ");

                printCustomPoster("El porcentaje que ");
                printNumber(a);
                printCustomPoster(" representa sobre ");
                printNumber(b);
                printCustomPoster(" es: ");

                printNumber(calculatePercentaje(a,b));

                printCustomPoster("%");
                break;
            }
            case 7:{
                int age=0;
                int code=0;
                age=inputValue("Ingrese una edad: ");
                printCustomPoster("El codigo segun la edad es: ");
                code=EdadGrupoEtario(age);
                printNumberWithEndl(code);
                break;
            }
            case 8:{
                int day=0;
                int month=0;
                int year=0;
                printCustomPosterWithEndLine("Ingrese los datos de la fecha: ");
                day=inputValue("Dia: ");
                month=inputValue("Mes: ");
                year=inputValue("Anio: ");
                printCustomPoster("La Fecha ingresada en formato AAAAMMDD: ");
                printCustomPosterWithEndLine(getDateWithIndicatedFormat(day,month,year));
                break;
            }
            case 9:{
                string date=inputString("Ingrese la fecha en formato AAAAMMDD: ");
                getDataByDate(date);
             break;
            }
            case 10:{

                break;
            }
            case 11:{

                break;
            }
            case 12:{

                break;
            }
            default:{
                clearScreen();
                printCustomPosterWithEndLine("Ingrese una opcion valida...");
                pauseScreen();
                break;
            }
        }
        printEndLine();
        pauseScreen();
    }

    return 0;
}
