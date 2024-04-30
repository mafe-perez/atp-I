#include <iostream>
using namespace std;

//inserir dois numeros inteiros positivos, subtrair o divisor do dividendo, repetir enquanto o resultado nao for menor que o divisor
//a qtd de repiticoes eh o quociente e o ultimo valor obtido eh o resto

main () {
	int a, b, i;
	
	i = 0;
	
	cout << "informe o dividendo: ";
	cin >> a;
	cout << "informe o divisor: ";
	cin >> b;
	
	while (true) {
		i = i + 1;
		if ((a - b) < b) break;
		a = a - b;
	}
	
	cout << "o quociente eh " << i;
	cout << " e o resto eh " << a - b;
}
