#include <math.h>
#include "stdio.h"

#include "LocalDate.cpp"

struct Circle{
    float diameter;
    float area;
    float perimeter;
};

struct Rectangle{
    float perimeter;
    float area;
};

struct Course{
    float approvedPercentage;
    float disapprovedPercentage;
};

struct ForeignCoin{
    float pesos;
    float dolar;
    float eur;
};

struct Industry{
    double ensambleAreaBudget;
    double paintAreaBudget;
    double electricAreaBudget;
};


int suma(int num1, int num2)
{
    int suma = num1 + num2;
    return suma;
}
int resta(int num1, int num2)
{
    int resta = num2 - num1;
    return resta;
}

int multiplicar(int num1, int num2)
{
    int multiplicacion = num1 * num2;
    return multiplicacion;
}


double sumDoubleCube(double num1, double num2)
{
    double sum;

    sum = (2 * num1) + (pow(num2, 3));

    return sum;
}

double averageCube(double num1, double num2)
{
    double average;

    average = (pow(num1, 3) + pow(num2, 3)) / 2;

    return average;
}

double sumFigures(int number)
{

    double suma = 0;
    while (number != 0)
    {
        suma += number % 10;
        number = number / 10;
    }
    return suma;
}

Date calculateAge(int day, int month, int year)
{
    Date age;
    int systemYear = getLocalTime().year;
    int systemMonth = getLocalTime().month;
    int systemDay = getLocalTime().day;

    //age.day=systemDay-day;
    //age.month=systemMonth;        //dejo pendiente el calculo de los dias y los meses

    age.year = systemYear - year;

    return age;
}

int examsAverage(int exam1, int exam2, int exam3, int exam4)
{
    int average;

    average = (exam1 + exam2 + exam3 + exam4) / 4;

    return average;
}

Circle circleOperations(int radio)
{
    const float pi = 3.14;
    Circle circle;

    circle.diameter=radio*2;
    circle.perimeter=(2*pi)*radio;
    circle.area=(2*pi)*(radio*radio);

    return circle;
}

Rectangle rectangleOperations(int base,int height){
    Rectangle rectangle;

    rectangle.perimeter=2*(base+height);
    rectangle.area=base*height;

    return rectangle;
}

Course calculatePercentage(int approved,int disapproved,int total){
    Course course;
    course.approvedPercentage=((float)approved/total)*100;
    course.disapprovedPercentage=((float)disapproved/total)*100;
    return course;
}

float pythagorasTheorem(int leg1,int leg2){
    float hypotenuse; // seguir desde aca    
    hypotenuse= (float)sqrt(pow(leg1,2)+pow(leg2,2));

    return hypotenuse;
}

float priceByQuantity(float quantity){
    const float priceByMeter=10.50;
    float price=(float)quantity*priceByMeter;
    return price;
}

ForeignCoin moneyConversor(float quantity){
    ForeignCoin coin;
    const float dolarPrice=115;
    const float euroPrice=128.05;

    coin.pesos=quantity;
    coin.dolar=(float)quantity/dolarPrice;
    coin.eur=(float)quantity/euroPrice;

    return coin;
}

Industry calculateBudget(double budget){
    Industry industry;

    industry.ensambleAreaBudget=((float)budget/37)*100;
    industry.electricAreaBudget=((float)budget/42)*100;
    industry.paintAreaBudget=((float)budget/21)*100;

    return industry;
}

double calculateSandQuantity(double measurements){
    double sandQuantity=(double)measurements*0.5;
    return sandQuantity;
}