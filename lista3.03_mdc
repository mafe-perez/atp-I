#include <iostream>
using namespace std;

main () {
	int a, b, a1, b1, mdc;
	
	cout << "informe dois numeros inteiros positivos: ";
	cin >> a >> b;
	
	a1 = a;
	b1 = b;
	
	while (a1 % b1 != 0) {
		mdc = a1 % b1;
		a1 = b1;
		b1 = mdc;
	}
	
	if ((a <= 0) || (b <= 0)) {
		cout << "um dos numeros informados (ou os dois) nao eh valido" << endl;
	} else {
		cout << "o mdc entre " << a << " e " << b << " vale " << mdc;
	}
}
