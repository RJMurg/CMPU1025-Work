/*
	Messes around with declaring Register variables in C.

	Made by: Ruán Murgatroyd
	Created: 13/02/23
	OS: Windows 10
	IDE: Visual Studio Code
	Compiler: GCC
*/

#include <stdio.h>


int main(){

	register int i = 0;

	int *a = &i;

	printf("%d", a);
	
	return 0;
} // end main