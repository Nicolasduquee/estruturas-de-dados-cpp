#include <time.h>
#include <iostream>
#include <stdlib.h>

using namespace std;
const int lanc = 10;

int main(){
	int i, face;
	
	for(i=0; i<lanc; i++){
		face = rand()%6;
		cout << face << endl;
	}
	
}
