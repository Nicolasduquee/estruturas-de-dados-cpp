#include <time.h>
#include <iostream>
#include <cstdlib>

using namespace std;
const int lanc = 60;

int main(){
	
	int frequencia[6] = {0};
	int i, face;
	
	srand(time(0));
	
	for(i=0; i<lanc; i++){
		face = rand()%6;
		frequencia[face]++;
	}
	
	for(i=0; i < 6; i++){
		cout << "face " << i + 1 << ": "<< frequencia[i] << " vezes   ";
		
		for (int k = 0; k < frequencia[i]; k++){
			cout << " * ";
		}
		
		cout << endl;
	}
}
