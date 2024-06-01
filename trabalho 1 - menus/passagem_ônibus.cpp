// Trabalho 1 de ATP (integral) - Exercício 2 
// Nomes do grupo: Ana Maria Diniz da Costa, Maria Fernanda Perez, Pamela Rosa de Oliveira

#include <iostream>
using namespace std;

int main (){
	setlocale (LC_ALL, "portuguese");
	
	int quant_pass, destino, horario, linha;
	int i = 0;
	int A[5] = {0,0,0,0,0}, B[5] = {0,1,0,0,0}, C[5] = {0,0,1,1,0}, D[5] = {1,0,0,0,1}; // colunas
	char coluna, coluna_sol[2];
	float passagem;

	cout << "Qual o destino da sua viagem? \n";
	cout << "---------------------------------------------------------" << endl;
	cout << " 1: CidadeAoSul -> CidadeAoNorte. \n 2: CidadeAoNorte -> CidadeAoSul. \n";
	cin >> 	destino;
	
	if (destino > 2 || destino < 1){
		cout << "ERRO! Digite um número correspondente a um dos dois destinos disponíveis" << endl;
		cin >> destino;
	}
	
	cout << "---------------------------------------------------------" << endl;
	cout << "Horários disponíveis: \n ";
	cout << " 1: 8:00\n 2: 10:00\n 3: 12:00\n 4: 14:00\n 5: 16:00 \n";
	cout << "Informe qual o horário da sua viagem: \n";
	cin >> horario;
	
	if (horario > 5 || destino < 1){
		cout << "ERRO! Digite um número correspondente a um horário disponível" << endl;
		cin >> horario;
	}
	
	// POSIÇÃO DO SOL (conforme as variáveis destino e horário)
	if(destino == 1){
		switch (horario){
			case 1:
				cout << "A posição do sol nesse horário será: \n";
				cout << "	N	" << endl;
				cout << "O	Ô	*" <<  endl;
				cout << "	S	" << endl;
				coluna_sol[1] = 'C';
				coluna_sol[2] = 'D';
				break;
			case 2:
				cout << "A posicão do sol nesse horário será: \n";
				cout << "	N   *" << endl;
				cout << "O	Ô	L" << endl;
				cout << "	S	" << endl;
				coluna_sol[1] = 'C';
				coluna_sol[2] = 'D';
				break;
			case 3:
				cout << "A posição do sol nesse horário será: \n";
				cout << "	N	" << endl;
				cout << "O	*	L" << endl;
				cout << "	S	" << endl;
				coluna_sol[1] = ' ';
				coluna_sol[2] = ' ';
				break;
			case 4:
				cout << "A posição do sol nesse horário será: \n";
				cout << "   *    N	" << endl;
				cout << "O	Ô	L" << endl;
				cout << "	S	" << endl;
				coluna_sol[1] = 'A';
				coluna_sol[2] = 'B';
				break;
			case 5:
				cout << "A posição do sol nesse horário será: \n";
				cout << "	N	" << endl;
				cout << "*	Ô	L" <<endl;
				cout << "	S	" << endl;
				coluna_sol[1] = 'A';
				coluna_sol[2] = 'B';
				break;
		}
	}
	
	if(destino == 2){
		switch (horario){
			case 1:
				cout << "A posição do sol nesse horário será: \n";
				cout << "	N	" << endl;
				cout << "*	Ô	L" <<  endl;
				cout << "	S	" << endl;
				coluna_sol[1] = 'A';
				coluna_sol[2] = 'B';
				break;
			case 2:
				cout << "A posicão do sol nesse horário será: \n";
				cout << "   *    N	" << endl;
				cout << "O	Ô	L" << endl;
				cout << "	S	" << endl;
				coluna_sol[1] = 'A';
				coluna_sol[2] = 'B';
				break;
			case 3:
				cout << "A posição do sol nesse horário será: \n";
				cout << "	*	" << endl;
				cout << "O	Ô	L" << endl;
				cout << "	S	" << endl;
				coluna_sol[1] = ' ';
				coluna_sol[2] = ' ';
				break;
			case 4:
				cout << "A posição do sol nesse horário será: \n";
				cout << "	N   *" << endl;
				cout << "O	Ô	L" << endl;
				cout << "	S	" << endl;
				coluna_sol[1] = 'C';
				coluna_sol[2] = 'D';
				break;
				
			case 5:
				cout << "A posição do sol nesse horário será: \n";
				cout << "	N	" << endl;
				cout << "O	Ô	*" <<endl;
				cout << "	S	" << endl;
				coluna_sol[1] = 'C';
				coluna_sol[2] = 'D';
				break;
		}
	}
	
	// TODOS ASSENTOS (diponíveis e indisponíveis)
	cout << "Assentos disponíveis (0 - Disponível | 1 - Indisponível):" << endl;
	cout << "    A  B  C  D\n";
	cout << "1   " << A[0] << "  " << B[0] << "  " << C[0] << "  " << D[0] << endl;
	cout << "2   " << A[1] << "  " << B[1] << "  " << C[1] << "  " << D[1] << endl;
	cout << "3   " << A[2] << "  " << B[2] << "  " << C[2] << "  " << D[2] << endl;
	cout << "4   " << A[3] << "  " << B[3] << "  " << C[3] << "  " << D[3] << endl;
	cout << "5   " << A[4] << "  " << B[4] << "  " << C[4] << "  " << D[4] << endl;	
	
	// COLUNAS COM SOL
	if (horario == 3) {
		cout << "Não há colunas com sol neste horário" << endl;
	} else {
		cout << "Colunas com sol: " << coluna_sol[1] << " e " << coluna_sol[2] << endl;
	}
	
	// QUANTIDADE DE ASSENTOS E PREÇO
	cout << "---------------------------------------------------------" << endl;
	cout << "Quantos assentos serão adquiridos? \n";
	cin >> quant_pass;
	
	if (quant_pass < 1) {
		cout << "ERRO! Informe um número válido\n";
	}
	
	passagem = 40.00 * quant_pass;
	
	// WHILE COM POSIÇÃO DOS ASSENTOS
	while(quant_pass > i){
		i++;
		cout << "--- Assento " << i << " ---\n";
		cout << "Qual coluna? ";
		cin >> coluna;
		
		if (coluna != 'a') {
			if (coluna != 'A') {
				if (coluna != 'b') {
					if (coluna != 'B') {
						if (coluna != 'c') {
							if (coluna != 'C') {
								if (coluna != 'd') {
									if (coluna != 'D') {
										cout << "ERRO! Escolha uma coluna válida\n";
										cin >> coluna;
									}
								}
							}
						}
					}
				}
			}
		}
		
		switch(coluna){
			case 'A':
			case 'a':
				cout << "Qual linha? ";
		        cin >> linha;
		        linha--; // o array começa com 0 e não com 1
		        if(A[linha] == 0){
		        	A[linha] = 1;
				}else{
					cout << "ERRO! Escolha um assento disponivel\n";
					i--;
					if(A[linha] == 0){
		        	A[linha] = 1;
		        	}
				}
		        break;
		    case 'B':
		    case 'b':
		    	cout << "Qual linha? ";
		        cin >> linha;
		        linha--;
		        if(B[linha] == 0){
		        	B[linha] = 1;
				}else{
					cout << "ERRO! Escolha um assento disponivel\n";
					i--;
					if(B[linha] == 0){
		        	B[linha] = 1;
		        	}
				}
		        break;
		    case 'C':
		    case 'c':
		    	cout << "Qual linha? ";
		        cin >> linha;
		        linha--;
		        if(C[linha] == 0){
		        	C[linha] = 1;
				}else{
					cout << "ERRO! Escolha um assento disponivel\n";
					i--;
					if(C[linha] == 0){
		        	C[linha] = 1;
		        	}
				}
		        break;
		    case 'D':
		    case 'd':
		    	cout << "Qual linha? ";
		        cin >> linha;
		        linha--;
		        if(D[linha] == 0){
		        	D[linha] = 1;
				}else{
					cout << "ERRO! Escolha um assento disponivel\n";
					i--;
					if(D[linha] == 0){
		        	D[linha] = 1;
		        	}
				}
		        break;
		    default:
		    	cout << "ERRO! Escolha um assento disponivel\n";
		}
	}
	
	//PREÇO TOTAL + ATUALIZAÇÃO DE TODOS ASSENTOS DISPONIVEIS E INDISPONIVEIS
	cout << "Assentos disponíveis (0 - Disponível | 1 - Indisponível):" << endl;
	cout << "    A  B  C  D\n";
	cout << "1   " << A[0] << "  " << B[0] << "  " << C[0] << "  " << D[0] << endl;
	cout << "2   " << A[1] << "  " << B[1] << "  " << C[1] << "  " << D[1] << endl;
	cout << "3   " << A[2] << "  " << B[2] << "  " << C[2] << "  " << D[2] << endl;
	cout << "4   " << A[3] << "  " << B[3] << "  " << C[3] << "  " << D[3] << endl;
	cout << "5   " << A[4] << "  " << B[4] << "  " << C[4] << "  " << D[4] << endl;	
	
	cout << "Valor final: R$" << passagem;
}
