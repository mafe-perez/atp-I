#include <iostream>
using namespace std;

//imprimir todos os numeros de 1 a 100, para multiplos de 3 imprimir 'fizz' no lugar do numero
//para multiplos de 5 imprimir 'buzz' e para multiplos de 3 e 5 imprimir 'fizzbuzz'

main () {
	int n;
	
	n = 1;
	
	while (n < 101) {
		if ((n%3 == 0) && (n%5 == 0)) {
			cout << "fizzbuzz" << endl;
			n++;
		}
		
		if ((n%3 == 0) && (n%5 != 0))  {
	     cout << "fizz" << endl;
	     n++;
		} else {
			if ((n%5 == 0) && (n%3 != 0)) {
				cout << "buzz" << endl;
				n++;
			} else {
				cout << n << endl;
				n++;
			}
		}
	}
}
