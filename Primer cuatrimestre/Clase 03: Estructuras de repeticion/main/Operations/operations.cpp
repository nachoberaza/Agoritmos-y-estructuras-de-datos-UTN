#include "../input-output functions/input-output.cpp"
#include <iostream>

using namespace std;

struct Alumn {
    string name;
    float note1;
    float note2;
    float average;
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
    string rom = "";

    int units, tens, cents, thousands;

    units = number % 10;
    number /= 10;
    tens = number % 10;
    number /= 10;
    cents = number % 10;
    number /= 10;
    thousands = number % 10;
    number /= 10;


    switch( thousands )
    {
        case 1: rom+=  "M"; break;
        case 2: rom+=  "MM"; break;
        case 3: rom+=  "MMM"; break;
        default: rom+=""; break;
    }

    switch( cents )
    {
        case 1: rom+=  "C"; break;
        case 2: rom+=  "CC"; break;
        case 3: rom+=  "CCC"; break;
        case 4: rom+=  "CD"; break;
        case 5: rom+=  "D"; break;
        case 6: rom+=  "DC"; break;
        case 7: rom+=  "DCC"; break;
        case 8: rom+=  "DCCC"; break;
        case 9: rom+=  "CM"; break;
        default: rom+=""; break;
    }

    switch (tens) {
        case 1: rom += "X"; break;
        case 2: rom += "XX"; break;
        case 3: rom +="XXX"; break;
        case 4: rom += "XL"; break;
        case 5: rom += "L"; break;
        case 6: rom += "LX"; break;
        case 7: rom += "LXX"; break;
        case 8: rom += "LXXX"; break;
        case 9: rom += "XC"; break;
        default:{
            rom+="";
            break;
        }
    }

    switch (units) {
        case 1: rom +="I"; break;
        case 2: rom += "II"; break;
        case 3: rom += "III"; break;
        case 4: rom += "IV"; break;
        case 5: rom += "V"; break;
        case 6: rom +="VI"; break;
        case 7: rom += "VII"; break;
        case 8: rom += "VIII"; break;
        case 9: rom += "IX"; break;
        default:{
            rom+="";
            break;
        }
    }

    return rom;
}
void vectorOperations(const float vector[],int positions){
    float average=0;
    float aux=0;
    float contMax=0;
    float sum=0;
    int cont=0;

    while(cont<positions){
        if(vector[cont]< -10){
            sum+=vector[cont];
        }else if(vector[cont]>100){
            aux+=vector[cont];
            contMax++;
        }
        cont++;
    }

    printCustomPoster("La suma de los numeros menores a -10 es: ");
    printNumber(sum);
    printTab();

    printCustomPoster("El promedio de los numeros mayores a 100 es: ");
    average=(float)aux/contMax;
    printNumber(average);

}