#include "../input-output functions/input-output.cpp"
#include "./LocalDate.cpp"
#include <iostream>
#include <time.h>

using namespace std;

struct Alumn {
    string name;
    float note1;
    float note2;

    float noteAMI;
    float noteChe;
    float noteAlg;
    float noteArc;
    float noteDis;
    float noteSyo;
    float noteAlgoritms;

    float average;
};


struct Person {
    string name;
    int age;
    Date dateOfBirth;
};


void fillVector(int vector[], int elementsQuantity) {
    int cont = 0;
    while (cont < elementsQuantity) {
        printCustomPoster("Ingrese el valor de la posicion ");
        printNumber(cont);
        vector[cont] = inputValue(" valor: ");
        cont++;
    }
}

void getPositivesNumbers(int vector[], int elementQuantity) {
    int cont = 0;
    printCustomPosterWithEndLine("Los numeros positivos de ingresados son: ");
    while (cont < elementQuantity) {
        if (vector[cont] > 0) {
            printNumber(vector[cont]);
            printCustomPoster(" En la posicion: ");
            printNumber(cont);
            printEndLine();
        }
        cont++;
    }
}

void fillAlumnsVector(Alumn vector[], int elementQuantity) {
    int cont = 0;
    clearScreen();
    printCustomPosterWithEndLine("Ingrese los datos de cada alumno: ");
    while (cont < elementQuantity) {
        vector[cont].name = inputString("Ingrese el nombre del alumno: ");
        vector[cont].note1 = inputValue("Ingrese una primer nota: ");
        vector[cont].note2 = inputValue("Ingrese otra nota: ");
        cont++;
    }
}

void calculateAveragePerAlumn(Alumn vector[], int elementQuantity) {
    int cont = 0;
    while (cont < elementQuantity) {
        vector[cont].average = (vector[cont].note1 + vector[cont].note2) / 2;
        printCustomPoster("Datos del alumno ");
        printNumber(cont);
        printCustomPosterWithEndLine(":");
        printCustomPoster("Nombre: ");
        printCustomPoster(vector[cont].name + '\t');

        printCustomPoster(" Nota 1: ");
        printNumber(vector[cont].note1);

        printCustomPoster(" Nota 2: ");
        printNumber(vector[cont].note2);

        printCustomPoster(" Promedio: ");
        printNumber(vector[cont].average);

        printEndLine();
        cont++;
    }
}

void showParNumbers(int numbersQuantity) {
    int cont = 0;
    int numbers = 0;

    while (numbers < numbersQuantity) {

        if ((cont % 2) == 0) {
            printNumber(cont);
            printTab();
            numbers++;
        }


        cont++;
    }
}

int negativeNumbersQuantity(const float vector[], int positions) {
    int quantity = 0;
    int cont = 0;
    while (cont < positions) {
        if (vector[cont] < 0) {
            quantity++;
        }
        cont++;
    }
    return quantity;
}

float vectorSum(const float vector[], int positions) {
    float sum = 0;
    int cont = 0;
    while (cont < positions) {
        sum += vector[cont];
        cont++;
    }
    return sum;
}

float vectorAverage(const float vector[], int positions) {
    float average = 0;
    float sum = 0;
    int cont = 0;
    while (cont < positions) {
        sum += vector[cont];
        cont++;
    }
    average = sum / (float) positions;
    return average;
}

void inputAlumnsData(Alumn alumns[], int quantity) {
    int cont = 0;
    while (cont < quantity) {
        alumns[cont].name = inputString("Ingrese el nombre del alumno: ");
        alumns[cont].note1 = (float) inputValue("Ingrese su nota: ");
        cont++;
    }
}

void calculateCurseStadistics(Alumn alumns[], int quantity) {
    int cont = 0;
    float quantityDesaprobed = 0;
    float quantityAprobed = 0;

    float apbPercent = 0;
    float dspPercent = 0;

    while (cont < quantity) {

        printCustomPoster("El alumno n°: ");
        printNumber(cont + 1);
        printTab();
        printCustomPoster(alumns[cont].name);

        if (alumns[cont].note1 < 6) {
            printCustomPosterWithEndLine(" Esta desaprobado");
            quantityDesaprobed++;
        } else {
            printCustomPosterWithEndLine(" Esta aprobado");
            quantityAprobed++;
        }
        cont++;
    }

    apbPercent = (quantityAprobed / (float) quantity) * 100;
    dspPercent = (quantityAprobed / (float) quantity) * 100;
    printCustomPoster("Aprobados: ");
    printNumber(apbPercent);
    printCustomPoster("%");
    printTab();

    printCustomPoster("Desaprobados: ");
    printNumber(dspPercent);
    printCustomPoster("%");
}

string translateToRom(int number) {
    string rom;

    int units, tens, cents, thousands;

    units = number % 10;
    number /= 10;
    tens = number % 10;
    number /= 10;
    cents = number % 10;
    number /= 10;
    thousands = number % 10;
    number /= 10;


    switch (thousands) {
        case 1:
            rom += "M";
            break;
        case 2:
            rom += "MM";
            break;
        case 3:
            rom += "MMM";
            break;
        default:
            rom += "";
            break;
    }

    switch (cents) {
        case 1:
            rom += "C";
            break;
        case 2:
            rom += "CC";
            break;
        case 3:
            rom += "CCC";
            break;
        case 4:
            rom += "CD";
            break;
        case 5:
            rom += "D";
            break;
        case 6:
            rom += "DC";
            break;
        case 7:
            rom += "DCC";
            break;
        case 8:
            rom += "DCCC";
            break;
        case 9:
            rom += "CM";
            break;
        default:
            rom += "";
            break;
    }

    switch (tens) {
        case 1:
            rom += "X";
            break;
        case 2:
            rom += "XX";
            break;
        case 3:
            rom += "XXX";
            break;
        case 4:
            rom += "XL";
            break;
        case 5:
            rom += "L";
            break;
        case 6:
            rom += "LX";
            break;
        case 7:
            rom += "LXX";
            break;
        case 8:
            rom += "LXXX";
            break;
        case 9:
            rom += "XC";
            break;
        default: {
            rom += "";
            break;
        }
    }

    switch (units) {
        case 1:
            rom += "I";
            break;
        case 2:
            rom += "II";
            break;
        case 3:
            rom += "III";
            break;
        case 4:
            rom += "IV";
            break;
        case 5:
            rom += "V";
            break;
        case 6:
            rom += "VI";
            break;
        case 7:
            rom += "VII";
            break;
        case 8:
            rom += "VIII";
            break;
        case 9:
            rom += "IX";
            break;
        default: {
            rom += "";
            break;
        }
    }

    return rom;
}

void vectorOperations(const float vector[], int positions) {
    float average = 0;
    float aux = 0;
    float contMax = 0;
    float sum = 0;
    int cont = 0;

    while (cont < positions) {
        if (vector[cont] < -10) {
            sum += vector[cont];
        } else if (vector[cont] > 100) {
            aux += vector[cont];
            contMax++;
        }
        cont++;
    }

    printCustomPoster("La suma de los numeros menores a -10 es: ");
    printNumber(sum);
    printTab();

    printCustomPoster("El promedio de los numeros mayores a 100 es: ");
    average = (float) aux / contMax;
    printNumber(average);

}

int multiplicationBySums(int number1, int number2) {
    int product = 0;
    int cont = 0;
    while (cont < number2) {
        product += number1;
        cont++;
    }
    return product;
}

double factorial(int number) {
    double factorial = 1;
    int cont = 1;
    while (cont < number + 1) {
        factorial *= cont;
        cont++;
    }
    return factorial;
}

double averageOfInputNumbers() {
    int cont = 0;
    int input = 1;
    double acum = 0;
    bool exit = false;
    double average = 0;

    while (!exit) {
        input = inputValue("Ingrese un numero: ");
        if (input != 0) {
            acum += input;
            cont++;
        } else {
            exit = !exit;
        }
    }

    average = acum / cont;

    return average;
}

void operationWithEmployees() {
    bool exit = false;
    double input = 0;

    int minor900 = 0;
    int equalOrMayor900 = 0;
    int equalOrMayor1200 = 0;
    int mayor2000 = 0;

    while (!exit) {
        input = inputValue("Ingrese el sueldo de un empleado: ");
        if (input != 0) {

            if (input < 900) {
                minor900++;
            } else if (input >= 900 && input < 1200) {
                equalOrMayor900++;
            } else if (input >= 1200 && input < 2000) {
                equalOrMayor1200++;
            } else {
                mayor2000++;
            }

        } else {
            exit = !exit;
        }
    }

    printCustomPosterWithEndLine("Las estadisticas de los empleados son: ");

    printNumber(minor900);
    printCustomPoster(" empleado(s) cobra(n) menos de $900");
    printTab();

    printNumber(equalOrMayor900);
    printCustomPoster(" empleado(s) cobra(n) $900 o mas, pero menos de $1200");
    printEndLine();

    printNumber(equalOrMayor1200);
    printCustomPoster(" empleado(s) cobra(n) $1200 o mas, pero menos de $2000");
    printTab();

    printNumber(mayor2000);
    printCustomPoster(" empleado(s) cobra(n) $2000 o mas");
    printEndLine();
}

void operationWithAges() {
    int input = 0;

    int cont18 = 0;
    int cont19 = 0;
    int cont20 = 0;
    int cont21 = 0;
    int cont22 = 0;

    bool exit = false;

    while (!exit) {
        input = inputValue("Ingrese una edad: ");
        if (input != 0) {
            if (input < 18 or input > 22) {
                printCustomPosterWithEndLine("Ingrese una edad entre 18 y 22 ");
            } else {
                if (input == 18) {
                    cont18++;
                } else if (input == 19) {
                    cont19++;
                } else if (input == 20) {
                    cont20++;
                } else if (input == 21) {
                    cont21++;
                } else {
                    cont22++;
                }
            }
        } else {
            exit = !exit;
        }
    }

    printCustomPosterWithEndLine("En numero de veces que aparecio cada edad es: ");

    printCustomPoster("La edad 18: ");
    printNumber(cont18);
    printCustomPosterWithEndLine(" veces");

    printCustomPoster("La edad 19: ");
    printNumber(cont19);
    printCustomPosterWithEndLine(" veces");

    printCustomPoster("La edad 20: ");
    printNumber(cont20);
    printCustomPosterWithEndLine(" veces");

    printCustomPoster("La edad 21: ");
    printNumber(cont21);
    printCustomPosterWithEndLine(" veces");

    printCustomPoster("La edad 22: ");
    printNumber(cont22);
    printCustomPosterWithEndLine(" veces");

}

void infiniteFactorial() {
    int input = 0;
    bool exit = false;
    while (!exit) {
        input = inputValue("Ingrese un numero para saber su factorial: ");
        if (input == 0) {
            exit = !exit;
        } else {
            if (input < 0) {
                printCustomPosterWithEndLine("Ingrese un numero positivo");
            } else {
                printCustomPoster("El factorial del numero ingresado es: ");
                printNumberWithEndl(factorial(input));
            }
        }

    }
}

void inputLofTriangles() {
    int l1;
    int l2;
    int l3;

    int contEq = 0;
    int contIs = 0;
    int contEsc = 0;

    bool exit = false;

    while (!exit) {

        l1 = inputValue("1er lado: ");
        l2 = inputValue("2do lado: ");
        l3 = inputValue("3er lado: ");
        printEndLine();

        if (l1 <= 0 or l2 <= 0 or l3 <= 0) {
            exit = !exit;
        } else {
            if (l1 == l2 and l2 == l3) {
                contEq++;
            } else if ((l1 == l2 and l1 != l3) or (l2 == l3 and l2 != l1) or (l1 == l3 and l1 != l2)) {
                contEsc++;
            } else /*if(l1!=l2 and l2!=l3)*/{
                contIs++;
            }
        }
    }

    printEndLine();
    printCustomPosterWithEndLine("Cantidaddes de cada categoria cada triangulo: ");

    printNumber(contEq);
    printCustomPosterWithEndLine(" triangulos equilateros");

    printNumber(contEsc);
    printCustomPosterWithEndLine(" triangulos escalenos");

    printNumber(contIs);
    printCustomPosterWithEndLine(" triangulos isosceles");

}

void inputAlumnsAsignatures(Alumn alumns[], int positions) {
    int cont = 0;
    while (cont < positions) {
        alumns[cont].name = inputString("Ingrese el nombre del alumno: ");
        alumns[cont].noteAMI = inputValue("Nota de Analisis matematico: ");
        alumns[cont].noteArc = inputValue("Nota de Arquitectura de computadoras: ");
        alumns[cont].noteChe = inputValue("Nota de Quimica: ");
        alumns[cont].noteAlg = inputValue("Nota de Algebra: ");
        alumns[cont].noteAlgoritms = inputValue("Nota de Algoritmos: ");
        alumns[cont].noteSyo = inputValue("Nota de Sistemas y organizaciones: ");
        alumns[cont].noteDis = inputValue("Nota de Matematica discreta: ");
        printEndLine();

        cont++;
    }
}

void calculateAverageOfAllAsignatures(Alumn alumns[], int positions) {
    int cont = 0;
    //Esta variable sirve como auxiliar
    Alumn alumn;
    while (cont < positions) {
        alumn = alumns[cont];
        alumns[cont].average =
                (alumn.noteDis + alumn.noteSyo + alumn.noteAlgoritms + alumn.noteAlg + alumn.noteArc + alumn.noteChe +
                 alumn.noteAMI) / 7;
        printCustomPoster("El promedio del alumno ");
        printCustomPoster(alumn.name);
        printCustomPoster(" es: ");
        printNumberWithEndl(alumns[cont].average);

        cont++;
    }
}

void inputBankAccountData() {
    bool exit = false;
    int contDeu = 0;
    int contAcre = 0;

    int accountId;
    string inputName;
    int inputBalance;

    while (!exit) {
        inputName = inputString("Ingrese el nombre del cliente de la cuenta: ");
        inputBalance = inputValue("Ingrese el saldo de la cuenta: ");
        accountId = inputValue("Ingrese el numero de su cuenta: ");
        if (accountId > 0) {
            printCustomPoster("La cuenta con id: ");
            printNumber(accountId);
            printCustomPoster(" del cliente: ");
            printCustomPoster(inputName);
            printCustomPoster(" tiene estado de ");

            if (inputBalance < 0) {
                contDeu++;
                printCustomPosterWithEndLine("deudor");
            } else {
                contAcre++;
                printCustomPosterWithEndLine("acreedor");
            }
            printEndLine();

        } else {
            exit = !exit;
        }

    }
    printCustomPosterWithEndLine("Cantidades:");
    printCustomPoster("Acreedores: ");
    printNumber(contAcre);
    printTab();
    printCustomPoster("Deudores: ");
    printNumber(contDeu);

}

float getMinorElement(const float vector[], int positions) {
    float minor = vector[0];
    int cont = 1;
    while (cont < positions) {

        if (vector[cont] < minor)
            minor = vector[cont];

        cont++;
    }

    return minor;
}

float getMayorElement(const float vector[], int positions) {
    float mayor = vector[0];
    int cont = 1;

    while (cont < positions) {
        if (mayor < vector[cont]) {
            mayor = vector[cont];
        }
        cont++;
    }
    return mayor;
};

int getMayorPosition(const float vector[], int positions) {
    float mayor = vector[0];
    int mayorPosition = 0;
    int cont = 0;
    while (cont < positions) {

        if (vector[cont] > mayor) {
            mayor = vector[cont];
            mayorPosition = cont;
        }
        cont++;
    }

    return mayorPosition + 1;
}

int getNumberOfRepetitions(const float vector[], int positions, float number) {
    int repetitions = 0;
    int cont = 0;
    while (cont < positions) {
        if (vector[cont] == number)
            repetitions++;
        cont++;
    }
    return repetitions;
}

float getMayorElementAndExcludeValue(const float vector[], int positions, float number) {
    float mayor = -1000;
    int cont = 0;
    while (cont < positions) {
        if ((vector[cont] > mayor) and (vector[cont] != number))
            mayor = vector[cont];

        cont++;
    }
    return mayor;
}

void inputUndefinedQuantityValues() {
    float input;
    float max = -1.17549e+38;
    float min = 1.17549e+38;
    int cont = 0;
    float acum = 0;
    float average;

    bool exit = false;

    while (!exit) {
        input = (float) inputValue("Ingrese un valor: ");
        if (input == 0.0) {
            exit = !exit;
        } else {
            if ((input < 0) and (input > max))
                max = input;

            if ((input > 0) and (input < min))
                min = input;

            acum += input;
            cont++;
        }
    }
    printCustomPoster("El numero mayor negativo: ");
    printNumberWithEndl(max);

    printCustomPoster("El numero menor positivo es: ");
    printNumberWithEndl(min);

    printCustomPoster("El promedio de los numeros ingresados es: ");
    average = acum / (float) cont;
    printNumberWithEndl(average);

}

Date getMayorDate(Date date1, Date date2) {
    //Date present = getLocalTime();
    Date mayor = {};
    if (date1.year == date2.year) {
        if (date1.month == date2.month) {
            if (date1.day == date2.day) {
                mayor.year = NULL;
                mayor.month = NULL;
                mayor.day = NULL;
            } else if (date2.day > date1.day) {
                mayor = date2;
            } else {
                mayor = date1;
            }
        } else if (date2.month > date1.month) {
            mayor = date2;
        } else {
            mayor = date1;
        }
    } else if (date2.year > date1.year) {
        mayor = date2;
    } else {
        mayor = date1;
    }
    return mayor;
}

Date getMinorDate(Date date1, Date date2) {
    //Date present = getLocalTime();
    Date minor = {};
    if (date1.year == date2.year) {
        if (date1.month == date2.month) {
            if (date1.day == date2.day) {
                minor.year = NULL;
                minor.month = NULL;
                minor.day = NULL;
            } else if (date1.day < date2.day) {
                minor = date1;
            } else {
                minor = date2;
            }
        } else if (date1.month < date2.month) {
            minor = date1;
        } else {
            minor = date2;
        }
    } else if (date1.year < date2.year) {
        minor = date1;
    } else {
        minor = date2;
    }
    return minor;
}

bool isEqualDate(Date date1, Date date2) {
    bool equal = false;
    if ((date1.year == date2.year) && (date1.month == date2.month) && (date1.day == date2.day))
        equal = !equal;
    return equal;
}

void inputPersonData() {
    Person oldestPerson;
    Person youngestPerson;

    /*
    oldestPerson.dateOfBirth.year=0;
    oldestPerson.dateOfBirth.day=0;
    oldestPerson.dateOfBirth.month=0;
    */
    oldestPerson.dateOfBirth = getLocalTime();
    //youngestPerson.dateOfBirth=getLocalTime();

    youngestPerson.dateOfBirth.year = 0;
    youngestPerson.dateOfBirth.month = 0;
    youngestPerson.dateOfBirth.day = 0;

    string name;
    Date date{};

    bool exit = false;
    while (!exit) {
        name = inputString("Ingrese el nombre de la persona: ");
        printCustomPosterWithEndLine("Ingrese la fecha de nacimiento: ");
        date.year = inputValue("Anio: ");
        date.month = inputValue("Mes: ");
        date.day = inputValue("Dia: ");

        if (name == "FIN") {
            exit = !exit;
        } else {

            //Comparamos segun quien tiene la fecha de nacimiento mas chica y quien la mas grande

            if (isEqualDate(date, getMayorDate(date, youngestPerson.dateOfBirth))) {
                youngestPerson.dateOfBirth = date;
                youngestPerson.name = name;
            }

            if (isEqualDate(date, getMinorDate(date, oldestPerson.dateOfBirth))) {
                oldestPerson.dateOfBirth = date;
                oldestPerson.name = name;
            }


            //
        }
    }

    printCustomPoster("La persona mas joven es : ");
    printCustomPoster(youngestPerson.name);
    printTab();
    //printCustomPoster(" con: ");
    //printNumberWithEndl(youngestPerson.age);
    printCustomPoster(" y la persona mas vieja es : ");
    printCustomPoster(oldestPerson.name);
    printTab();
    //printCustomPoster(" con: ");
    //printNumberWithEndl(oldestPerson.age);
}

int shot() {
    return (rand() % 6) + 1;
}

void shotStadistics() {
    srand(time(NULL));
    char response = '0';

    float scoreAverage = 0;
    float score = 0;
    float aux = 0;
    float maxScore = 0;
    int scoreAcum = 0;
    int cont = 0;

    float shots[5];

    bool exit = false;


    while (!exit) {

        shots[1] = (float) shot();
        shots[2] = (float) shot();
        shots[3] = (float) shot();
        shots[4] = (float) shot();
        shots[0] = (float) shot();

        aux = getMayorElementAndExcludeValue(shots, 5, 0);
        score = aux + getMayorElementAndExcludeValue(shots, 5, aux);
        scoreAcum += (int) score;
        if (score > maxScore)
            maxScore = score;

        printCustomPoster("Su puntaje: ");
        printNumberWithEndl(score);
        clearScreen();
        response = continueScreen();
        if ((response == 'N') || (response == 'n'))
            exit = !exit;
        cont++;
    }

    printCustomPosterWithEndLine("El puntaje maximo es: ");
    printNumberWithEndl(maxScore);
    scoreAverage = (float) scoreAcum / (float) cont;
    printCustomPosterWithEndLine("El promedio de puntajes es: ");
    printNumberWithEndl(scoreAverage);
}

