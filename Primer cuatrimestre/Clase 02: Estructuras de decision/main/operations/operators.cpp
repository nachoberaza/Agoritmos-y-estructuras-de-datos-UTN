#include "LocalDate.cpp"

struct Operation
{
	float result;
	bool operationSelected;
};

float whichIsSmaller(float value1, float value2)
{
	float smaller = NULL;
	if (value1 == value2)
	{
		printCustomPosterWithEndLine("Los valores ingresados son iguales");
	}
	else if (value1 > value2)
	{
		smaller = value2;
	}
	else
	{
		smaller = value1;
	}
	return smaller;
}

bool isPar(int number)
{
	bool par = false;
	if ((number % 2) == 0)
		par = true;
	return par;
}

float sum(float num1, float num2)
{
	float sum = num1 + num2;
	return sum;
}

float subtraction(float num1, float num2)
{
	float subtraction = num1 - num2;
	return subtraction;
}

Operation multiOperation(float number1, float number2)
{
	Operation result;
	if (whichIsSmaller(number1, number2) == NULL)
	{
		result.result = NULL;
	}
	else if (whichIsSmaller(number1, number2) == number1)
	{
		result.result = sum(number1, number2);
		result.operationSelected = true;
	}
	else
	{
		result.result = subtraction(number1, number2);
		result.operationSelected = false;
	}

	return result;
}

float calculateArea(float num1, float num2)
{
	float area = (num1 * num2) / 2;
	return area;
}

float calculateHighestValue(float numbers[], int positions)
{
	float highest = NULL;
	int cont = 0;
	while (cont < positions)
	{
		if (numbers[cont] > highest)
		{
			highest = numbers[cont];
		}
		cont++;
	}
	return highest;
}

void calculateMoreRecentDate(Date date1, Date date2)
{
	Date present = getLocalTime();
	if (date1.year == date2.year)
	{
		if (date1.month == date2.month)
		{
			printCustomPosterWithEndLine("Estan en el mismo Mes");
			if (date1.day == date2.day)
			{
				printCustomPosterWithEndLine("Las fechas son iguales");
			}
			else if (present.day - date1.day > present.day - date2.day)
			{
				printCustomPosterWithEndLine("La segunda fecha es mas reciente");
			}
			else
			{
				printCustomPosterWithEndLine("La primer fecha es mas reciente");
			}
		}
		else if (present.month - date1.month > present.month - date2.month)
		{
			printCustomPosterWithEndLine("La segunda fecha es mas reciente ");
		}
		else
		{
			printCustomPosterWithEndLine("La primer fecha es mas reciente");
		}
	}
	else if (present.year - date2.year > present.year - date1.year)
	{
		printCustomPosterWithEndLine("La primer fecha es mas reciente");
	}
	else
	{
		printCustomPosterWithEndLine("La segunda fecha es mas reciente ");
	}
}

bool verifyTriangle(float l1,float l2,float l3){
    bool result=false;
    if((l1+l2)>l3)
        result=true;
    return result;
}

int getTriangleCategory(float l1,float l2,float l3){
    int category=0;

    if(l1==l2 && l1==l3){
        category=1;
    }else if((l1==l2 && l1!=l3)||(l2==l3 && l1!=l2)){
        category=2;
    }else{
        category=3;
    }
    return category;
}

bool capicua(int number){
    bool result=false;
    int acumulador;
    int i=0;
    string inverseValue;
    int originalValue=number;

    while(i<5){
        acumulador=number%10;
        inverseValue+= to_string(acumulador);
        number=number/10;
        i++;
    }
    if(to_string(originalValue)==inverseValue){
        result=true;
    }
    return result;
}

int calculateDays(int year,int month){
    int days;

    //Si el año es un multiplo de 4 significa que es biciesto
    if((year%4)==0 && month==02){
        days=29;
    }else{
        switch (month) {
            case 1:
                days=31;
                break;
            case 2:
                days=28;
                break;
            case 3:
                days=31;
                break;
            case 4:
                days=30;
                break;
            case 5:
                days=31;
                break;
            case 6:
                days=30;
                break;
            case 7:
                days=31;
                break;
            case 8:
                days=31;
                break;
            case 9:
                days=30;
                break;
            case 10:
                days=31;
                break;
            case 11:
                days=30;
                break;
            case 12:
                days=31;
                break;
            default:
                days=0;
                break;
        }
    }

    return days;
}
