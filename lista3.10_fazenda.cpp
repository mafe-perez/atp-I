#include <iostream>
using namespace std;

main () {
	int i, qtd_itens, qtd_org, qtd_c_usual;
	float peso, preco_kg, preco_caro, soma_peso, soma_cenoura, preco_barato, soma_h; 
	char fornecedor, organico, produto, prod_barato;
	
	cout << "informe quantos itens pretende processar: ";
	cin >> qtd_itens;
	
	i = 0;
	soma_peso = 0;
	preco_caro = 0;
	qtd_org = 0;
	soma_cenoura = 0;
	qtd_c_usual = 0;
	preco_barato = 1000000;
	soma_h = 0;
	
	while (i < qtd_itens) {
		i++;
		
		cout << "\nfornecedores: H - horta magica // M - momento da colheita // N - natureza ecologica" << endl;
		cout << "informe o codigo do fornecedor: ";
		cin >> fornecedor;
		
		cout << "\ntipo de produto: O - organico // U - usual (nao organico)" << endl;
		cout << "informe se o produto eh organico ou nao: ";
		cin >> organico;
		
		cout << "\nprodutos: A - abobrinha // B - brocolis // C - cenoura" << endl;
		cout << "informe o produto: ";
		cin >> produto;
		
		cout << "informe a quantidade adquirida (em gramas): ";
		cin >> peso;
		
		cout << "informe o preco por quilo (em reais): ";
		cin >> preco_kg;
		
		soma_peso = soma_peso + peso;
		
		if (preco_kg > preco_caro) preco_caro = preco_kg;
		
		if (organico == 'O') qtd_org++;
		
		if ((produto == 'C') && (organico == 'U')) {
			soma_cenoura = soma_cenoura + preco_kg;
			qtd_c_usual++;
		}
		
		if ((organico == 'U') && (preco_kg < preco_barato)) {
			preco_barato = preco_kg;
			prod_barato = produto;
		}
		
		if (fornecedor == 'H') {
			soma_h = soma_h + ((preco_kg * peso) / 1000);
		}
	}
	
	cout << "-------------------------------------------------------------------------------------------" << endl;
	cout << "a) o peso total dos produtos adquiridos eh " << soma_peso << " gramas" << endl;
	cout << "b) o preco do produto mais caro eh " << preco_caro << " reais" << endl;
	cout << "c) a quantidade total de produtos organicos eh " << qtd_org << endl;
	cout << "d) a media do preco por quilo da cenoura nao organica eh " << soma_cenoura / qtd_c_usual << " reais" << endl;
	cout << "e) o produto usual de menor preco eh ";
	
	switch (prod_barato) {
		case 'A':
		  cout << "a abobrinha" << endl;
		  break;
		case 'B':
			cout << "o brocolis" << endl;
			break;
		case 'C':
			cout << "a cenoura" << endl;
			break;
	}
	
	cout << "f) o total gasto na horta magica foi " << soma_h << " reais" << endl;
}
