#include <iostream>
#include <math.h>

using namespace std;

const int n = 10;

int main (){
	
	int i;
	float A[n];
	float S = 0;
	float chave;
	int soma[n/2];
	
	cout << "Digite " << n << " valores reais: ";
	
	for(i=0; i<(2 * n); i++){
		
		if(i < n){
			cin >> chave;
			A[i] = chave;	
		}
		
		else{
			cout << endl << "A[" << (i - n) << "] = " << A[(i - n)] << endl;
		}
	
	}
	
	for (i=0; i < (n/2); i++){
	
		soma[i] = pow((A[i]  - A[((n - 1) - i)]), 2);
		S += soma[i];			

		
		cout << endl << "(A[" << i << "]  - A[" << (n - 1) - i << "]) = " << A[i] << " - " << A[((n - 1) - i)] <<" = " << (A[i]  - A[((n - 1) - i)]) << " ==> " << (A[i]  - A[((n - 1) - i)]) << " * " << (A[i]  - A[((n - 1) - i)]) << " = " << soma[i] << endl;
		
	}
	
	cout << " S = ";
	
	for (i=0; i < (n/2); i++){
		cout << soma[i] << " + ";
	}
	
	cout << " = " << S;
	
	
	
	
	
	
}
