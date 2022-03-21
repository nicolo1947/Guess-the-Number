#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main() {
	
	int div,temp,nn,tent;
	tent = 0;
	
	cout << " Set the difficulty (1 = easy, 2 = medium, 3 = hard) : ";
	cin >> temp;
	
	switch (temp) {
		
		case 1: {
			
			div = 10;			
			break;
		};
		case 2: {
			
			div = 50;
			break;
		};
		case 3: {
			
			div = 100;
			break;
		};
		default: {
			
			cout << " wrong selection, try again";
			break;
		};
	};
	
	srand (time(NULL));
    int n = rand() % div + 1;
    
	do {
		
		cout << " Guess The Number : ";
		cin >> nn;
		cout << " - - - - - - - - - -" << endl;
		
		tent++;		
	}
	while (nn != n);
	
	cout << endl <<" Congratulations you guessed the number in " << tent << " attempts";

	
	return 0;
}
