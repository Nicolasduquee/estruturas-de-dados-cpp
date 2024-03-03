#include <stdio.h>
#include <iostream>

using namespace std;

main(){
	int i, chave, k;
	int v[5];
	float S[10];
	
	cout << "Digite 5 valores inteiros:";
	
	for(i=0; i<5; i++){
		cin >> chave;
		v[i] = chave;
		S[i] = chave;
	}
	
	cout << endl; 	
	
	for(i=0; i<5; i++){
		cout << v[i] << " ";	
	}
	
	cout << endl; 
	
	for(i=0; i<5; i++){
		cout << "v[" << i << "]" << " ";	
	}
	
	
	cout << endl << endl;
	
	for(i=0; i<5; i++){
		cout << S[i] << " ";
	}
	
	for(i=5; i<10; i++){
		S[i] = i - i;
		cout << S[i] << " ";
	}
	
	cout << endl;
	
	for(i=0; i<10; i++){
		cout << "S[" << i << "]" << " ";	
	}
	
}
