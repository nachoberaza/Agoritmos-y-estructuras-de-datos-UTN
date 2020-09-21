#include "Operations/operations.cpp"

int main() {
    int option=NULL;
    bool exit = false;

    while (!exit) {
        clearScreen();
        printCustomPosterWithEndLine("Bienvenido al ejercicio de estructuras de repeticion");
        printEndLine();
        printCustomPosterWithEndLine("Seleccione una opcion");
        printCustomPosterWithEndLine("1) Ingrese 10 numeros positivos o negativos");
        printCustomPosterWithEndLine("2) Ingrese la cantidad de alumnos y dos notas de cada uno para calcular el promedio");
        printCustomPosterWithEndLine("3) Ingrese la cantidad de numeros pares positivos que quiere que se muestren");
        printCustomPosterWithEndLine("4) Ingrese 20 numeros para mostrar la cantidad de negativos");
        printCustomPosterWithEndLine("5) Mostrar la sumatoria de 20 numeros ingresados ");
        printCustomPosterWithEndLine("6) Mostrar el promedio entre una cantidad n de numeros ingresados ");
        printCustomPosterWithEndLine("7) Ingresar la cantidad de alumnos de un curso e informar por cada uno si esta aprobado o no, junto con las estadisticas del curso");
        printCustomPosterWithEndLine("8) Convertir un numero a romano");
        printCustomPosterWithEndLine("9) Ingresar 50 numeros e informar el promedio o la suma ");
        printCustomPosterWithEndLine("10) Ver el resultado de un partido de la liga ");
        printCustomPosterWithEndLine("11) Realizar el producto entre dos numeros mediante sumas sucesivas ");
        printCustomPosterWithEndLine("12) Dado un numero entero positivo, mostrar su factorial ");
        printCustomPosterWithEndLine("13) Calcular el promedio de los numeros que se ingresen, hasta que se ingrese un 0");
        printCustomPosterWithEndLine("14) Ingresar un conjunto de valores que representan el sueldo de un empleado. Para finalizar ingresar 0 ");
        printCustomPosterWithEndLine("15) Ingresar edades entre 18 y 22, para luego mostrar la cantidad de veces que se ingreso cada una ");
        printCustomPosterWithEndLine("16) Ingresar numeros indefinidamente para saber su factorial, hasta que se ingrese un 0 ");
        printCustomPosterWithEndLine("17) Ingresar lados de triangulos indefinidamente, hasta que se ingrese un numero invalido ");
        printCustomPosterWithEndLine("18) De los 25 alumnos del curso, ingresar su calificacion de cada materia y su nombre. Informar su promedio y su numero ");
        printCustomPosterWithEndLine("19) Ingresar los datos de cada cuenta bancaria para poder mostrar el nombre del cliente y el estado de su cuenta. Para salir ingresar nro. de cuenta negativo");
        printEndLine();

        printCustomPosterWithEndLine("--------------------------- Maximos y minimos ---------------------------");
        printCustomPosterWithEndLine("20) Ingresar 50 numeros y mostrar el menor");
        printCustomPosterWithEndLine("21) Ingresar 50 numeros y mostrar la posicion del mayor");
        printCustomPosterWithEndLine("22) Ingresar 50 numeros y mostrar el mayor y cuantas veces se ingreso");
        printCustomPosterWithEndLine("23) Ingresar 50 numeros y mostrar los dos numeros mayores");
        printCustomPosterWithEndLine("24) Ingresar numeros repetidamente para informar maximos y minimos hasta que se ingrese 0.0");
        printCustomPosterWithEndLine("25) Ingresar nombres y fechas de nacimiento de distintas personas para mostrar el mas joven y el mas viejo, hasta que se ingrese un nombre FIN");
        printCustomPosterWithEndLine("26) En base al puntaje de los valores mas altos de 5 dados tirados n veces, mostrar las estadisticas");
        printCustomPosterWithEndLine("27) Encuesta del gobierno de la ciudad, para finalizar ingresar un 0 en cantidad de integrantes.");
        printCustomPosterWithEndLine("28) Estadisticas de un buque transportador de contenedores, para finalizar ingresar un id de contenedor igual a 0");
        printCustomPosterWithEndLine("29) Calcular el vuelo con mayor recaudacion en un mes, para finalizar ingresar un id de vuelo igual a 0");

        printEndLine();
        
        printCustomPosterWithEndLine("0) Salir");

        option = inputValue("Su opcion: ");

        clearScreen();

        switch (option) {
            case 0: {
                exit = true;
                clearScreen();
                printEndLine();
                printCustomPosterWithEndLine("Programa finalizado");
                break;
            }
            case 1: {
                int elementsQuantity = 10;

                int numbers[elementsQuantity];
                fillVector(numbers, elementsQuantity);
                getPositivesNumbers(numbers, elementsQuantity);


                break;
            }
            case 2: {
                int alumnsQuantity = inputValue("Ingrese la cantidad de alumnos: ");
                Alumn alumns[alumnsQuantity];
                fillAlumnsVector(alumns, alumnsQuantity);
                calculateAveragePerAlumn(alumns, alumnsQuantity);

                break;
            }
            case 3: {
                int numbersQuantity = inputValue("Ingrese la cantidad de numeros: ");

                if (numbersQuantity > 0) {
                    showParNumbers(numbersQuantity);
                } else {
                    printCustomPoster("Ingreso un numero invalido");
                }

                break;
            }
            case 4: {
                float numbers[20];
                inputVector(numbers, 20);
                int quantity = negativeNumbersQuantity(numbers, 20);
                printCustomPoster("La cantidad de numeros negativos es: ");
                printNumber(quantity);

                break;
            }
            case 5: {
                float numbers[20];
                inputVector(numbers, 20);
                float sum = vectorSum(numbers, 20);
                printCustomPoster("La sumatoria de los sumeros ingresados es: ");
                printNumber(sum);

                break;
            }
            case 6: {
                int numbersQuantity = inputValue("Ingrese la cantidad de numeros que quiere calcular su promedio: ");
                float numbers[numbersQuantity];
                inputVector(numbers, numbersQuantity);

                float average = vectorAverage(numbers, numbersQuantity);
                printCustomPoster("El promedio de los numeros ingresados es: ");
                printNumber(average);

                break;
            }
            case 7: {
                int alumnsQuantity = inputValue("Ingrese la cantidad de alumnos del curso: ");
                Alumn alumns[alumnsQuantity];
                inputAlumnsData(alumns, alumnsQuantity);
                calculateCurseStadistics(alumns, alumnsQuantity);

                break;
            }
            case 8: {
                int num = inputValue("Ingrese un numero entero entre 1 y 3999: ");
                if (num > 3999 || num < 1) {
                    printCustomPosterWithEndLine("Ingreso un numero invalido ");
                } else {

                    string rom = translateToRom(num);
                    printCustomPoster("El numero ingresado en romano es: ");
                    printCustomPoster(rom);
                }
                break;
            }
            case 9: {
                float numbers[50];
                inputVector(numbers, 50);
                vectorOperations(numbers, 50);

                break;
            }
            case 10: {
                //int teams=inputValue("Ingrese la cantidad de equipos que participan");
                printCustomPosterWithEndLine("Todavia no esta programado ");
                break;
            }
            case 11: {
                int num1 = inputValue("Ingrese el primer numero:");
                int num2 = inputValue("Ingrese el segundo numero: ");
                printNumber(multiplicationBySums(num1, num2));
                break;
            }
            case 12: {
                int number = inputValue("Ingrese el numero al que quiere calcular su factorial: ");
                printCustomPoster("El factorial del numero ingresado es: ");
                printTab();
                printNumberWithEndl(factorial(number));
                break;
            }
            case 13: {
                double average = averageOfInputNumbers();
                printCustomPoster("El promedio de los numeros ingresados es: ");
                printTab();
                printNumber(average);
                break;
            }
            case 14: {
                operationWithEmployees();
                break;
            }
            case 15: {
                operationWithAges();
                break;
            }
            case 16:{
                infiniteFactorial();
                break;
            }
            case 17:{
                inputLofTriangles();
                break;
            }
            case 18:{
                Alumn alumns[25];
                inputAlumnsAsignatures(alumns,25);
                calculateAverageOfAllAsignatures(alumns,25);
                break;
            }
            case 19:{
                inputBankAccountData();
                break;
            }
            case 20:{
                float vector[50];
                inputVector(vector,50);
                float minor=getMinorElement(vector,50);
                printCustomPoster("El numero menor de los ingresados es: ");
                printNumberWithEndl(minor);
                break;
            }
            case 21:{
                float vector[50];
                inputVector(vector,50);
                int mayorPosition=getMayorPosition(vector,50);
                printCustomPoster("El numero mayor esta en la posicion: ");
                printNumberWithEndl(mayorPosition);
                break;
            }
            case 22:{
                float vector[50];
                inputVector(vector,50);
                float mayor=getMayorElement(vector,50);
                int n=getNumberOfRepetitions(vector,50,mayor);
                printCustomPoster("El numero mayor es: ");
                printNumber(mayor);
                printCustomPoster(" Y se repite: ");
                printNumber(n);
                printCustomPoster(" veces.");
                break;
            }
            case 23:{
                float vector[10];
                inputVector(vector,10);
                float mayor1=getMayorElement(vector,10);
                float mayor2=getMayorElementAndExcludeValue(vector,10,mayor1);

                printCustomPoster("El los dos numeros mayores son: ");
                printNumber(mayor1);
                printCustomPoster(" y ");
                printNumber(mayor2);
                break;
            }
            case 24:{
                inputUndefinedQuantityValues();
                break;
            }
            case 25:{
                inputPersonData();
                break;
            }
            case 26:{
                shotStadistics();
                break;
            }
            case 27:{
                //cada familio tiene: domicilio, tipo de vivienda ( C casa, D departamento ) y cantidad de integrantes
                //cada integrante tiene nombre, apellido, edad, sexo (F , M), nivel de estudios alcanzados (N: no posee  P: primaria S:secundaria T:terciaria) y un indicador de (I:incompleto, C:completo) del item anterior
                //se finaliza la entrada de datos con un 0
                //se busca:
                /*
                 * a) cantidad de encuestados que finalizaron la primaria
                 * b) porcentaje de analfabetizacion (mayores de 10 años sin estudios)
                 * c) domicilio de la familia con mayor cantidad de integrantes que viven en un departamento
                 * d) edad promedio de todos los habitantes de la ciudad
                 * e) mayor edad promedio de las familias
                 * f) cantidad de encuestados con estudios secundarios incompletos
                 * g) el porcentaje de encuestados femeninos con estudios terciarios completos
                 * */
                familySurvey();

                break;
            }
            case 28:{
                containerShip();
                break;
            }
            case 29:{
                fligthInformation();
                break;
            }
            default: {
                printCustomPosterWithEndLine("Ingrese una opcion valida");
                break;
            }
        }
        printEndLine();
        pauseScreen();
        option=NULL;
    }
    return 0;
}
