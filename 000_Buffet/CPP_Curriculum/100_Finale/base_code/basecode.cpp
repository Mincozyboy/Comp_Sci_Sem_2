// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	
	gotoxy(32,4);
	cout<<"  *"<<endl;
	gotoxy(32,5);
	cout<<" ***"<<endl;
	gotoxy(32,6);
	cout<<"*****"<<endl;
    gotoxy(31,7);
	cout<<"*******"<<endl;
	gotoxy(29,8);
	cout<<" *********"<<endl;
	gotoxy(28,9);
	cout<<" ***********"<<endl;
	gotoxy(27,10);
	cout<<" *************"<<endl;
	gotoxy(33,11);
	cout<<"|";
	gotoxy(35,11);
	cout<<"|";
	
	int a= 6;
	int c = 5;
	
		for(int x=0; x<=a; x++){
		gotoxy(x+2,7);
		cout<< "%";
		gotoxy(2+x,6+c);
		cout<<"%";
	}

	for(int y=2; y<=c; y++){
		gotoxy(2,6+y);
		cout<<"%";
		gotoxy(2+a,6+y);
		cout<<"%";
	}

	
	int Dav= 7;
	int Boss= 6;
	
		for(int x=0; x<=Dav; x++){
		gotoxy(16+x,6);
		cout<< "#";
		gotoxy(16+x,5+Boss);
		cout<<"#";
	}

	for(int y=2; y<=Boss; y++){
		gotoxy(16,5+y);
		cout<<"#";
		gotoxy(16+Dav,5+y);
		cout<<"#";
	}
	
	gotoxy(4,6);
	cout<<">";
	gotoxy(6,6);
	cout<<"<";
	
	gotoxy(18,5);
	cout<<">";
	gotoxy(21,5);
	cout<<"<";
	
	int y = 0;
	int i = 2;
	int count = 0;
	int x= 10;
	while(true)
	{
		y=y+1;
		gotoxy(1,i+y);
		cout<<" "<<endl;
		cout<<"#"<<endl;
		sleep(1);
	
		count = count +1;
		
	if (count == 10){
		break;
	}
}
	
	

}
