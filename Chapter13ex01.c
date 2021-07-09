/********************************************************
 * Ex01 -- Change to zeros. *
 * Not an especially earth-shattering program. *
 * *
 * Author: Israel Prado. *
 * *
 * Purpose: To know how to use punters in C. *
 * *
 * Usage: *
 * Put the values in the central programation and then you will show the values  *
 ********************************************************/
#include <stdio.h> //I defined the library
#define arr 5 //I define the number of the values in the array
int main()
{
	int val[arr] = {2, 4, 5, 6, 8}; //genero e ingreso los valores dentro de un array
	int *xd; //variable para acceder a la memoria donde se ubican los datos del array
	for (xd = &val[0]; xd <= &val[arr]; ++xd) { //xd is inicialited in the array value 0, it finish when it reaches the number estableced in "arr"
		*xd = 0; //the values that we have, it will modifie by 0 in all the memory side
	}
;
	for (int i = 1; i <= arr; ++i) //I show all the numbers 0, counting all the numbers that we have {
		printf("data[%d] = %d\n", i, val[i]); //I show the numbers and I count that
	return 0;
}
