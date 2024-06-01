#include <iostream>
using namespace std;

//inserir um numero inteiro e calcular a aproximacao pra cima da raiz quadrada inteira desse numero
//dica: todo quadrado perfeito eh a soma de uma sequencia de impares (1+3+5+...+(2k+1))

main () {
	int i, n, impar, soma_impar;
	
	cout << "informe um numero inteiro positivo: ";
	cin >> n;
	
	i = 0;
	impar = 1;
	soma_impar = 0;
	
	if (n < 0) {
		cout << "o valor informado eh invalido";
	}
	
	while (soma_impar < n) {
		soma_impar = soma_impar + impar;
		impar = impar + 2;
		i++;
	}
	
	if (n > 0) {
		cout << "a raiz quadrada inteira (aproximada para cima) de " << n << " eh " << i;
	}
}
