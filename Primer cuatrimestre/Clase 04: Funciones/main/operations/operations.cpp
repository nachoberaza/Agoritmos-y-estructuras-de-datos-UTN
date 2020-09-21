#include "../input-output functions/input-output.cpp"

/* ---------------- Maximo comun divisor ---------------- */
int getGreatestCommonDivisor(int a, int b){

    int divider;
    bool exit=false;

    int greatestCommonDivisor=0;

    while(!exit){
        if( (float)(a%b) == 0 ){
            exit=!exit;
            greatestCommonDivisor=b;
        }else{
            a=b;
            b=(a%b);
        }
    }

    return greatestCommonDivisor;
}
/* ---------------- ******************** ---------------- */

/* ---------------- Factorial ---------------- */
double factorial(int number){
    double factorial = 1;
    int cont = 1;
    while (cont < number + 1) {
        factorial *= cont;
        cont++;
    }
    return factorial;
}
/* ---------------- ********* ---------------- */

/* ---------------- Multiplo o no ---------------- */
bool isMultiple(int a, int b){
    bool isMultiplo=false;

    if((a%b)==0){
        isMultiplo=true;
        printCustomPosterWithEndLine("El 1° numero es multiplo del 2°");
    }else{
        printCustomPosterWithEndLine("El 1° numero NO es multiplo del 2°");
    }
    return isMultiplo;
}
/* ---------------- ************* ---------------- */

/* ---------------- Informar segun una serie de numeros ingresados ---------------- */
int getStaticsByInputNumbers(){
    bool exit=false;

    int input=0;
    int multipleOf5=0;
    int multipleOf3=0;
    int multipleOfBoth=0;

    while(!exit){
        input=inputValue("Ingrese un numero: ");

        if(input==0){
            exit=!exit;
        } else {

            printCustomPoster("Su factorial: ");
            printNumberWithEndl(factorial(input));

            if((input%3)==0){
              multipleOf3++;
            }else if((input%5)==0){
                multipleOf5++;
            }
            if( ((input%3)==0) && ((input%5)==0) ){
                multipleOfBoth++;
            }
            printEndLine();
        }

    }

    printEndLine();
    printCustomPoster("Hay ");
    printNumber(multipleOf3);
    printCustomPosterWithEndLine(" multiplos de 3");

    printCustomPoster("Hay ");
    printNumber(multipleOf5);
    printCustomPosterWithEndLine(" multiplos de 5");

    printCustomPoster("Hay ");
    printNumber(multipleOfBoth);
    printCustomPosterWithEndLine(" multiplos de 3 y 5");

    return 0;
}
/* ---------------- ************* ---------------- */

/* ---------------- Informar el combinatorio ---------------- */
int combinatorial(int a, int b){
    int combinatorial=0;
    double factorialA,factorialB,factorialDiference;

    factorialA=factorial(a);
    factorialB=factorial(b);
    factorialDiference=factorial(a-b);

    combinatorial=factorialA / (factorialB*factorialDiference);

    return combinatorial;
}
/* ---------------- ************* ---------------- */

/* ---------------- Informar el porcentaje que un numero representa sobre otro ---------------- */
float calculatePercentaje(int a,int b){
    float percentaje=0;
    percentaje=((float)a/b)*100;
    return percentaje;
}
/* ---------------- ********************************************************** ---------------- */

/* ---------------- Retornar un codigo en torno a una edad, nombre de la funcion preestablecido ---------------- */
unsigned EdadGrupoEtario(unsigned edad){
    int valor=0;
    if(edad<=14){
        valor=1;
    }else if(edad > 14 && edad<=21){
        valor=2;
    }else if(edad>21 && edad<=28 ){
        valor=3;
    }else if(edad > 28 && edad <= 35){
        valor=4;
    }else if(edad > 35 && edad <=42 ){
        valor=5;
    }else if(edad>42 && edad<=49){
        valor=6;
    }else if(edad > 49 && edad<=63){
        valor=7;
    } else{
        valor=8;
    }
    return valor;
}
/* ---------------- *************************************************************************** ---------------- */

/* ---------------- Devolver la fecha ingresada en formato AAAAMMDD ---------------- */

string toString(int number){
    ostringstream ss;
    ss<<number;
    string s(ss.str());
    return s;
}
string getDateWithIndicatedFormat(int day, int month, int year){
    string date;
    date+=toString(year);
    date+="/";
    if (month<10)
        date+="0";
    date+=toString(month);
    date+="/";
    if (month<10)
        date+="0";
    date+=toString(day);
    return date;
}
/* ---------------- *********************************************** ---------------- */

/* ---------------- Devolver los datos de una fecha que esta en formato AAAAMMDD ---------------- */

string charToString(char c){
    ostringstream ss;
    ss<<c;
    string s(ss.str());
    return s;
}

void getDataByDate(string date){
    string year,month,day,aux;

    year=charToString(date[0])
         +charToString(date[1])
         +charToString(date[2])
         +charToString(date[3]);

    month=charToString(date[5]);
    if(date[6]!='/')
        month+=charToString(date[6]);

    day=charToString(date[8]);
    if(date[9]!=NULL)
        day+=charToString(date[9]);

    printCustomPoster("Anio: ");
    printCustomPosterWithEndLine(year);
    printCustomPoster("Mes: ");
    printCustomPosterWithEndLine(month);
    printCustomPoster("Dia: ");
    printCustomPosterWithEndLine(day);
}
/* ---------------- ************************************************************ ---------------- */
