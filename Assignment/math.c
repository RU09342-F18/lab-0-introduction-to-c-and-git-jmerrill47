/*
* math.c
*
* Created on: Sept 9, 2018
* Last Edited: Sept 10, 2018
* Author: James Merrill
*/

#include "math.h"

int math(int num1, int num2, char Operator)
{
	//create a large if statement that is dependent on the variable Operator

	//if Operator is +, return sum of the numbers
	if (Operator == '+')
		return num1 + num2;

	//if Operator is -, return num1 - num2
	else if (Operator == '-')
		return num1 - num2;

	//if Operator is *, return product of the numbers
	else if (Operator == '*')
		return num1 * num2;

	//if Operator is /, return num1 divided by num2
	else if (Operator == '/')
		return num1 / num2;

	//if Operator is %, return the modulus division of num1 by num2
	else if (Operator == '%')
		return num1 % num2;

	//if Operator is <, return num1 shifted to the left num2 times
	else if (Operator == '<')
		return num1 << num2;

	//if Operator is <, return num1 shifted to the right num2 times   
	else if (Operator == '>')
		return num1 >> num2;
	
	//if Operator is <, return num1 AND num2
	else if (Operator == '&')
		return num1 & num2;
	
	//if Operator is <, return num1 OR num2
	else if (Operator == '|')
		return num1 | num2;

	//if Operator is <, return num1 XOR num2
	else if (Operator == '^')
		return num1 ^ num2;

	//if Operator is <, return the inverse of num1
	else if (Operator == '~')
		return ~num1;
}
