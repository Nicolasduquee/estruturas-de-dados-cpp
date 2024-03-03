#include<iostream>

using namespace std;

main(){
	
	int i, n;
	
	int v[] = {1,2,3,4,5};
	
	cout << "v[] = {1,2,3,4,5}" << endl << endl;
	
	for(i=0; i<5; i++){
		cout << "v[" << i << "] = " << v[i] << endl;
 	}
	
	n = sizeof(v) / sizeof(v[0]);

    cout << endl << "O vetor v tem " << n << " elementos." << endl << endl;
    
    int s[5] = {1};
    
    cout << "s[5] = {1}" << endl << endl;
    
    for(i = 0; i<5; i++){
    	cout << "s[" << i << "] = " << s[i] << endl;
	}
	
}
