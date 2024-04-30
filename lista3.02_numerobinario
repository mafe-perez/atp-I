#include <iostream>
#include <math.h>
using namespace std;

main () {
	int soma;
	
	cout << "informe um numero binario de 8 algarismos, um por vez" << endl;
	
	soma = 0;
	
	for (int i = 0, pot, n; i < 8; i++) {
		cout << "informe o " << i + 1 << "o algarismo: ";
		cin >> n;
		
		pot = 7 - i;
		
		soma = soma + n * pow (2, pot);
	}
	
	cout << "\no numero binario informado corresponde ao numero " << soma << " em base decimal";
}
