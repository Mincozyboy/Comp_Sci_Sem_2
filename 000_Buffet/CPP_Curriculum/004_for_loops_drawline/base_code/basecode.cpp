// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	char a;
	cout << "Please choose a symbol: ";
	cin >> a;
	
	int b; 
	cout << "Please enter the line length: ";
	cin >> b; 
	
	char c;
	cout << "Vertical or Horizontal: ";
	cin >> c;
	
	if(c == ('V')){ 
		for(int i= 0; i<b; i++)
		cout<< a<<endl;
	}
	if(c == ('v')){ 
		for(int i= 0; i<b; i++)
		cout<< a<<endl;
	}
	if(c == ('H')){
		for(int i=0; i<b; i++)
		cout<< a;
	}
	if(c == ('h')){
		for(int i=0; i<b; i++)
		cout<< a;
	}
	
	
	}

