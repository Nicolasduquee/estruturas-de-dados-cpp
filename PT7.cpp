#include <iostream>
#include <string>
#include <unistd.h>

using namespace std;

int cadastroP(){
	
	string nomeP, classe;
	int qtdN=0, tipoM;
	float peso[qtdN];
	
	cout << "Qual e o seu nome?" << endl;
	getline (cin, nomeP);
	sleep(1);
	
	cout << endl << "Para qual classe leciona?" << endl;
	getline (cin, classe);
	sleep(1);
	
	cout << endl << "Qual a quantidade de notas a serem consideradas?" << endl;
	cin >> qtdN;
	sleep(1);
	
	cout << endl << "Qual o tipo de media a ser calculado?" << endl;
	cout << endl << "1 - Media Aritmetica.";
	cout << endl << "2 - Media Ponderada." << endl;
	cin >> tipoM;
	sleep(1);
	
	if(tipoM !=1 && tipoM !=2){
		cout << "Opcao invalida!";
	}
	
	else if (tipoM == 2){
		cout << endl << "Qual o peso de cada nota?" << endl;
		
		for(int i=0; i<qtdN; i++){
			cout << endl << "Nota " << i+1 << ":  ";
			cin >> peso[i];
			sleep(1);
		}
	}
}

int menu( int opcao){
	cout << "Selecione uma opao: " << endl;
	cout << "1- Cadastro de novo aluno." << endl;
	cout << "2- Remoção de aluno." << endl;
	cout << "3- Relatórios." << endl;
	cout << "4- Encerrar o programa" << endl;
	
	cin >> opcao;
}
	

void cadastroA(){

		int soma = 0;
		int maiorN = 0;
		int menorN = 0;
		
		for(int k = 0; k<6; k++){
			cin >> int nota[k];
			soma += nota[k];
			
			if (nota[k] > maiorN){
				maiorN = nota[k];
			}
			else if (nota[k] < menorN){
				menorN = nota [k];
			}
		}
		
		media[i] = (soma/6);

}

relatorio(){
	
	for(k=0; k<i; k++){

		cout << endl <<  "Codigo do Aluno: " << (k + 1) << endl;
		
		for( int l=0; l<6; l++){
			cout << "Nota " << (l + 1) << ": " << nota[l] << endl;
		}
		
		cout << endl << "Maior nota: " << maiorN;
		
		cout << endl << "Menor nota: " << menorN;
	
		cout << endl << "Media: " << media[k];
	
		cout << endl << endl << endl;
	
	}	
}*/


int main(){
	
	
	cout<< "Ola! Seja bem vindo(a)!" << endl;
	sleep(2);
	system("cls");
	
	cadastroP();
	
	
	
	
	/*/int resp = 0;
	
	do{
	
		cout << " O que deseja realizar?" << endl;
		cout << " 1 - Cadastrar novo aluno" << endl << " 2 - Gerar relatorio" << " 3 - Sair" << endl;
		cin >> resp;
		
		if (resp == 1){
			
			cadastroA();
			i++;
			
		}
		else if(resp == 2){
			
			relatorio();
			
		}
		else if (resp == 3) {
    		break;  
		}
		
	} while(resp != 3);*/
	
}
