// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	int a;
	cout << "Please enter an integer value: ";
	cin >> a;
	int b;
	cout << "Please enter another integer value: ";
	cin >> b;
	char c;
	cout << "Choose an operator (+,-,*,/) ";
	cin >> c;
	if(c == ('+')){
		cout << a+b;
	}
	if(c == ('-')){
		cout << a-b;
	}
	if(c== ('*')){
		cout << a*b;
	}
	if(c == ('/')){
		cout << a/b;
	}
}
