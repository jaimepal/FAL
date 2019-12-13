/*

NUMERO DE GRUPO: 

NOMBRE Y APELLIDOS DE LOS AUTORES:


*/


#include <iostream>

using namespace std;

const int MAXN = 10;


/*

(1) En caso de utilizar una generalización, indicar su parámetros, y explicar para que
    sirven cada uno de ellos

(2) ¿Cómo son las soluciones parciales de este problema?

(3) ¿Cuándo una solución parcial es viable?

(4) ¿Cuándo una solución parcial es una solución final al problema?

(5) Dada una solución parcial, ¿cómo se generan las siguientes soluciones
    parciales viables?
	
(6) Análisis de casos

     (6.1) Caso(s) base


	 (6.2) Caso(s) recursivos

(7) En caso de utilizar una generalización, explicar cómo se define el algoritmo final
    a partir de la misma, por inmersión. 
	
	
	
*/

int modulo(int coleccion[], int n, int k) {
	/* A IMPLEMENTAR */





}

	
void lee_datos(int & n, int coleccion[], int& k) {
	cin >> n;
	if (n != 0) {
		for (int i = 0; i < n; i++) {
            cin >> coleccion[i];
		}
		cin >> k;
	}
}

bool ejecuta_caso() {
    int coleccion[MAXN];
	int n;
	int k;
	lee_datos(n,coleccion,k);
	if (n != 0) {
	  cout << modulo(coleccion,n,k) << endl;
      return true;	  
	}
	else {
	  return false;	
	}
}

int main() {
	while (ejecuta_caso());
}

