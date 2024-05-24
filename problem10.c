
/*
Author: PRABHATH KATTUPALLI

Simple Calculator:
Write a program that takes two numbers and an operator (+, -, *, /) as input and uses if statements to perform the corresponding arithmetic operation. Print the result.

DOC: 23rd May 2024
*/


#include<stdio.h>
int
main ()
{
  int a, b, c;
  printf ("Enter two numbers: ");
  scanf ("%d%d", &a, &b);
  printf ("Select an operation:\n1. + \n");
  printf ("2. - \n");
  printf ("3. * \n");
  printf ("4. / \n");
  scanf ("%d", &c);
  if (c == 1)
	{
	  printf ("Sum : %d", a + b);
	}
  if (c == 2)
	{
	  printf ("Difference : %d", a - b);
	}
  if (c == 3)
	{
	  printf ("Multiplication : %d", a * b);
	}
  if (c == 4)
	{
	  printf ("Difference : %d", a / b);
	}
  return 0;
}
