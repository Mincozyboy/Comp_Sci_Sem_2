// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	int a;
	cout<<"Please enter box width: ";
	cin >> a;
	
	char b; 
	cout<<"Please enter border char: ";
	cin >> b;
	
	int c;
	cout<<"Please enter box height: ";
	cin >> c; 
	
	int d;
	cout<<"Please enter line x coordinate: ";
	cin >> d;
	
	int e;
	cout<<"Please enter line y coordinate: ";
	cin>> e; 
	
	for(int x = 1; x< a+1; x++){
		for(int y = 1; y<c; y++){
			gotoxy(x+d, e+y);
			cout << b;
		}
		//cout << endl;
	}

}

