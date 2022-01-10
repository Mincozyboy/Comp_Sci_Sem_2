// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	int a;
	cout<<"Please enter line length: ";
	cin >> a;
	
	char b; 
	cout<<"Please enter line symbol: ";
	cin >> b;
	
	int d;
	cout<<"Please enter line x coordinate: ";
	cin >> d;
	
	int e;
	cout<<"Please enter line y coordinate: ";
	cin>> e; 
	
	
	for(int x = 1; x< a+1; x++){
			gotoxy(d, e);
			cout << b;
		}
		//cout << endl;
	}




