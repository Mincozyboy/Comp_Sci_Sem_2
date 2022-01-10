// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here

	while (true)
	{ 
		

	int a;
	cout << "Please enter an integer value: ";
	cin >> a;
	int b;
	cout << "Please enter another integer value: ";
	cin >> b;
	char c;
	cout << "Choose an operator (+,-,*,/): ";
	cin >> c;
	
	if(c == ('+')){
		cout << a+b << endl;
	}
	if(c == ('-')){
		cout << a-b << endl;
	}
	if(c== ('*')){
		cout << a*b << endl;
	}
	if(c == ('/')){
		cout << a/b << endl;
	}
	char d; 
	cout << "Please enter q to quit, or any other character to continue: ";
	cin >> d; 
	if (d == ('q')){
		break;
		}
		
	}
}