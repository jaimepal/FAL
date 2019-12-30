/*

NUMERO DE GRUPO:

NOMBRRE Y APELLIDOS DE LOS AUTORES:


*/

#include <iostream>
using namespace std;


typedef unsigned long long t_num;


/*
(1) En caso de utilizar una generalizacion,
determinación de los parámetros de la generalización.
Determina los parámetros de la generalización. Para cada parámetro
indica: (i) su tipo; (ii) su nombre; (iii) si es un parámetro
de entrada, de salida, o de entrada / salida; (iv) su propósito,
descrito de manera clara y concisa.


(2) Análisis de casos:

(2.1) Casos base


(2.2) Casos recursivos

(3) En caso de utilizar una generalizacion, definición por inmersión
del algoritmo. Describe de manera clara y concisa cómo se lleva a
cabo el algoritmo, en qué punto o puntos se invoca a la generalización,
con qué parámetros reales, y cómo se genera el resultado
a partir de los devueltos por la generalización.



*/

int cuantosAlternadosMenores(t_num n) {
	
	




}

t_num num_alternados(t_num n) {
	// PUNTO ENTRADA AL ALGORITMO

	if (n <= 9) {
		return n;

	}
	else {

		cuantosAlternadosMenores(n);


	}


}

/*
Determina justificadamente la complejidad del algoritmo

(1) Determinación de las ecuaciones de recurrencia para la generalización

(2) Resolución utilizando los patrones vistos en clase

(3) Determinación justificada de la complejidad del algoritmo final.


*/


bool procesa_caso() {
	long long n;
	cin >> n;
	if (n == -1) {
		return false;
	}
	else {
		cout << num_alternados((t_num)n) << endl;
		return true;
	}

}

int main() {
	while (procesa_caso());

}