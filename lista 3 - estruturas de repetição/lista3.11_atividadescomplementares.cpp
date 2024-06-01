#include <iostream>
using namespace std;

main () {
	int i, n, ra, ch_e, ch_p, soma_e, n_e;
	
	cout << "informe quantos itens pretende informar: ";
	cin >> n;
	
	i = 0;
	soma_e = 0;
	n_e = 0;
	
	while (n > i) {
		i++;
		
		cout << "\ninforme os dados do aluno " << i << " (depois mais " << n - i << ")" << endl;
		cout << "informe os tres algarismos finais do RA: ";
		cin >> ra;
		cout << "informe a carga horaria de extensao: ";
		cin >> ch_e;
		cout << "informe a carga horaria de pesquisa: ";
		cin >> ch_p;
		
		if ((ch_e + ch_p) >= 180) {
			cout << "\na) o aluno de RA " << ra << " ja completou 180 horas de AC" << endl;
		}
		
		soma_e = soma_e + ch_e;
		
		if (ch_e == 0) n_e++;
	}
	
	cout << "b) a media de AC em extensao eh " << soma_e / n << " horas" << endl;
	cout << "c) a quantidade de alunos que nao fizeram atividades de extensao eh" << n_e << endl;
}
