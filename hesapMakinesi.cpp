#include<iostream>
using namespace std;
int main() {
	float a,b,d,operation, result;
	cout <<"type number: ";
	cin >>a;
	cout <<"type number: ";
	cin >>b;
	cout <<"1 - Addition\n2 - Subtraction\n3 - Multiplication\n4 - Division\n";
	cout <<"Enter the number of the action you want to do: ";
	cin >>operation;
	if (operation==1) { cout <<"Result is: "<<a+b;
	} 
	if (operation==2) { cout <<"Result is: "<<a-b;
	}
	if (operation==3) { cout <<"Result is: "<<a*b;
	}
	if (operation==4) { cout <<"Result is: "<<a/b;
	}
	
	cout<<"\nCikmak icin 1 yazin ";
	cin>>d;
	
	return 0;
}
