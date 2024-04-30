#include <iostream>
using namespace std;

//inserir pares ordenados e receber se todos os pares sao da forma (n, n+1)

main () {
	int i, n, a, b;
	bool n_sucessor;
	
	cout << "informe o numero total de pares ordenados da relacao: ";
	cin >> n;
	
	i = 0;
	
	while (i < n) {
		i++;
		
		cout << "\ninforme o primeiro elemento do par: ";
		cin >> a;
		cout << "informe o segundo elemento do par: ";
		cin >> b;
		
		if (b != (a + 1)) n_sucessor = true;
	}
	
	cout << "\na relacao ";
	
	if (n_sucessor) cout << "nao ";
	
	cout << "atende ao criterio de que todos os elementos sao da forma (n, n+1)" << endl;
}
