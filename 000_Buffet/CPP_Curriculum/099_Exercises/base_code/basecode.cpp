// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	char x;
	int y= 0;
	int i =2;
	int count =0;
	cout << "Please choose a symbol for your snowflake "<< endl;
	cin >> x;
	
	while(true)
	{
		y=y+1;
		gotoxy(1,i+y);
		cout<<" "<<endl;
		cout<<x<<endl;
		sleep(1);
	
		count = count +1;
	}

}
