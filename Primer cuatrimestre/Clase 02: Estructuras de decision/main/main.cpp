#include "input-output functions/input-output.cpp"
#include "operations/operators.cpp"

int main() {

    int option;
    bool exit = false;

    while (!exit) {
        clearScreen();
        printCustomPosterWithEndLine("Ingrese un numero para realizar una opcion: ");
        printEndLine();

        printCustomPosterWithEndLine("1) Calcular el minimo entre dos valores ");
        printCustomPosterWithEndLine("2) Saber la paridad de un numero ");
        printCustomPosterWithEndLine("3) Ingresar dos numeros y mostrar su suma o su resta ");
        printCustomPosterWithEndLine("4) Calcular el area de un triangulo ");
        printCustomPosterWithEndLine("5) Calcular el mayor numero ingresado ");
        printCustomPosterWithEndLine("6) Calcular la fecha mas reciente ");
        printCustomPosterWithEndLine(
                "7) En base a los lados ingresados de un triangulo, informar si es posible formar un triangulo");
        printCustomPosterWithEndLine(
                "8) En base a los dados de un triangulo informar si es un equilatero, isoseles o escaleno");
        printCustomPosterWithEndLine("9) Determinar si un numero de 5 cifras es capicua ");
        printCustomPosterWithEndLine("10) Calcular la cantidad de dias de un mes ingresado de un Año en particular");
        printCustomPosterWithEndLine("11) En base a la cantidad ingresada y el codigo de un producto calcular el precio total");
        printCustomPosterWithEndLine("12) Calcular el precio de una prestacion medica en base al codigo del paciente ");


        printCustomPosterWithEndLine("0) Salir");

        option = inputValue("Su opcion: ");
        clearScreen();
        switch (option) {
            case 1: {
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

            case 2: {
                int number = inputValue("Ingrese un numero para saber su paridad: ");

                if (isPar(number)) {
                    printCustomPosterWithEndLine("El numero ingresado es par");
                } else {
                    printCustomPosterWithEndLine("El numero ingresado es impar");
                }
                pauseScreen();

                break;
            }

            case 3: {
                float number1, number2;

                number1 = inputValue("Ingrese el primer numero: ");
                number2 = inputValue("Ingrese el segundo numero: ");

                Operation operation = multiOperation(number1, number2);

                if (operation.result != NULL) {
                    if (operation.operationSelected) {
                        printCustomPoster("SUMA: ");
                        printNumber(operation.result);
                    } else {
                        printCustomPoster("RESTA: ");
                        printNumber(operation.result);
                    }
                } else {
                    printCustomPosterWithEndLine("Los numeros ingresados son 					iguales");
                }
                pauseScreen();

                break;
            }

            case 4: {
                float number1, number2;

                number1 = inputValue("Ingrese la base expresada en cm: ");
                number2 = inputValue("Ingrese la altura expresada en cm: ");

                float area = calculateArea(number1, number2);

                printCustomPoster("El area del triangulo es: ");
                if (area < 100) {
                    area = area * 100;
                    printNumber(area);
                    printCustomPoster(" mm²");
                    printEndLine();
                    pauseScreen();
                } else {
                    area = area / 100;
                    printNumber(area);
                    printCustomPoster(" m²");
                    printEndLine();
                    pauseScreen();
                }
                break;
            }

            case 5: {
                int cont = inputValue("Indique la cantidad de valores que desea ingresar: ");
                float values[cont];
                float highValue;

                inputVector(values, cont);
                highValue = calculateHighestValue(values, cont);
                printCustomPoster("El numero mayor es: ");
                printNumberWithEndl(highValue);
                pauseScreen();
                break;
            }

            case 6: {
                Date date1, date2;

                printCustomPosterWithEndLine("Ingrese la primer fecha: ");
                date1.day = inputValue("Dia: ");
                date1.month = inputValue("Mes: ");
                date1.year = inputValue("Anio: ");

                printEndLine();
                printCustomPosterWithEndLine("Ingrese la segunda fecha: ");
                date2.day = inputValue("Dia: ");
                date2.month = inputValue("Mes: ");
                date2.year = inputValue("Anio: ");

                calculateMoreRecentDate(date1, date2);
                pauseScreen();

                break;
            }

            case 7: {
                float l1 = inputValue("Ingrese el primer lado:");
                float l2 = inputValue("Ingrese el segundo lado:");
                float l3 = inputValue("Ingrese el tercer lado:");

                bool result = verifyTriangle(l1, l2, l3);
                if (result) {
                    printCustomPosterWithEndLine("Es posible formar un triangulo con esas medidas");
                } else {
                    printCustomPosterWithEndLine("No se puede formar un triangulo con esas medidas");
                }
                pauseScreen();

                break;
            }

            case 8: {
                float l1 = inputValue("Ingrese el primer lado:");
                float l2 = inputValue("Ingrese el segundo lado:");
                float l3 = inputValue("Ingrese el tercer lado:");

                int category = getTriangleCategory(l1, l2, l3);
                if (category == 1) {
                    printCustomPosterWithEndLine("El triangulo es equilatero");
                } else if (category == 2) {
                    printCustomPosterWithEndLine("El triangulo es isosceles");
                } else {
                    printCustomPosterWithEndLine("El triangulo es escaleno");
                }
                pauseScreen();

                break;
            }

            case 9: {
                float num = inputValue("Ingrese un numero de 5 cifras: ");
                bool result = capicua(num);
                if (result) {
                    printCustomPosterWithEndLine("El numero ingresado es capicua");
                } else {
                    printCustomPosterWithEndLine("El numero ingresado no es capicua ");
                }

                pauseScreen();
                break;
            }

            case 10: {
                int year = inputValue("Ingrese un año (YYYY): ");
                int month = inputValue("Ingrese el mes (mm)");

                int days = calculateDays(year, month);

                printCustomPosterWithEndLine("La cantidad de dias es:");
                printNumber(days);
                printEndLine();

                pauseScreen();
                break;

            }

            case 11:{
                string code=inputString("Ingrese el codigo del producto que desea comprar: ");
                int quantity=inputValue("Ingrese la cantidad de unidades del producto que desea comprar: ");
                float price=calculatePrice(quantity,code);

                printCustomPoster("Articulo: ");
                printCustomPoster(code);
                printCustomPoster(" Cantidad: ");
                printNumber(quantity);
                printCustomPoster(" Precio: $");
                printNumber(price);
                pauseScreen();
                break;
            }

            case 12:{
                string code=inputString("Ingrese el codigo del paciente: ");
                int nroMedicSchedule=inputValue("Ingrese el numero de historia del paciente: ");
                MedicTicket ticket=calculateMedicPrice(code,nroMedicSchedule);

                printCustomPoster("Codigo paciente: ");
                printCustomPoster(ticket.code);
                printCustomPoster(" nro historia clinica: ");
                printNumber(ticket.nroSchedule);
                printCustomPoster(" Total a pagar: $");
                printNumber(ticket.price);
                printEndLine();

                pauseScreen();

                break;
            }
            case 0: {
                printCustomPosterWithEndLine("Saliendo del programa...");
                exit = true;
                break;
            }

            default: {
                printCustomPosterWithEndLine("Ingrese un valor valido");
                break;
            }
        }
    }
    return 0;
}
