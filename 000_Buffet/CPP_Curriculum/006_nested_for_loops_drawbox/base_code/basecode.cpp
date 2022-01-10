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
	
	for(int x = 1; x< a+1; x++){
		for(int y = 1; y<c; y++){
			gotoxy(x+10, y+6);
			cout << b;
		}
		//cout << endl;
	}

}
