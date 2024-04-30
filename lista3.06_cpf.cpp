#include <iostream>
using namespace std;

main () {
	int n, resto, soma1, soma3, val1, val2, dec_digito, decprim_digito;
	
	soma1 = 0;
	soma3 = 0;
	
    for(int i = 0, multiplicador1 = 10, multiplicador2 = 11; i < 9; i++, multiplicador1--, multiplicador2--) {
		cout << "informe o " << i + 1 << "o digito: ";
		cin >> n;
		
		soma1 = n * multiplicador1 + soma1;
		soma3 = n * multiplicador2 + soma3;
	}
	
	cout << "informe o 10o digito: ";
	cin >> dec_digito;
	
	cout << "informe o 11o digito: ";
	cin >> decprim_digito;
	
	cout << "\n-------------------------------\n";
	
	cout << "\na soma do passo 1 eh: " << soma1;
	
	resto = soma1 % 11;
	if (resto < 2) {
		val1 = 0;
	} else {
		val1 = 11 - resto;
	}
	
	cout << "\no primeiro digito de validacao eh " << val1;
	
	soma3 = val1 * 2 + soma3; //o for so faz a soma para os 9 primeiros digitos (i<9)
	
	cout << "\na soma do passo 3 eh: " << soma3;
	
	resto = soma3 % 11;
	if (resto < 2) {
		val2 = 0;
	} else {
		val2 = 11 - resto;
	}
	
	cout << "\no segundo digito de validacao eh " << val2;
	
	if (dec_digito == val1 && decprim_digito == val2) {
		cout << "\no cpf eh valido";
	} else {
		cout << "\no cpf nao eh valido";
	}
}
