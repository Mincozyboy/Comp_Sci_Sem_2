// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here

	int a;
	cout<<"Please enter box width: ";
	cin>> a;
	
	char b;
	cout<<"Please enter border character: ";
	cin>> b;

	int c;
	cout<<"Please enter box height: ";
	cin >> c; 
	
	for(int x=0; x<=a; x++){
		gotoxy(0+x,7);
		cout<< b;
		gotoxy(0+x,6+c);
		cout<<b;
	}

	for(int y=2; y<=c; y++){
		gotoxy(0,6+y);
		cout<<b;
		gotoxy(0+a,6+y);
		cout<<b;
	}

	
}
