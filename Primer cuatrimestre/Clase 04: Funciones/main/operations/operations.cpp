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
    return 0;
}
/* ---------------- ********************************************************** ---------------- */
