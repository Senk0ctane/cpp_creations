#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

using namespace std;

int main() {	
	setlocale(LC_ALL, "");

	int numero;
	
	srand(time(NULL));
	
	numero = rand() %501;
	
	printf("El número aleatorio es: %d\n", numero,"\n");
		
	return 0;
}
