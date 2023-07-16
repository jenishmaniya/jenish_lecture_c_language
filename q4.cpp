#include<iostream>
using namespace std;
int main(){
	int choice,add,sub,mult,a,b;
	float div,perc;
	
	
	cout << "Press 1 for '+'\n";
	cout << "Press 2 for '-'\n";
	cout << "Press 3 for '*'\n";
	cout << "Press 4 for '/'\n";
	cout << "Press 5 for 'PERCENTAGE'\n";
	cout << "Press 0 for exit\n";
	do{
	cout <<"Enter your choice:";
	cin >> choice;
	switch(choice){
		
		case 1:
			cout <<"Enter first number:";
			cin >>a;
			cout <<"Enter second number:";
			cin >>b;
			add=a+b;
			cout << "ADDITION IS:" << add << endl;
			break;
			
		case 2:
			cout << "Enter first number:";
			cin >> a;
			cout << "Enter second number:";
			cin >> b;
			sub=a-b;
			cout << "SUB IS:"  << sub << endl;
			break;	
			
		case 3:
			cout << "Enter first number:";
			cin >> a;
			cout << "Enter second number:";
			cin >> b;
			mult=a*b;
			cout << "MULT IS:" << mult << endl;
			break;
		
		case 4:
			cout << "Enter first number:";
			cin >> a;
			cout << "Enter second number:";
			cin >> b;
			div=a/b;
			cout << "DIV IS:" << div << endl;
			break;
		
		case 5:
			cout << "Enter first number:";
			cin >> a;
			cout << "Enter second number:";
			cin >> b;
			perc= (a*100)/b;
			cout << "PERC IS:" << perc << endl;
			break;
			default:
                cout << "Invalid choice" << endl;		
	}
}while (choice !=0);
    return 0;
}
