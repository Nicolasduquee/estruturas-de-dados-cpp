#include <stdio.h>
#include <iostream>

using namespace std;

main(){
	int i;
	float S[10];
	
	for(i=0; i<5; i++){
		S[i] = i + 1;
	}
	
	cout << "S[i] = ";
	
	for(i=0; i<5; i++){
		cout << S[i] << endl;
	}
	
	for(i=5; i<10; i++){
		S[i] = i - i;
		cout << S[i] << endl;
	}
	
}
