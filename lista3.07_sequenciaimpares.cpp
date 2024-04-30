#include <iostream>
using namespace std;

//inserir uma sequencia de numeros inteiros e receber se eh ascendente ou nao

int main () {
	int i, a, b, n;
	bool nao_asc; // verdadeiro ou falso
	
	cout << "informe o tamanho da sequencia: ";
	cin >> n;
	
	i = 0;
	
	while (i < n) {
		i++;
		cout << "informe o proximo elemento: ";
		cin >> b;
		
		if (b <= a) {
			nao_asc = true; // se o numero for menor ou igual ao anterior, eh não ascendente
		}
		
		a = b;
	}
	
	cout << "\na sequencia";
	
	if (nao_asc) {
		cout << " nao";
	}
	
	cout << " eh ascendente" << endl;
	
}
