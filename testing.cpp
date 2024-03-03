#include <iostream>
#include <string>
#include <unistd.h>

using namespace std;




int cadastroP(){
	
	char nomeP[30], classe[3];
	int qtdA, qtdN=0, tipoM;
	float peso[qtdN];
	
	cout << "Qual e o seu nome?" << endl;
	cin >> nomeP;
	sleep(1);
	
	cout << endl << "Para qual classe leciona?" << endl;
	cin >> classe;
	sleep(1);
	
	cout << endl << "Qual a quantidade de alunos na sala?" << endl;
	cin >> qtdA;
	sleep(1);
	
	cout << endl << "Qual a quantidade de notas a serem consideradas?" << endl;
	cin >> qtdN;
	sleep(1);
	
	cout << endl << "Qual o tipo de media a ser calculado?" << endl;
	cout << endl << "1 - Media Aritmetica.";
	cout << endl << "2 - Media Ponderada." << endl;
	cin >> tipoM;
	sleep(1);
	
	if (tipoM == 2){
		cout << endl << "Qual o peso de cada nota?" << endl;;
		
		for(int i=0; i<qtdN; i++){
			cout << endl << "Nota " << i+1 << ":  ";
			cin >> peso[i];
			sleep(1);
		}
	}
	
	cout << nomeP;
	cout << classe;
	cout << qtdA;
	cout << qtdN;
	cout << tipoM;
	
	for (int k=0; k<qtdN; k++){
		cout << endl << "Peso Nota " << k+1 << ":  " << peso[k];
	}
}
