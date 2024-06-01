#include <iostream>
using namespace std;

main () {
	int a, a1, b, b1, soma;
	
	cout << "informe os numeros que serao multiplicados: ";
	cin >> a >> b;
	
	soma = 0;
	a1 = a;
	b1 = b;
	
	while (a1 > 0) {
		
		if (a1 % 2 != 0) {
			soma = soma + b1;
		}
		
		a1 = a1 / 2;
		b1 = b1 + b1;
	}
	
	cout << "o produto de " << a << " e " << b << " vale " << soma;
}
