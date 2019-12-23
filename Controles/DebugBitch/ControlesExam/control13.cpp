/*

NUMERO DE GRUPO:

NOMBRRE Y APELLIDOS DE LOS AUTORES:


*/

#include <iostream>
using namespace std;

typedef unsigned long long t_num;

/*

PRECONDICION DE LA FUNCION:
---Escribe aquí la precondición de la función.


*/
bool es_limpio(unsigned short d, unsigned short alpha, t_num n);


/*
POSTCONDICION DE LA FUNCION:
---Escribe aquí la poscondición de la función. Para refirte
---al valor devuelto por la función, utiliza la pseudo-variable
---'resul'

(1) Definiciones auxiliares (si procede):


(2) Postcondición


*/

/* DISEÑO DEL ALGORITMO:
--- Detalla aquí el proceso seguido para diseñar el algoritmo

PASO 1: Variables


PASO 2: Invariante


PASO 3: Inicio


PASO 4: Continuación y finalización


PASO 5: Bloque del bucle


PASO 6: Terminación.

*/

bool es_limpio(unsigned short d, unsigned short alpha, t_num n) {
	// IMPLEMENTACION DEL ALGORITMO

}

/*
COMPLEJIDAD: Determina razonadamente la
complejidad del algoritmo


*/



bool procesa_caso() {
	int d;
	unsigned short alpha;
	t_num n;
	cin >> d;
	if (d != -1) {
		cin >> alpha >> n;
		if (es_limpio((unsigned short)d, alpha, n)) {
			cout << "SI" << endl;
		}
		else {
			cout << "NO" << endl;
		}
		return true;
	}
	else {
		return false;
	}
}

int main() {
	while (procesa_caso());
}