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
