// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	int a;
	cout<<"Please enter box width: ";
	cin>>a;
	
	char b;
	cout<<"Please enter border char: ";
	cin>>b;
	
	int c;
	cout<<"Please enter box height: ";
	cin>>c;
	
	int d;
	cout<<"Please enter x coordinate: ";
	cin>>d;
	
	int e;
	cout<<"Please enter y coordinate: ";
	cin >> e;

	while(true)
	{
		c=c+1;
		gotoxy(d,e);
		cout<<" "<<endl;
		cout << b<< endl;
		sleep(1);

}
}